//
//  main.cpp
//  selection sort
//
//  Created by user on 3/4/24.
//

#include <iostream>
using namespace std;
void selectionSort(int arr[], int size)
{
    int i, j, min;
    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(arr[min], arr[i]);
    }
}
void selectionSortD(int arr[], int size)
{
    int i, j, max;
    for (i = 0; i < size - 1; i++) {
        max = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] > arr[max])
                max = j;
        }
        if (max != i)
            swap(arr[max], arr[i]);
    }
}
void printarr(int arr[],int size){
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(int argc, const char * argv[]) {
    int arrOne[]={1,2,5,20};
    int arrTwo[]={3,8,7,9};
    int  arrMerge[20];
    int sizeOne, sizeTwo, i, k;
 sizeOne = sizeof(arrOne)/sizeof(arrOne[0]);
 sizeTwo = sizeof(arrTwo)/sizeof(arrTwo[0]);
    selectionSort(arrOne, sizeOne);
    printarr(arrOne, sizeOne);
    selectionSortD(arrTwo, sizeTwo);
    printarr(arrTwo, sizeTwo);
      
      
       for(i=0; i<sizeOne; i++)
       {
           arrMerge[i] = arrOne[i];
       }
       k = i;
       for(i=0; i<sizeTwo; i++)
       {
           arrMerge[k] = arrTwo[i];
           k++;
       }
       for(i=0; i<k; i++)
           cout<<arrMerge[i]<<" ";
       cout<<endl;
    
    return 0;
    
    return 0;
}
