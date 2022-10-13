#include <iostream>

using namespace std;

/*   reversing arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/*    print an array */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}


int main()
{
    /* Driver */
    int arr[] = { 1, 9, 3 ,10, 5, 6,7, 8 ,2, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    // print original array
    printArray(arr, n);

    //  calling reversed array
    rvereseArray(arr, 0, n - 1);
    cout << "Reversed array is" << endl;

    printArray(arr, n);

    return 0;
}