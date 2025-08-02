/*
  Selection Sort (Descending Order) - Detailed Explanation:

  - Start from the first index (i = 0) and assume it's the maximum.
  - Compare it with all remaining elements to find the actual maximum.
  - If a larger element is found, store its index.
  - After the inner loop, swap the largest found element with the current index.
  - This places the largest unsorted element in its correct position.

  - In the next pass, do the same for the rest of the unsorted array.
  - After each pass, the sorted (left) portion grows, and the unsorted (right) portion shrinks.
  - Repeat this process until the entire array is sorted in descending order.

  Total passes required: (n - 1), where n is the number of elements.
*/

#include<iostream>
using namespace std;

int main ()
{
    int array[] = {8,17,5,7,13,21,27,24,2,4};
    int ESize = sizeof(array) / sizeof(int);

    cout << "Unsorted Main Array: ";
    for (int i=0; i<ESize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i <ESize; i++) // Traverse each pass
    {
        int maxIndex = i; // Assume current index has the maximum value

        for (int j = i+1; j<ESize; j++) // Find actual maximum in remaining array
        {
            if (array[j]>array[maxIndex]) // Change for descending
            {
                maxIndex = j;
            }
        }

        if (maxIndex != i)
        {
            swap(array[i], array[maxIndex]);
        }
    }

    cout << "Sorted Array (Selection Sort - Descending): ";
    for (int i = 0; i < ESize; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}