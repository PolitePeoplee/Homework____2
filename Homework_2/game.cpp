#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <cstdlib> 
#include <windows.h>
//#include "tests.cpp"
using namespace std;

bool isEven(int number)
{
    return number % 2 == 0;
}

int rand_numb(int start = 10, int end = 1000)
{
    int x = rand() % (end - start + 1) + start;
    return x;
}


int main()
{
    //testIsEven();
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Добро пожаловать в игру!\n";
    string name;
    cout << "Как я могу Вас называть? \n";
    cin >> name;
    cout << "Привет, " << name << "!\n" << "Правила игры: \n" << "Я задаю тебе число, а ты должен решить, чётное оно (yes) или нет (no).\n" << "Удачи, " << name << "!\n";

    for (int i = 0; i < 3; i++)
    {
        int randdd_nommm = rand_numb();
        cout << "Число " << randdd_nommm << " четное?\n" << "Введи yes или no: ";

        string ansver;
        cin >> ansver;

        if (isEven(randdd_nommm) && ansver == "yes")
            cout << "Молодец, " << name << "!\n";
        else if (isEven(randdd_nommm) && ansver == "no")
        {
            cout << name << ", неверно!" << "!\n";
            return 0;
        }
        else if (!isEven(randdd_nommm) && ansver == "yes")
        {
            cout << name << ", неверно!" << "!\n";
            return 0;
        }
        else if (!isEven(randdd_nommm) && ansver == "no")
            cout << "Молодец, " << name << "!\n";
    }

    return 0;
}
