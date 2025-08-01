/*
  Bubble Sort (Descending Order) - Detailed Explanation:

  - At the start of each pass, the first element (index 0) is compared with the next one.
  - If the current element is smaller than the next element, they are swapped.
  - This causes the largest value to move to the front of the array in each pass.
  - After each pass, the next largest value settles next to it, and so on.
  - This is repeated until the entire array is sorted in descending order.
*/

#include<iostream>
using namespace std;

int main()
{
    int array[] = {8,17,5,7,13,21,27,24,2,4};
    int ESize = sizeof(array)/sizeof(int);

    cout << "Unsorted Main Array: ";
    for (int i = 0; i < ESize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Bubble Sort for Descending Order
    for (int i = 0; i < ESize ; i++) // traverse each pass
    {
        for (int j = 0; j < ESize; j++) //compare each element
        {
            if(array[j] < array[j+1])
            {
                swap(array[j], array[j+1]);
            }
        }
    }

    cout << "Sorted Array (Bubble Sort - Descending): ";
    for (int i = 0; i < ESize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
