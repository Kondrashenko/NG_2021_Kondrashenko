#include <iostream> 

using namespace std;

int main()
{
  cout << "Enter the size of the frame of the square: ";
  int squaresize;
  cin >> squaresize; 
  for (int Height  = 0; Height < squaresize; Height++) 
  {
    for (int Width = 0; Width < squaresize; Width++)
    {
      if ((Height == 0) or (Width == 0) or (Height == squaresize - 1) or (Width == squaresize - 1)) 
        {
          cout << "*";
        }
        else
        {
         cout << " ";
        }

    }
    cout << endl;
  }
  return 0;
}
