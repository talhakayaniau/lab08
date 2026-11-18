#include<iostream>
#include<fstream>
using namespace std;
int main(){
const double BUDGET=2000.0;
int days;
cout<<"How many days of expenses do you want to record? ";
cin>>days;
if(days<=0){
cout<<"Number of days must be positive."<<endl;
return 1;
}
ofstream fout("expenses.txt");
if(!fout){
cout<<"Error: could not open expenses.txt"<<endl;
return 1;
}
for(int i=1;i<=days;i++){
double expense;
cout<<"Enter expense for Day "<<i<<": ";
cin>>expense;
fout<<"Day "<<i<<": "<<expense;
if(expense>BUDGET){
fout<<"  Over Budget";
}
fout<<endl;
cout<<"Day "<<i<<" expense saved successfully."<<endl;
}
fout.close();
return 0;
}
