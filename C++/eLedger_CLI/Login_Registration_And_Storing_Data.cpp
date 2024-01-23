#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Register
{
    public:
    string username, password;
};

class LogIn
{
    public:
    string newusername, newpassword;
};

int main()
{
    Register newUser;
    int Choice;

    cout<< "WELCOME TO e-Ledger\n";
    cout<<"1.Register\n2.Login\n";
    cout<<"Enter '1' for Regiser or '2' for Login\n";
    cout<<"Choice:";
    cin >>Choice;
    
    if(Choice==1)
    {
        cout<<"\nUsername:";
        cin >>newUser.username;

        cout<<"Password:";
        cin>>newUser.password;

        cout<< "\nSuccesfully Register Your Account\n\n";
        Choice=0;
    }
    cout<<"For LogIn press '2'\n";
    cout<<"Choice:";
    cin>>Choice;
    if(Choice==2)
    {
        LogIn newLogIn;

        cout<< "\nUsername:";
        cin>>newLogIn.newusername;

        cout<<"password:";
        cin>>newLogIn.newpassword;

        if(newLogIn.newusername == newUser.username && newLogIn.newpassword==newUser.password)
        {
            string name,phone;
            int credit,debit;
            int net;
            cout << "\nSuccesfully Logged In\n";
            cout<<"Name:";
            cin>>name;
            cout<<"Phone:";
            cin>>phone;
            cout<<"Credit:";
            cin>>credit;
            cout<<"Debit:";
            cin>>debit;
            net=debit-credit;
            cout<<"Net Amount:";
            cout<<net;

            ofstream MyFile("loginpart2.txt");
            MyFile<<"Name:"<<name<<"\nPhone:"<<phone<<"\nCredit:"<<credit<<"\nDebit:"<<debit<<"\nNET Amount"<<net;
            MyFile.close();

            string myText;

            ifstream MyReadFile("loginpart2.txt");

            while(getline(MyReadFile,myText))
            {
                cout<<myText;
            }
            MyReadFile.close();

        }
        else
        {
            cout<< "LogIn Failed, Please Try Again";
        }
    }
    main();
}