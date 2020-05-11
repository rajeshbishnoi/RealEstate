#include "Menu.h"
#include<iostream>
using namespace std;

void adminMenu(){
    cout<<"Kindly select one of the options:...."<<endl;
    cout<<"1: Add a Property"<<endl;
    cout<<"2: Add Owner Details"<<endl;
    cout<<"3: Add Brochure"<<endl;
    cout<<"4: Add Photos"<<endl;
    cout<<"5: View Visited users"<<endl;
    cout<<"6: View Interested users"<<endl;
    cout<<"0: To Quit"<<endl;   
}
void loginScreenMenu(){
        cout<<"Kindly select one of the options:..."<<endl;
        cout<<"1:Login as Admin"<<endl;
        cout<<"2:Login as User"<<endl;
        cout<<"3:Register new User"<<endl;
        cout<<"0:Quit"<<endl;
}
void propertyMenu(){
    cout<<"Kindly select one of the opitons..."<<endl;
    cout<<"1:List properties by area"<<endl;
    cout<<"2:List properties by pincode"<<endl;
    cout<<"3:List properties to sell with given price range"<<endl;
}