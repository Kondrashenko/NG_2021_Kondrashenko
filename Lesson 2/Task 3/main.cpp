#include <iostream> // ���������� ������������ �����/������ � �++.

using namespace std; // ���������� ������������ ���� std, ��� ���� ����� ������ std::cout, std::cin � �.�, ������ ������ cout, cin.

int main() // ��� ������ ���� :)
{
  cout << "Enter the size of the frame of the square: "; // ������ ������������ ������ ������ ����� ��������.
  int squaresize; // ��������� ���������� squaresize;
  cin >> squaresize; // ���������� � squaresize �����, ����� ������� ���� ������������, �.� - ������ ����� ��������.
  for (int Height  = 0; Height < squaresize; Height++) // ��������� ���������� Height � ����������� �� �������� 0, ����� ��������� �������, ��� ��������� Height ������ ���� ������ ��� squaresize, � ����� ��������� ���������, ������ � Height ��������� 1.
  {
    for (int Width = 0; Width < squaresize; Width++) // ��������� ���������� Width � ����������� �� �������� 0, ����� ��������� �������, ��� ��������� Width ������ ���� ������ ��� squaresize, � ����� ��������� ���������, ������ � Width ��������� 1.
    {
      if ((Height == 0) or (Width == 0) or (Height == squaresize - 1) or (Width == squaresize - 1)) // ��������� �������: Height ����� 0 ��� Width ����� 0 ��� Height ����� squaresize -1 ��� Width ����� squaresize -1, ���� ���� ���� ������� ����������, ��������� ���� if, ���� ��� - ��������� else.
        {
          cout << "*"; // ������� �� ����� *.
        }
        else
        {
         cout << " "; // ������� �� ����� ������.
        }

    }
    cout << endl; // ������� �� ����� ������� �� ����� ������.
  }
  return 0; // return 0 �������� ��� � ���, ��� ��������� ������� �����������.
}
