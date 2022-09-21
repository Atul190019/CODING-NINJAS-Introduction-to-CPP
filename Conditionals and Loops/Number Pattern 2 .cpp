#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int N;
    cin>>N;
    int i=1;
    while(i<=N)
    {
        int k=1;
        while(k<=N-i)
        {
           cout<<" "; 
            k=k+1;
        }
        int j=1;
       int val=i;
        while(j<=i)
        {
            cout<<val;
            j=j+1;
            val=val+1;
            
        }
        cout<<endl;
        i=i+1;
        
    }
  
}
