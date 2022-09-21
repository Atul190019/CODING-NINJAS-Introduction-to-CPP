//It will not work for all cases like power 0

/*#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,n;
    cin >> x >> n;
    int pow=1;
	while(n>0)
    {
        pow=pow*x;
        n--;
    }
    cout << pow;
}*/


#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x,n;
    cin>>x>>n;
    int i=1;
    int ans=x;
     if(n==0){
            ans=1;
            cout<<ans;
    }
    else{
        while(i<n){
            ans=ans*x;
            i=i+1;
        }
    cout<<ans;
    }
}
