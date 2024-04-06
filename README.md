%%html
<style>
    background-color: #FFFFFF;
</style>

# Word Counting using High Performace Computing
To parallelize the problem of counting the number of words in a text, the OpenMP Application Program Interface
is used to direct <mark>multi-threaded, shared memory parallelism</mark>. <br><br>

The dataset used to count the number of words is taken from *wordlist.10000* created by **Massachusetts Institute of Technology**,
which can be downloaded by clicking [here](https://www.mit.edu/~ecprice/wordlist.10000) <br><br>

The dataset has only 10000 words which is not suitable for parallelization. So the same 10000 words is copied to make a new
wordlist of sizes ***"500,000", "1,000,000", "5,000,000", "10,000,000" and "200,000,000"***. <br><br>

First, the number of words is counted serially and then the *OpenMP pragma* is used to count the number of words parallely.
The computing units starts from 
