// NOTE: Binary search is only applicable for **sorted arrays**
#include <iostream>
using namespace std;
int binarySearch(int array[], int ESize, int search)
{
    int left=1;
    int right=ESize;

    while(left<=right)
    {
        int mid = (left+right)/2;
        if(array[mid]==search)
        {
            return mid;
        }
        else if (array[mid]<search)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}

int main ()
{

  int array[10] = {12,18,22,26,78,110};
  int ESize = 6;
  int search = 78;
  cout << endl;
  int result = binarySearch(array, ESize, search);
  if(result==-1)
  {
      cout << "Element " << search << " is not found" << endl;
  }
  else
  {
      cout << "Element " << search << " is found at index: " << result << endl;
  }

  return 0;
}

