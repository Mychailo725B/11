#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float a, b;

    cout << "Введіть дійсне значення a: ";
    cin >> a;

    cout << "Введіть дійсне значення b: ";
    cin >> b;

    float* pa = &a;
    float* pb = &b;

    cout << "\n Початкові значення " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    *pa = *pa * 3;

    cout << "\n Після збільшення 'a' в 3 рази " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    float tp = *pa;
    *pa = *pb;
    *pb = tp;

    cout << "\n Після обміну місцями " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}