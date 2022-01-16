#include<bits/stdc++.h>
using namespace std;

struct Pair {
    int max;
    int min;
};

Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    
    if(n==1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }

    if(arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    
    for (int i = 2; i < n; i++)
    {
        if(arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
        
    }
    return minmax;    
}

int main()
{
    int arr[] = {5, 3, 8, 6, 4};
    int size = 5;

    struct Pair minmax = getMinMax(arr, size);
    cout<<"The minimum element is : "<<minmax.min<<endl;
    cout<<"The maximum element is : "<<minmax.max;

    return 0;
}