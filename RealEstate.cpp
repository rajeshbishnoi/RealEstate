#include <iostream>
#include <fstream>
#include "Menu.h"
using namespace std;

int main()
{
    loginScreenMenu();
    int loginOption;
    cin >> loginOption;
    while (loginOption != 0)
    {
        switch (loginOption)
        {
        case 1:
        {
            bool loginStatus = userLogin();
            if (loginStatus == true)
            {
                adminOptions();
            }
        }
        break;

        case 2:
        {
            bool loginStatus = userLogin();
            if (loginStatus == true)
            {
                propertyMenu();
            }
        }
        break;
        case 3:
            // Register new User
            break;
        default:
            break;
        }
        loginScreenMenu();
        cin >> loginOption;
    }
    return 0;
}