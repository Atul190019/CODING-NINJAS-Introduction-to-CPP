/*#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  /*int N;
    cin>>N;
    
    int i=1;
    while(i<=N){
        int j=1;
        while(j<=i){
            cout << i--;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){
        for(int j = i; j >0; j--){
            cout<<j;
        }
        cout<<endl;
        i++;
    }
}
