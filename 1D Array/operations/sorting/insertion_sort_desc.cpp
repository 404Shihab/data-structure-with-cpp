/*
  Insertion Sort (Descending Order) - Detailed Explanation:

  - Assume the first element (index 0) is already sorted.
  - Starting from the second element (index 1), pick the current element (Curr_Element).
  - Compare the current element with elements before it (from right to left).
  - If a previous element is smaller than the current element, shift it one position to the right.
  - Repeat this process until we find the correct position for the current element.
  - Insert the current element at its correct position in the sorted (descending) part.
  - Repeat this process for all elements in the array.

  This process ensures that after each pass, the left portion of the array remains sorted in descending order.
*/

#include<iostream>
using namespace std;
int main ()
{
    int array[] = {2,14,9,4,5,51,6};
    int ESize = sizeof(array) / sizeof(int);

    cout << "Unsorted Main Array: ";
    for (int i= 0; i <ESize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i=1; i <ESize; i++) // Start from the second element
    {
        int Curr_Element = array[i];
        int pre_Element = i-1;

        while (pre_Element >= 0 && array[pre_Element] < Curr_Element)
        {
            array[pre_Element+1] = array[pre_Element]; // Shift element to the right
            pre_Element--;
        }
        array[pre_Element+1] = Curr_Element; // Insert at correct position
    }

    cout << "Sorted Array (Insertion Sort - Descending): ";
    for (int i=0; i<ESize; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
