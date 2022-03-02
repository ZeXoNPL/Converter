#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

float centimeters;

float how_many_inch(float m);

float how_many_yards(float m);

float how_many_foot(float m);

float how_many_mile(float m);

int main()
{
    while (true)
    {
        char choice;
        cout << "Jakie obliczenie chcesz wykonac?" << endl;
        cout << "1 - Przeliczyc centymetry na cale" << endl;
        cout << "2 - Przeliczyc centymetry na jardy" << endl;
        cout << "3 - Przeliczyc centymetry na stopy" << endl;
        cout << "4 - Przeliczyc centymetry na mile" << endl;
        cout << "5 - Wyjsc z programu" << endl;
        choice = _getch();

        if ((choice != '5') && (choice <='5'))
        {
            if (choice == '0')
            {
                cout << "Nie ma takiej opcji" << endl;
                cout << endl << "Nacisnij enter by kontunuowac!" << endl;
                getchar();

                system("cls");
                continue;
            }
            cout << "Podaj ilosc centymetrow: ";
            cin >> centimeters;
        }

        switch (choice)
        {
        case '1':

            cout << "Ilosc cali: " << how_many_inch(centimeters) << endl;
            break;

        case '2':

            cout << "Ilosc jardow: " << how_many_yards(centimeters) << endl;
            break;

        case '3':

            cout << "Na stopy: " << how_many_foot(centimeters) << endl;
            break;

        case '4':

            cout << "Na mile: " << how_many_mile(centimeters) << endl;
            break;

        case '5':

            return 0;

        default: 
            
            cout << "Nie ma takiej opcji" << endl;
            break;
        }

        cout << endl << "Nacisnij enter by kontunuowac!" << endl;
        getchar();

        system("cls");
    }
}

float how_many_inch(float cm)
{
    float inch = cm * 0.393700787;

    return inch;
}

float how_many_yards(float cm)
{
    float yards = cm * 0.010936133;

    return yards;
}

float how_many_foot(float cm)
{
    float foot = cm * 0.032808399;

    return foot;
}

float how_many_mile(float cm)
{
    float mile = cm * 0.00000621371192;

    return mile;
}
