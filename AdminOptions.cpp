#include "Menu.h"
#include<fstream>
#include<iostream>

using namespace std;
void adminOptions()
{
    adminMenu();
    int option;
    cin >> option;
    while (option != 0)
    {
        switch (option)
        {
        case 1:
        {
            cout << "Kindly enter the property details in the order a: Property ID" << endl;
            int propertyId;
            cin >> propertyId;
            fstream fout;
            fout.open("properties.txt", ios::out | ios::app);
            fout << propertyId << "\n";
        }
        break;
        case 2:
        {
            cout << "Kindly enter the property details in the order a:Property ID" << endl;
            int propertyId;
            cin >> propertyId;
            fstream fout;
            fout.open("properties.txt", ios::out | ios::app);
            fout << propertyId << "\n";
        }
        break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            break;
        }
        cout << "Kindly select one of the options:....";
        cout << "1: Add a Property" << endl;
        cout << "2: Add Owner Details" << endl;
        cout << "3: Add Brochure" << endl;
        cout << "4: Add Photos" << endl;
        cout << "5: View Visited users" << endl;
        cout << "6: View Interested users" << endl;
        cout << "0: To Quit" << endl;
        cin >> option;
    }
}