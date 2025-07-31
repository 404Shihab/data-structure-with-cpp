/*
  Bubble Sort (Ascending Order) - Detailed Explanation:

  - At the start of each pass, the first element (index 0) is considered the "bubble element".
  - Compare the bubble element with the next element.
  - If the bubble element is greater than the next element, swap them. Now the bubble 
  element moves to the next position.
  - If the bubble element is less than or equal to the next element, no swap is done and 
  the bubble element shifts to the next element.
  - Continue comparing and swapping pairs until the end of the array. This causes the 
  largest unsorted element to "bubble up" to the correct position at the end.
  - Repeat the entire pass for the remaining unsorted portion of the array until the whole array is sorted.

  This process ensures that after each pass, the largest unsorted element moves to its correct place at the end.
  */

#include<iostream>
using namespace std;
int main ()
{
    int array[] = {8,17,5,7,13,21,27,24,2,4};
    int ESize = sizeof(array)/sizeof(int);
    cout << "Unsorted Main Array: ";
    for (int i = 0; i < ESize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < ESize ; i++) // traverse each pass
    {
        for (int j = 0; j < ESize; j++) //compare each element
        {
            if(array[j] > array[j+1])
            {
                swap(array[j], array[j+1]);
            }
        }
    }
    cout << "Sorted Array (Bubble Sort): ";
    for (int i = 0; i < ESize; i++)
    {
        cout << array[i] << " ";
    }
}
