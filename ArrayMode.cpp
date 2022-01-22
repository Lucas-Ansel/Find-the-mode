#include <iostream>
using namespace std;

void findMode(int *array, int size);

int main()
{
  int array[10] = {1, 6, 15, 15, 9, 5, 3, 15, 4, 2};
  findMode(array, 10);
  return 0;
}

void findMode(int *array, int size)
{
  int mode = -1;
  int count = 0;
  int curNum;
  int highCount = 0;

  for(int i = 0; i < 9; i++)
  {
    curNum = *(array + i);
    count = 0;
    for(int j = i + 1; j < 10; j++)
    {
        if(curNum == *(array + j))
        {
            count += 1;
        }
    }
    if(count > highCount)
    {
        mode = curNum;
        highCount = count;
    }
  }
  cout << "The mode of the array is: " << mode << endl;
}
