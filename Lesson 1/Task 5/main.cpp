#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the mass of the spaceship(kg): ";
    float space;
    cin >> space;
    cout << "Required fuel amount: " << ((space / 3) - 2) * 300 << " litres";
    return 0;
}
