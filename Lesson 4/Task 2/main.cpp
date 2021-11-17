#include <iostream>

using namespace std;

int main()
{
    string sentence_1;
    cout << "Please, enter the sentence number one: ";
    cin >> sentence_1;
    string sentence_2;
    cout << "Please, enter the sentence number two: ";
    cin >> sentence_2;
    if (sentence_1 == sentence_2)
    {
        cout << "This sentences are same!" << endl;
    }
    else
    {
        cout << "This sentences are not same!" << endl;
    }
    return 0;
}
