#include <iostream>

using namespace std;

int main()
{
    int a = 50;
    int b = 20;
    cout << "Variable a = " << a << endl;
    cout << "Variable b = " << b << endl;
    cout << "Now, let's swap them, and this is what we get after:" << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Variable a = " << a << endl;
    cout << "Variable b = " << b << endl;
    return 0;
}
