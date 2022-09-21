#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int S,E,W,c;
    cin>>S;
    cin>>E;
    cin>>W;
    
    while(S<=E)
    {
        c = (S-32)*5/9;
        cout<<S<<"\t"<<c<<endl;
        S = S+W;
    }
    
    
}
