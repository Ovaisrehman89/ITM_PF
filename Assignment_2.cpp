
#include <iostream>
#include <string>
using namespace std;

int main() {
   
float customers, slots, i, fees, hours, total, discount;
int type;
char vip, pt;
string vehicle;


cout<<"Enter of Customers: ";
cin>>customers;

cout<<"Enter number of Slots: ";
cin>>slots;


if (slots <=0){
    
    cout<<"\nParking Full! Try Again Later."<<endl;
}

else{
    


for(i = 1; i<=customers; i++){
  
  if (slots>=1){
  
  
  cout<<"\n";
cout<<"\nCustomer "<<i<<endl;

cout<<"Enter parked hours: ";
cin>>hours;

cout<<"Enter vehicle number [1-4]:"<<endl;;
cout<<"1. Car"<<endl;
cout<<"2. Bike"<<endl;
cout<<"3. Truck"<<endl;
cout<<"4. Electric Vehicle (EV)"<<endl;
cout<<"\nEnter vehicle type: ";
cin>>type;

  switch (type){
      case 1:
      fees = 5;
      vehicle = "Car";
      break;
      case 2:
      fees = 2;
      vehicle = "Bike";
      break;
      case 3:
      fees =10;
      vehicle = "Truck";
      break;
      case 4:
      vehicle = "Electric Vehicle (EV)";
      fees= 3;
      break;
  }
  total = fees*hours;
  //cout<<total;
  cout<<"Is customer a VIP member! [y/n]: ";
  cin>>vip;
   
    
    if (vip == 'y'|| vip == 'Y') {
        
        
        cout<<"\nCustomer "<<i<<" ("<<vehicle<<", "<<hours<<" hours, VIP)"<<endl;
       discount = total*0.2;
       
      // cout<<discount;
       total =(total - discount);
      //    cout<<total;
      cout<<"Customer "<<i<<"- Final Parking Fee: $"<<total;

    }
    
     else if (hours > 5) {
         
         
                 cout<<"\nCustomer "<<i<<" ("<<vehicle<<", "<<hours<<" hours, No VIP)"<<endl;

          discount = total*0.2;
       
      // cout<<discount;
       total =(total - discount);
       
       cout<<"Customer "<<i<<" - Final Parking Fee: $"<<total;
            
        }
    
    else{
         cout<<"\nCustomer "<<i<<" ("<<vehicle<<", "<<hours<<" hours, No VIP)"<<endl;
       total *= 1;
       cout<<"Customer "<<i<<" - Final Parking Fee: $"<<total;
    }
    
   // cout<<total;

  slots--;
  cout<<"\n\nRemaining slots: "<<slots<<endl;

   // cout<<i;
}

else{
    
    cout<<"\n\nParking Full! Try Again Later."<<endl;
    break;
    
}
}
    
}

//cout<<"\n\nPlease remaining "<<customers<<" wait a while. Parking is full"<<endl;
    return 0;
}
