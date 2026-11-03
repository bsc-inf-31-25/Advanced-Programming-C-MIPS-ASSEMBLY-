#include <iostream>
#include <string>
using namespace std;

int main()
{
    int* pNumber = new int;
    string* pText = new string;

    cout << "Enter an integer: ";
    cin >> *pNumber;
    cin.ignore(1000, '\n');

    cout << "Enter a string: ";
    getline(cin, *pText);

    cout << "The integer is: " << *pNumber << endl;
    cout << "The string is: " << *pText << endl;

    delete pNumber;
    delete pText;
    pNumber = nullptr;
    pText = nullptr;

    return 0;
}
