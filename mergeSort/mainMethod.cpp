#include <iostream>

using namespace std;

// Function prototypes
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    cout << "Given array is \\n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";

    mergeSort(arr, 0, arr_size - 1);

    cout << "\\n\\nSorted array is \\n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    return 0;
}

