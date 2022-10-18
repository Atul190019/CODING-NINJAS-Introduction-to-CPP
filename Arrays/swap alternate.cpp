/*void swapAlternate(int *arr, int size)
{
    //Write your code here
    int i=0;
    for(i=0;i<size-1;i++)
    {
        int j=i+1;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
    }
    
}*/

void swapAlternate(int arr[],int size){
	
    int i = 0;
    int j = i + 1;
    
    while(j < size){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        i = i + 2;
        j = i + 1;
    }
}
