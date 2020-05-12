#include "Menu.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;
std::istream &ignoreline(std::ifstream &in, std::ifstream::pos_type &pos)
{
    pos = in.tellg();
    return in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

std::string getLastLine(std::ifstream &in)
{
    std::ifstream::pos_type pos = in.tellg();

    std::ifstream::pos_type lastPos;
    while (in >> std::ws && ignoreline(in, lastPos))
        pos = lastPos;

    in.clear();
    in.seekg(pos);

    std::string line;
    std::getline(in, line);
    return line;
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
            cin>>propertyName;

            std::ifstream file("properties.txt");
            string lastLineOfProperties;
            if (file)
            {
                 lastLineOfProperties = getLastLine(file);
                std::cout <<"last line read is "<< lastLineOfProperties << '\n';
            }
            else
            {
                std::cout << "Unable to open file.\n";
                return;
            }
            std::stringstream lastLineStream(lastLineOfProperties);
            string lastLineId;
            getline(lastLineStream, lastLineId, ',');
            cout<<"lastlineId "<<lastLineId<<endl;
            stringstream lastLineIdInteger(lastLineId);
            int id = 0;
            lastLineIdInteger >> id;
            fstream fout;
            fout.open("properties.txt", ios::out | ios::app);
            fout <<"\n"<< ++id << "," << propertyName;
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