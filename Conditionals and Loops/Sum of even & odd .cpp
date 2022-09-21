#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,i;
    cin>>n;
    int even_sum=0;
    int odd_sum=0;
    
    while(n>0){
     i=n%10;
     if(i%2==0)
    {
        even_sum=even_sum+i;
    }
    else
    {
        odd_sum=odd_sum+i;
    }
    n=n/10;
    }
    cout <<even_sum <<" " <<odd_sum ;
}
