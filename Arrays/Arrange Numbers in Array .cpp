/*void arrange(int *arr, int n)
{
    //Write your code here
    int j=n-1;
    int val=1;
    for(int i=0;i<n;i++)
    {
        arr[i]=val;
        arr[j]=++val;
        j--;
    }
}*/
void arrange(int arr[],int n){
    int j = 0;
	int i = 0;
    
    while(j <= n){
        
        if( j % 2 != 0){
            arr[i] = j;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    j = n;
    while(j >= 1){
        
        if(j % 2 == 0){
            arr[i] = j;
            i++;
            j--;
        }
        else{
            j--;
        }
    }
}
