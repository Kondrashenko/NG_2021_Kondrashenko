#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
	cout << "Enter a: ";
    cin >> a;
    double b;
    cout << "Enter b: ";
    cin >> b;
    double c;
    cout << "Enter c: ";
    cin >> c;
    double x;
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
