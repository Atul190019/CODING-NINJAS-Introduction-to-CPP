#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int N,C;
    cin>>N>>C;
    int sum=0;
    int prod=1;
    if(C==1)
    {
       int i=1;
        while(i<=N){
            sum=sum+i;
            i++;
        }
        cout<<sum<<endl;
    }
    else if(C==2)
    {
        int j=1;
        while(j<=N){
            prod=prod*j;
            j++;
        }
        cout<<prod<<endl;
    }
    else{
        cout<<-1;
    }
    
	
}
