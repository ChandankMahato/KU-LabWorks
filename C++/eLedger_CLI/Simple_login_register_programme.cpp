#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

class LogIn{
    public:
    string username1, password1;
};

class Register{
    public:
    string username2, password2;
};

int main()
{
    Register NewUser;
    LogIn RegisteredLogin;
    int choice;
    cout << "\nWEL-COME TO e-Ledger...\n\n";
    cout << "1.Log-In...\n"<<"2.Register New Account...\n";
    cout << "Choice:";
    cin >>choice;
    if(choice!=1 && choice!=2){
        cout<<"Wrong Input, choose 1.Login 2.Register\n";
        cout<<"Choice:";
        cin>>choice;
        
        if(choice==1)
        {
            cout << "\nusername:";
            cin >> RegisteredLogin.username1;

            cout << "password:";
            cin >> RegisteredLogin.password1;
        }
        else
        {
           Register NewUser;

        cout << "\nusername:";
        cin >> NewUser.username2;

        cout << "password:";
        cin >> NewUser.password2;

        cout << "Successfully Registerd Your Account..."; 
        }
        
    }
    else if(choice==1)
    {
        cout << "\nusername:";
        cin >> RegisteredLogin.username1;

        cout << "password:";
        cin >> RegisteredLogin.password1;
    }
    else if(choice==2)
    {
        cout << "\nusername:";
        cin >> NewUser.username2;

        cout << "password:";
        cin >> NewUser.password2;

        cout << "Successfully Registerd Your Account...";
        choice=0;
    }
    cout << "1.Log-In...\n";
    cout << "Choice:";
    cin >> choice;
    if(choice==1)
    {
        cout << "\nusername:";
        cin >> RegisteredLogin.username1;

        cout << "password:";
        cin >> RegisteredLogin.password1;
    }
}