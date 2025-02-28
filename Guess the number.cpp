#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int main() {
    
    int i,n, guess, num;
    srand(time(NULL));
    num = rand()%10+1;
//cout<<num;
  
  cout<<"*********Guess the number**********\n\n";
  cout<<"Enter number of attempts: ";
          cin>>n;
                cout<<"Enter your best guess!: ";

  
  for(i=1; i<=n;i++){

                cin>>guess;
                cout<<"\n";

        if (guess==num){
            cout<<"Guess "<<i<<": "<<guess<<" -> Congratualtions! You guessed it!";
            i=n+1;
        }
        else{
            cout<<"Guess "<<i<<": "<<guess<<" -> Wrong, try again!\n\n";
                            cout<<"Enter your best guess again!: ";

        }

      //cout<<num;
  }

    return 0;
}
