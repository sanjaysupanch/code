#include <iostream>
using namespace std;

/*---function that performs binary search--------------------*/
/*---------we take three variables namely start, mid and end to keep track of start, mid and end of the given array respectively
           the main idea of binary search is to search only into half relevant list and neglect the other half
           we have to check three conditions which are:
           1.)check if the item to be searched is equal to the element present at mid of array, if it is stop the whole process right there and return the 'mid'
           2.)check if the item is less than the elments present at mid, if it the case, update the end variable
           3.)check if the item to be searched is greater than element at the mid, if that is, so update the start variable
              repeat all above three steps until, we found the element or there is no element left in the array--------*/
              
int binarySearch(int arr[], int low,int high,int item){
    int start,end,mid;
    start = low;
    end = high;
    while(start <= end){
        mid = (start + end) / 2;
        if(item == arr[mid])
          return mid;
        else if(item < arr[mid])
          end = mid - 1;
        else
          start = mid + 1;
    }
    return -1;
}


int main()
{

  //binary search is performed on sorted array!
  int arr[] = {9,15,23,34,89};
  int n = sizeof(arr) / sizeof(arr[0]);
  int item = 89;
  int pos = binarySearch(arr,0,n-1,item);
  if(pos == -1)
    cout << item << " is not present in the list";
  else
    cout << item << " is present at "<< pos <<" in the list";
   return 0;
}
