#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int N;
    cin>>N;
    
    int i=1;
    while(i<=N){
        int j=1;
        char ch='A'+i-1;
        while(j<=i){
            cout << ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
