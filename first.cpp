#include <iostream>
using namespace std;

int main(void) {
    char *string;
    cout<<"Enter your name: ";
    cin>>string;
    if(true==1){
        cout<<"They are equal in C++\n";
    } else {
        cout<< "They are not same\n";
    }
    cout<<"Hello " << string<<"\n";


    return 0;
}