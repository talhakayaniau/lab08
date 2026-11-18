#include<iostream>
using namespace std;
int main(){
int num;
do{
cout<<"Enter a nonzero positive number: ";
cin>>num;
if(cin.eof()){
return 1;
}
if(cin.fail()){
cin.clear();
cin.ignore(1000,'\n');
num=0;
}
if(num<=0){
cout<<"Invalid input. Try again."<<endl;
}
}while(num<=0);
int original=num,revno=0,r;
while(num!=0){
r=num%10;
revno=revno*10+r;
num=num/10;
}
cout<<"Original number: "<<original<<endl;
cout<<"Reversed number: "<<revno<<endl;
if(original==revno){
cout<<original<<" is a palindrome."<<endl;
}
else{
cout<<original<<" is not a palindrome."<<endl;
}
return 0;
}
