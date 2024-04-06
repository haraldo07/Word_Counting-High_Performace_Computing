#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
using namespace std;

int main() {
    const std::string filename = "wordlist_200000000.txt";

    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Failed to open the file: " << filename << std::endl;
        return 1;
    }

    std::string word;
    int count = 0;
    
    auto start = std::chrono::steady_clock::now();
    
    while (file >> word) {
        count++;
    }

	auto end = std::chrono::steady_clock::now();
	
    file.close();
    
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    
    std::cout << "The number of words in the text is: " << count << std::endl;
    std::cout << "Time taken by the to count words: " << duration << " milliseconds" << std::endl;
	
	return 0;
}
