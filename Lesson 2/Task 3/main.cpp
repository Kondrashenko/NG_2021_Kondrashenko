#include <iostream> // Библиотека стандартного ввода/вывода в С++.

using namespace std; // Используем пространство имен std, для того чтобы вместо std::cout, std::cin и т.д, писать просто cout, cin.

int main() // это просто мейн :)
{
  cout << "Enter the size of the frame of the square: "; // Просим пользователя ввести размер рамки квадрата.
  int squaresize; // Объявляем переменную squaresize;
  cin >> squaresize; // Записываем в squaresize число, целое которое ввел пользователь, т.е - размер рамки квадрата.
  for (int Height  = 0; Height < squaresize; Height++) // Объявляем переменную Height и присваиваем ей значение 0, затем проверяем условие, при коротором Height должен быть меньше чем squaresize, а затем выполняем инкремент, тобишь к Height добавляем 1.
  {
    for (int Width = 0; Width < squaresize; Width++) // Объявляем переменную Width и присваиваем ей значение 0, затем проверяем условие, при коротором Width должен быть меньше чем squaresize, а затем выполняем инкремент, тобишь к Width добавляем 1.
    {
      if ((Height == 0) or (Width == 0) or (Height == squaresize - 1) or (Width == squaresize - 1)) // Проверяем условие: Height равен 0 или Width равен 0 или Height равен squaresize -1 или Width равен squaresize -1, если хоть одно условие выполнится, выполняем тело if, если нет - выполняем else.
        {
          cout << "*"; // Выводим на экран *.
        }
        else
        {
         cout << " "; // Выводим на экран пробел.
        }

    }
    cout << endl; // Выводим на экран переход на новую строку.
  }
  return 0; // return 0 сообщает нам о том, что программа успешно завершилась.
}
