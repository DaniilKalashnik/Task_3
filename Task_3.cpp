﻿// Task_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Вариант 10
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Программа может вычислять два вида последовательностей, выберите последовательность. Если хотите первую введите - 1, если вторую - 2"<< endl;
    int num;
    char again;
    do {
        cout << "Введите номер псоледовательности: ";
        cin >> num;
        switch (num)
        {
            case 1:
            {
                double x1 = 0; double x2 = 0.625; double x; int i; int count; // переменные 
                char again;

                cout << "Введите начального значения: " << endl; // ввод начального значения
                cin >> count; // ввод переменной count 
                if (count > 2) // проверка на допустимое значение 
                {
                    for (i = 3; i <= count; i++) // цикл поиск нужного члена последовательности 
                        x = x2 / 2 + 3 / 4 * x1; //формула 
                    cout << x << endl; // вывод члена последователности 
                    x1 = x2; // переприсвоение значений 
                    x2 = x;
                }
                else cout << "Ошибка!! Вы ввели некорректные данные!" << endl; // вывод ошибки при некорректном значении               
            }
            break;
            case 2:
            {
                double x1 = 1; double x2 = 0.3; double x;int count; // переменные
                cout << "Введите начального значения: " << endl;  // ввод начального значения
                cin >> count; // ввод переменной count
                if (count > 2)  // проверка на допустимое значение
                {
                    for (int i = 3; i <= count; i++) // цикл поиск нужного члена последовательности
                        x = (i + 1) * x1;    //формула
                    cout << x << endl;   // вывод члена последователности
                    x1 = x2;  // переприсвоение значений
                    x2 = x;
                }
                else cout << "Ошибка!! Вы ввели некорректные данные!" << endl;  // вывод ошибки при некорректном значении
            }
            break;  
        }
     cout << "Если хотите запустить программу еще раз введите Y, если нет введите N" << endl;   // запуск программы повторно
     cin >> again;
    } while ((again == 'Y')|| (again == 'y'));
    system("pause");
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

