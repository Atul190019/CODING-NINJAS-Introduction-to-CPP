#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    float basic;
    char Grade;
    cin >> basic >> Grade;
    float totalSalary;
    float hra=0.20*basic;
    float da=0.50*basic;
    float pf=0.11*basic;
    float allow;
    
    if(Grade=='A')
    {
        allow=1700;
    }
    else if(Grade=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    
    totalSalary=basic+hra+da+allow-pf;
    cout<<llround(totalSalary);
	
}
