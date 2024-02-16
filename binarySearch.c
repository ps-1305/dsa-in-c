#include <stdio.h>

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = arr[size-1];
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}


int main(void){
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int s=12, e=8;
    printf("The element %d is present at index %d", e,binarySearch(array, s, e));
    return 0;
}
