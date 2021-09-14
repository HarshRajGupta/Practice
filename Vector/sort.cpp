#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
int  partition(int* arr, int low, int high)
{
    int pivot = arr[high]; // pivot // last element
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            // increment index of smaller element
            swap(&arr[++i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int* arr, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
        int n;
        int Arr[n] = {0};
        cin >> n;
        for (int i=0; i<n; ++i)
        {
               cin >> Arr[i];
        }
        quickSort(Arr, 0, n - 1);
        
        for (int i=0; i<n; ++i)
        {
                cout << Arr[i] << " ";
        }
        return 0;
                
}