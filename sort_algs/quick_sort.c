#include<stdio.h>


typedef int MyCompares(const int *first , const int *last);

void quicksort(int *arr, int first, int last, MyCompares );
int findpivot( int arr[], int low, int high, MyCompares comparefv );
int a_isBiggerDESC(const int *a, const int *b);
int b_isBiggerASC(const int * a, const int * b);
void swap(int *arr, int a, int b);


int n;
int main()
{


    int arr[] = {1,2,4,8,6,1,5,3,5,4,9,5,7,6,5,2,3,4,5,8,4};

    n = sizeof(arr)/sizeof(int);
    int i;
    quicksort(arr, 0, n-1, b_isBiggerASC);

    for( i=0; i< n; i++)
        printf("%d\n", arr[i]);


    return 0;
}



void quicksort(int *arr, int first, int last,  MyCompares comparefv )
{
    if(first == last) return;
    int pivot;

    for(int i=0; i< n; i++)
        printf("%d, ", arr[i]);
    printf("\n");

    if(first < last )
    {
       pivot = findpivot(arr, first, last, comparefv);
       quicksort(arr, first, pivot-1, comparefv);
       quicksort(arr, pivot+1, last, comparefv);
    }

}

int a_isBiggerDESC(const int * a, const int * b)
{
    if(*(int *)a  >  *(int *)b) return 1;
    else return 0;
}

int b_isBiggerASC(const int * a, const int * b)
{
    if(*(int *)a  <  *(int *)b) return 1;
    else return 0;
}

int findpivot( int arr[], int low, int high, MyCompares comparefv ) {

   int i;
   int pivot = arr[high];
   int pivot_index = low;

   for (i=low; i < high; ++i ) {
      if (comparefv(&arr[i], &pivot)) {
         swap( arr, i, pivot_index );
         ++pivot_index;
      }
   }
   swap( arr, high, pivot_index );
   return pivot_index;
}

void swap(int *arr, int a, int b)
{
   // printf("%d - %d\t", arr[a], arr[b]);
    if(arr[a] != arr[b]){
    arr[a] = arr[a] ^ arr[b];
    arr[b] = arr[a] ^ arr[b];
    arr[a] = arr[a] ^ arr[b];
    }
   // printf("%d - %d\n", arr[a], arr[b]);
}
