#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 0;
	cout << "Enter a: ";
    cin >> a;
    double b = 0;
    cout << "Enter b: ";
    cin >> b;
    double c = 0;
    cout << "Enter c: ";
    cin >> c;
    double x = 0;
    if((b*b - 4*a*c) > 0) // if discriminant positive.
  {
    x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
    cout << "The first root is: " << x << endl;
    x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
    cout << "The second root is: " << x << endl;
  }
    if((b*b - 4*a*c) == 0) // if discriminant is 0.
  {
    x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
    cout << "The first root is: " << x << endl;
  }
   if((b*b - 4*a*c) < 0) // if discriminant negative.
  {
    cout << "Discriminant negative." << endl;
  }
}
