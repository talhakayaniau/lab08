#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream fin("temperature.txt");
if(!fin){
cout<<"Error: could not open temperature.txt"<<endl;
return 1;
}
double temp,sum=0,highest=0,lowest=0;
int count=0;
while(count<7&&fin>>temp){
if(count==0){
highest=temp;
lowest=temp;
}
else{
if(temp>highest)highest=temp;
if(temp<lowest)lowest=temp;
}
sum=sum+temp;
count=count+1;
}
fin.close();
if(count==0){
cout<<"Error: file contains no temperature data."<<endl;
return 1;
}
if(count<7){
cout<<"Warning: only "<<count<<" temperatures found in file."<<endl;
}
cout<<"Average temperature: "<<sum/count<<" C"<<endl;
cout<<"Highest temperature: "<<highest<<" C"<<endl;
cout<<"Lowest temperature : "<<lowest<<" C"<<endl;
return 0;
}
