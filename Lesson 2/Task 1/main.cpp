#include <iostream>

using namespace std;

int main()
{
    int number = 0;
	int result = 0;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=number; i>0; i/=10)
	{
			result +=i%10;
	}
    cout << "The sum of the digits in the number is: " << result << endl;
    return 0;
}
