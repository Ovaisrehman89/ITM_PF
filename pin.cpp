#include <iostream>
using namespace std;

int main() {

int i,pin, npin;

cout<<"Enter pin to save: ";
cin>>pin;

for(i=-1;i<=0;i--){
    cout<<"Re-enter the pin: ";
    cin>>npin;
    if (pin==npin){
        cout<<"Successful";
        break;
    }
    else{
        
        cout<<"Try again!\n";
    }
}

    return 0;
}
