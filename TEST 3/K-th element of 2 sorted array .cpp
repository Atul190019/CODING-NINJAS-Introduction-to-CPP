int kthElement(vector<int> &arr1, int m, vector<int>& arr2, int n, int k)
{
    vector<int> arr3(arr1.size()+arr2.size());

    // i is pointer to first array,j is to second and d is to third
    int i=0,j=0,d=0;
    

    while (i < m && j < n)
    {   
        // Add the element from arr1 and arr2
        if (arr1[i] < arr2[j])
        {
            arr3[d++] = arr1[i++];
        }
        else
        {
            arr3[d++] = arr2[j++];
        }
    }

    // Add remaining elements of the arrays if any is left
    while (i < m)
    {
        arr3[d++] = arr1[i++];
    }

    while (j < n)
    {
        arr3[d++] = arr2[j++];
    }
    
    // For 0 based indexing
    return arr3[k-1];
}
