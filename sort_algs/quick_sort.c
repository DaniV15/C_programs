#include<stdio.h>



void quicksort(int *arr, int first, int last, void *compare(const void *, const void *) );
int compare(const void * a, const void * b);
void swap(int *arr, int a, int b);


int main()
{

    int arr[] = {10, 5, 15, 12, 90, 80};
    int n = sizeof(arr)/sizeof(arr[0]), i;



    return 0;
}



void quicksort(int *arr, int first, int last, compare )
{

    if( compare( first,last) )
    {
        int pivot = partition(number)

    }

}

int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

void separation(int *arr, int first, int last )
{
    int pivot = arr[first];
    i= first, j = last+1;
    while( i < j)
    {
        do
        {
            i++;
        }while(a[i] < pivot && i<last)
        do{
            j--;
        }while(a[j]>pivot && j>elso)
        if(i < j) swap(a, i, j);
    }
    swap(a, E,j);
    return j;
}

void swap(int *arr, int a, int b)
{
    arr[a] ^= arr[b];
    arr[b] ^= arr[a];
    arr[a] ^= arr[b];

}
