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
        cout << "What do you want to do?" << endl;
        cout << "1 - Convert centimeters to inch" << endl;
        cout << "2 - Convert centimeters to yards" << endl;
        cout << "3 - Convert centimeters to foots" << endl;
        cout << "4 - Convert centimeters to mile" << endl;
        cout << "5 - Exit" << endl;
        choice = _getch();

        if ((choice != '5') && (choice <='5'))
        {
            if (choice == '0')
            {
                cout << "There's no option" << endl;
                cout << endl << "Press any key to continue" << endl;
                getchar();

                system("cls");
                continue;
            }
            cout << "Enter the number of centimeters: ";
            cin >> centimeters;
        }

        switch (choice)
        {
        case '1':

            cout << "Number of inches: " << how_many_inch(centimeters) << endl;
            break;

        case '2':

            cout << "Number of yards: " << how_many_yards(centimeters) << endl;
            break;

        case '3':

            cout << "Number of foots: " << how_many_foot(centimeters) << endl;
            break;

        case '4':

            cout << "Number of mile: " << how_many_mile(centimeters) << endl;
            break;

        case '5':

            return 0;

        default: 
            
            cout << "There's no option" << endl;
            break;
        }

        cout << endl << "Press any key to continue" << endl;
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
