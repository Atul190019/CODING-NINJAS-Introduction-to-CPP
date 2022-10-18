#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int f1=1;int f2=1;
    int fib=0;
    if(N ==1){
    	cout<<f1;
	}
	else if(N==2){
		cout<<f2;
	}
	else{
		for(int i=1; i< N-1; i++){
        fib = f1 + f2;
        
        f1=f2;
        f2=fib;
	}
	cout<<fib;
	}
}
