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
    cout << "����� ���������� � ����!\n";
    string name;
    cout << "��� � ���� ��� ��������? \n";
    cin >> name;
    cout << "������, " << name << "!\n" << "������� ����: \n" << "� ����� ���� �����, � �� ������ ������, ������ ��� (yes) ��� ��� (no).\n" << "�����, " << name << "!\n";

    for (int i = 0; i < 3; i++)
    {
        int randdd_nommm = rand_numb();
        cout << "����� " << randdd_nommm << " ������?\n" << "����� yes ��� no: ";

        string ansver;
        cin >> ansver;

        if (isEven(randdd_nommm) && ansver == "yes")
            cout << "�������, " << name << "!\n";
        else if (isEven(randdd_nommm) && ansver == "no")
        {
            cout << name << ", �������!" << "!\n";
            return 0;
        }
        else if (!isEven(randdd_nommm) && ansver == "yes")
        {
            cout << name << ", �������!" << "!\n";
            return 0;
        }
        else if (!isEven(randdd_nommm) && ansver == "no")
            cout << "�������, " << name << "!\n";
    }

    return 0;
}
