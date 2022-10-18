#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int N;
    cin>>N;
    int input[10000000];
    int sum=0;
    for(int i=0;i<N;i++)
    {
        cin>>input[i];
        sum=sum+input[i];
    }
    
    cout<<sum;
 
}
