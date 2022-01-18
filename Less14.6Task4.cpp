/*
Требуется реализовать небольшую программу для сравнения двух двумерных матриц размерами 4х4 на предмет их полного равенства. 
Программа принимает на вход две целочисленные матрицы A и B, которые вводятся с помощью std::cin и сравнивает их на предмет 
полного равенства. Если матрицы равны, то об этом сообщается в стандартном выводе. Алгоритм должен быть по возможности оптимальным 
и не проводить лишних операций.
*/

#include <iostream>
using namespace std;

int main()
{
    int arrov1[4][4]{}, arrov2[4][4]{};
    bool bArrovIdentical = true;
    cout << "input first arrov: ";
    for (int n = 0; n < 4; n++) {
        for (int m = 0; m < 4; m++) {
            cin >> arrov1[n][m];
        }
    }

    cout << "input second arrov: ";
    for (int n = 0; n < 4; n++) {
        for (int m = 0; m < 4; m++) {
            cin >> arrov2[n][m];
            if (arrov1[n][m] != arrov2[n][m]) {
                bArrovIdentical = false;
                break;
            }
        }
        if (!bArrovIdentical) break;
    }

    (bArrovIdentical) ? cout << "identical" : cout << "don`t identical";
}

