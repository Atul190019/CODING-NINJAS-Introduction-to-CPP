void createSequenceHelper(long long current, long long n, vector<long long> &result){
    
    // Base case.
    if(current > n) {
        return ;
    }
        

    // Add the current number to result.
    if(current != 0) {
        result.push_back(current);
    }

    // Recurse by adding 2 and 5 to the end of the number
    createSequenceHelper(current * 10  + 2, n, result);
    createSequenceHelper(current * 10 + 5, n, result);
}
vector<long long> createSequence(long long n) {

    // Vector to store the numbers in increasing order.
    vector<long long> result;

    // Call the function to add numbers to the result.  
    createSequenceHelper(0, n, result);
    sort(result.begin(), result.end());
    // Return result.
    return result;

}
