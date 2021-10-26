#include <iostream> // Библиотека стандартного ввода/вывода в С++.

using namespace std; // Используем пространство имен std, для того чтобы вместо std::cout, std::cin и т.д, писать просто cout, cin.

int main() // это просто мейн :)
{
    int number; // Объявляем переменную number.
    int sum = 0; // Объявляем переменную sum и присваиваем ей значение 0.
    cout << "Enter the number: "; // Выводим на экран сообщение с содержанием: Enter the number:
    cin >> number; // Записываем число, которое ввел пользователь в переменную number.
    while (number!=0) // Объявляем цикл типа while, в условии указываем: что переменная number должна быть неравна нулю.
    {
        sum += number%10; // Прибавляем к переменной sum остаток от деления number на 10. ( символ % означает остаток от деления).
        number /= 10; //  number = number / 10;
    }
    cout << "The sum of the digits in the number is: " << sum << endl; // Выводим на экран сообщение с содержанием: The sum of the digits in the number is:
    return 0; //return 0 сообщает нам о том, что программа успешно завершилась.
}
