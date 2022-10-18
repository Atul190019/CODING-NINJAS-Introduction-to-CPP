#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin>>n;
    int dec=0,b=1;
    int rem;
    while(n>0)
    {
        
            rem=n%10;
            dec=dec+rem*b;
            b*=2;
            n=n/10;
            
        
        
    }
    cout<<dec;
	
}
