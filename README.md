# Parallel Word Counting using OpenMP

## Introduction
This project aims to parallelize the process of counting words in a text file using [OpenMP](https://en.wikipedia.org/wiki/OpenMP) for ***multi-threaded, shared memory parallelism***. It employs a dataset obtained from the **Massachusetts Institute of Technology (MIT)** containing 10,000 words, which is duplicated to create word lists of various sizes for testing.

## Dataset
The dataset used for word counting is obtained from MIT's [wordlist.10000.txt](https://www.mit.edu/~ecprice/wordlist.10000). To facilitate parallelization, copies of this dataset are created with sizes ranging from *"500,000"* to *"200,000,000"* words.

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
- **Efficient Parallel Processing**: Utilizes OpenMP directives to efficiently distribute word counting tasks among multiple threads, leveraging multi-core processors for enhanced performance.
- **Adaptive Chunk Allocation**: Dynamically divides the input text into chunks based on the number of threads, optimizing resource utilization and minimizing overhead.
- **Optimized Word Counting Algorithm**: Implements an optimized algorithm for word counting, ensuring efficient processing of text data within each thread's assigned chunk.
- **Performance Evaluation**: Includes comprehensive performance evaluation metric such as execution time, enabling thorough assessment of parallelization effectiveness and scalability.

## Results and Further Details
For more detailed results and project insights, refer to the [Project Report](./HPC_Project_Report.pdf) uploaded in the project repository.
