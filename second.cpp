#include<iostream>
#include<string>
using namespace std;
#define default "Password"

int main(void)
{
    //I want to write code that will take a user name and a password
    string user, password;
    cout << "Enter user name\nUser: ";
    cin >> user;
    cout << "Enter your password\nPassword: ";
    cin >> password;

    if(password == default)
    {
        cout << "Log in successful!\n";
        cout << "------------------------------------------------------------------------\n";
        cout << "Welcome " << user << endl;
    } else {
                cout << "Wrong password! try again.\n";

           }

    return 0;
}
