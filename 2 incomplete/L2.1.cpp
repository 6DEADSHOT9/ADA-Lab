#include <stdio.h>
#include <iostream>
using namespace std;

// Implement Binary Search Tree in a normal array

int sort_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}

int binary_search(int arr[], int n, int query)
{
    int high = n-1, low = 0, mid, count = 0;
    while (low <= high)
    {

        count+=1;
        mid = (high + low) / 2;
        if (arr[mid] == query)
        {
            cout << "Number of iterations:" << count << "\n";
            cout << "Found at index: " << mid << "\n";
            return mid;
        }
        else if (arr[mid] > query)
        {
            high = mid - 1;
        }
        else if (arr[mid] < query)
        {
            low = mid + 1;
        }
    }
    cout << "Number of iterations:" << count << "\n";

    return -1;
}


int main(void)
{
    int arr[100];
    int sort_array(int arr[], int n);
    int binary_search(int arr[], int n, int query);
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    int query;
    scanf("%d", &query);

    // Sort the array
    system("cls");
    sort_array(arr, n);
    // Binary search
    binary_search(arr, n, query);
    printf("\nFinish");

    return 0;


}
