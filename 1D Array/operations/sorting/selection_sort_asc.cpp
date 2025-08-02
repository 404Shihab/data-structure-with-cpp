/*
  Selection Sort (Ascending Order) - Detailed Explanation:

  - Start with the first index (i = 0) and assume it's the minimum.
  - Compare it with all remaining elements to find the actual minimum.
  - If a smaller element is found, store its index.
  - After the inner loop, swap the smallest found element with the current index.
  - Now the first index is correctly sorted.

  - In the next pass (i = 1), assume index 1 has the smallest value and repeat the same process
    for the remaining unsorted portion.
  - This ensures that after each pass, the smallest element in the unsorted part is placed 
    at the correct sorted position.
  - Repeat this process until the entire array is sorted.

  Total passes required: (n - 1), where n is the number of elements in the array.
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
        cout <<array[i] << " ";
    }
    cout<<endl;

    for (int i=0; i<ESize; i++) // Traverse each pass
    {
        int minIndex = i; // Assume current index has the minimum value
        for (int j = i+1; j < ESize; j++) // Find the actual minimum in the rest
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap only if a new min is found
        if (minIndex != i)
        {
            swap(array[i], array[minIndex]);
        }
    }
    cout << "Sorted Array (Selection Sort): ";
    for (int i = 0; i < ESize; i++)
    {
        cout << array[i] << " ";
    }
}