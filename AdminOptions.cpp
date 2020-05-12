#include "Menu.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
string readLastLine(string fileName)
{
    string lastLine;
    string filename = fileName;
    ifstream fin;
    fin.open(filename);
    if (fin.is_open())
    {
        fin.seekg(-1, ios_base::end); // go to one spot before the EOF

        bool keepLooping = true;
        while (keepLooping)
        {
            char ch;
            fin.get(ch); // Get current byte's data

            if ((int)fin.tellg() <= 1)
            {                        // If the data was at or before the 0th byte
                fin.seekg(0);        // The first line is the last line
                keepLooping = false; // So stop there
            }
            else if (ch == '\n')
            {                        // If the data was a newline
                keepLooping = false; // Stop at the current position.
            }
            else
            {                                 // If the data was neither a newline nor at the 0 byte
                fin.seekg(-2, ios_base::cur); // Move to the front of that data, then to the front of the data before it
            }
        }

        getline(fin, lastLine);
        fin.close();
    }
    // Read the current line
    return lastLine;
}
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
            cout << "Kindly enter the property details in the order a: Property Name" << endl;
            string propertyName;
            getline(cin, propertyName);
            fstream fout;
            
            fout.open("properties.txt", ios::out | ios::app);
            fout << propertyName << "\n";
        }
        break;
        case 2:
        {
            cout << "Kindly enter the property d    etails in the order a:Property ID" << endl;
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