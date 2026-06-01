#include <iostream>
#include "windows.h"
#include <ctime>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    srand(time(0));

    int n;
    cout << "Введіть розмір масивів n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Розмір масиву має бути більшим за 0!" << endl;
        return 1;
    }

    int* p = new int[n];
    int* q = new int[n];

    cout << "\nМасив p: ";
    for (int i = 0; i < n; i++) {
        p[i] = rand() % 101 - 50;
        cout << p[i] << " ";
    }

    cout << "\nМасив q: ";
    for (int i = 0; i < n; i++) {
        q[i] = rand() % 101 - 50;
        cout << q[i] << " ";
    }
    cout << "\n\n";

    int countP = 0;
    int countQ = 0;

    for (int i = 0; i < n; i++) {
        if (p[i] < 0) countP++;
        if (q[i] < 0) countQ++;
    }

    cout << "Кількість від'ємних елементів у масиві p: " << countP << endl;
    cout << "Кількість від'ємних елементів у масиві q: " << countQ << endl;

    cout << "---------------------------------------------------" << endl;
    if (countP > countQ) {
        cout << "Відповідь: У масиві p більше від'ємних елементів." << endl;
    }
    else if (countQ > countP) {
        cout << "Відповідь: У масиві q більше від'ємних елементів." << endl;
    }
    else {
        cout << "Відповідь: Кількість від'ємних елементів в обох масивах однакова." << endl;
    }
    cout << "---------------------------------------------------" << endl;

    delete[] p;
    delete[] q;

    return 0;
}
