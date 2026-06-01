#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char* ptr1 = new char;
    char* ptr2 = new char;
    char* ptr3 = new char;

    cout << "Введіть перший символ: ";
    cin >> *ptr1;

    cout << "Введіть другий символ: ";
    cin >> *ptr2;

    cout << "Введіть третій символ: ";
    cin >> *ptr3;

    cout << "\Введені символ: " << *ptr1 << ", " << *ptr2 << ", " << *ptr3 << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
