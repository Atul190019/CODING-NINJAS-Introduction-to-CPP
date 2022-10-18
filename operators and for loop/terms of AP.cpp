#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x;
    cin>>x;
    int N;
    int f=1;
    
    for(N=1;N<=1000000;N++)
    {
        int t=((3*N)+2);
        if(t%4!=0  && f<=x){
        cout<<t<<" ";
            f++;
        }
    
    }
	
}
