#include <iostream> // ���������� ������������ �����/������ � �++.

using namespace std; // ���������� ������������ ���� std, ��� ���� ����� ������ std::cout, std::cin � �.�, ������ ������ cout, cin.

int main() // ��� ������ ���� :)
{
    int number; // ��������� ���������� number.
    int sum = 0; // ��������� ���������� sum � ����������� �� �������� 0.
    cout << "Enter the number: "; // ������� �� ����� ��������� � �����������: Enter the number:
    cin >> number; // ���������� �����, ������� ���� ������������ � ���������� number.
    while (number!=0) // ��������� ���� ���� while, � ������� ���������: ��� ���������� number ������ ���� ������� ����.
    {
        sum += number%10; // ���������� � ���������� sum ������� �� ������� number �� 10. ( ������ % �������� ������� �� �������).
        number /= 10; //  number = number / 10;
    }
    cout << "The sum of the digits in the number is: " << sum << endl; // ������� �� ����� ��������� � �����������: The sum of the digits in the number is:
    return 0; //return 0 �������� ��� � ���, ��� ��������� ������� �����������.
}
