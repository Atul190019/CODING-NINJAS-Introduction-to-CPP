#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int N;
    cin>>N;
    char ch='A';
    
    int i=1;
    while(i<=N){
        int j=1;
        while(j<=i){
            cout << ch;
            j=j+1;
        }
        cout<<endl;
        ch = ch+1;
        i=i+1;
    }
}
