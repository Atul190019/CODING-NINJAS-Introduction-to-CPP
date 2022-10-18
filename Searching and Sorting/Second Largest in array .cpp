int findSecondLargest(int arr[], int n){
    long a = 2147483648;
     int count=0;int i=0,j=1;
    for(j;j<n;j++){
        if(arr[i] == arr[j]){
        	count++;
        }
    }
    if((count)==n-1 || n <= 1)
    	return -a;
    else{
        int max = -9999999;
	    int j = 0;
	    for(int i = 0; i < n; i++){
		    if(arr[i] > max){
			    max = arr[i];
		    }
	    }
	    int temp = max;
	    max = -9999999;
	    for(int i = 0; i < n; i++){
		    if(arr[i] > max && arr[i] != temp){
			    max = arr[i];
		    }
	    }
        return max;
	}
}


/*
#include<limits.h>
using namespace std;
int FindSecondLargest(int *input,int n){
    if(n<=0)
        return INT_MIN;
    int maxx=input[0];
    int secmax=INT_MIN;
    for(int i=1;i<n;i++) {
        if(input[i]>maxx){
            secmax=maxx;
            maxx=input[i];
        }
        else if(input[i]>secmax && input[i] != maxx)
            secmax=input[i];
    }
    return secmax;
}
*/
