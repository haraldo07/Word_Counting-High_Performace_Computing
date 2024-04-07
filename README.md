# Word Counting using High Performance Computing with OpenMP

## Introduction
This project aims to parallelize the process of counting words in a text file using [OpenMP](https://en.wikipedia.org/wiki/OpenMP) for ***multi-threaded, shared memory parallelism***. It employs a dataset obtained from the **Massachusetts Institute of Technology (MIT)** containing 10,000 words, which is duplicated to create word lists of various sizes for testing.

## Dataset
The dataset used for word counting is obtained from MIT's [wordlist.10000](https://www.mit.edu/~ecprice/wordlist.10000). To facilitate parallelization, copies of this dataset are created with sizes ranging from *"500,000"* to *"200,000,000"* words.

## Usage
### Prerequisites
- OpenMP supported compiler
- C++ standard library
- Access to the wordlist dataset

### Instructions
1. Clone or download the project repository.
2. Ensure the wordlist dataset is accessible in the project directory or provide the correct path in the code.
3. Compile the code using an OpenMP-supported compiler.
4. Run the executable.

## Key Features
- **OpenMP Parallelization**: Utilizes OpenMP directives for multi-threaded parallelism.
- **Word Counting Algorithm**: Implements a word counting algorithm on text chunks distributed among threads.
- **Dynamic Chunk Allocation**: Divides the text into chunks for parallel processing, ensuring efficient resource utilization.
- **Performance Evaluation**: Measures the execution time and total word count, providing insights into the parallelization effectiveness.

## Results and Further Details
For more detailed results and project insights, refer to the [word_count_parallel.cpp](./word_count_parallel.cpp) document uploaded in the project repository.
