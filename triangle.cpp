#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Perimeter(float a, float b, float c);
float Square(float a, float b, float c);
string isoscelesProperty(float a, float b, float c);

int main() {
    int key = 0;
    cout << "Введите то, что вам нужно найти" << endl
         << "1 - периметр треугольника" << endl
         << "2 - площадь треугольника по формуле Герона" << endl
         << "3 - проверить треугольник на равнобедренность" << endl;
    cin >> key;

    switch (key)
    {
        case 1: {
            float a = 0, b = 0, c = 0;
            cout << "Введите значения сторон треугольника" << endl;
            cin >> a >> b >> c;
            cout << "Периметр вашего треугольника равен " << Perimeter(a, b, c) << endl;
            break;
        }

        case 2: {
            float a = 0, b = 0, c = 0;
            cout << "Введите значения сторон треугольника" << endl;
            cin >> a >> b >> c;
            cout << "Площадь вашего треугольника равна " << Square(a, b, c) << endl;
            break;
        }

        case 3: {
            float a = 0, b = 0, c = 0;
            cout << "Введите значения сторон треугольника" << endl;
            cin >> a >> b >> c;
            cout << "Ваш треугольник " << isoscelesProperty(a, b, c) << endl;
            break;
        }
    
        default:
            cout << "Введенное значение некорректно. Введите 1, 2 или 3" << endl;
            break;
    }

    return 0;
}

float Perimeter(float a, float b, float c) {
    return a + b + c; 
}

float Square(float a, float b, float c) {
    float p = Perimeter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

string isoscelesProperty(float a, float b, float c) {
    if (a == b || a == c || b == c)
        return "равнобедренный";
    else
        return "не равнобедренный";
}