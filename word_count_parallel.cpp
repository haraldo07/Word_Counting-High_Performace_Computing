#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <omp.h>
#include <chrono>
#include <cctype>

int countWordsInChunk(const std::string& chunk) {
    std::istringstream iss(chunk);
    int count = 0;
    std::string word;
    while (iss >> word) {
        count++;
    }
    return count;
}


int main() {
    std::ifstream file("wordlist_200000000.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    
    std::string text = buffer.str();

    const int num_threads = 12;//omp_get_max_threads();
	int total_word_count = 0;
	
	auto start = std::chrono::steady_clock::now();
    #pragma omp parallel num_threads(num_threads)
    {
        int thread_id = omp_get_thread_num();
        int chunk_start = (text.size() / num_threads) * thread_id;
        int chunk_end = (thread_id == num_threads - 1) ? text.size() : (text.size() / num_threads) * (thread_id + 1);
        
        while (chunk_end < text.size() && !isspace(text[chunk_end])) {
            chunk_end++;
        }

        while (chunk_start > 0 && !isspace(text[chunk_start])) {
            chunk_start--;
        }
        
        std::string chunk = text.substr(chunk_start, chunk_end - chunk_start);
        int word_count = countWordsInChunk(chunk);
        
        #pragma omp atomic		        
		total_word_count += word_count;
        /*#pragma omp critical
        {
            std::cout << "Thread " << thread_id << " processed " << word_count << " words." << std::endl;
        }*/
    }
    
    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    
    std::cout << "Total word count: " << total_word_count << std::endl;
    std::cout << "Time taken by the to count words: " << duration << " milliseconds" << std::endl;

    return 0;
}