#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j=j+1;
        }
        int k=1;
        while(k<=i)
        {
            cout<<k;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
        
    }
  
}


