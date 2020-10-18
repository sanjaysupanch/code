#include <iostream>

using namespace std;

void swapthis(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partitioner(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low-1;  // Index of smaller element

    for(int j=low; j<=high-1; j++)
    {
        // If current element is smaller than or equal to pivot
        if(arr[j]<=pivot)
        {
            i++;    // increment index of smaller element
            //swap arr[i] & arr[j]
            swapthis(arr[i],arr[j]);
        }
    }
    swapthis(arr[i+1],arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi = partitioner(arr,low,high);
        quickSort(arr, low, pi-1);
        quickSort(arr,pi,high);
    }
}

int main()
{
    int num,arr[20];
    cin >> num;
    for(int i=0; i<num; i++)
        cin >> arr[i];

    quickSort(arr,0,num);

    for(int i=0; i<num; i++)
        cout << arr[i] << " ";

    cout << endl;
}
