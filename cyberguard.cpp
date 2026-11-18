#include<iostream>
using namespace std;
int main(){
const double PRICE=9999.0;
int quantity;
double rate;
cout<<"Enter number of licenses sold: ";
cin>>quantity;
if(quantity<=0){
cout<<"Invalid quantity. It must be greater than 0."<<endl;
return 1;
}
if(quantity>=100){
rate=0.50;
}
else if(quantity>=50){
rate=0.40;
}
else if(quantity>=20){
rate=0.30;
}
else if(quantity>=10){
rate=0.20;
}
else{
rate=0.0;
}
double total=quantity*PRICE;
double discount=total*rate;
double finalP=total-discount;
cout<<"\n--- CyberGuard Pro Invoice ---"<<endl;
cout<<"Quantity                  : "<<quantity<<endl;
cout<<"Discount Rate             : "<<rate*100<<"%"<<endl;
cout<<"Total Price Before Discount: Rs. "<<total<<endl;
cout<<"Discount Amount           : Rs. "<<discount<<endl;
cout<<"Final Price               : Rs. "<<finalP<<endl;
return 0;
}
