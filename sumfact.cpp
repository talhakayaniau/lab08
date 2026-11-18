#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a positive integer n: ";
cin>>n;
if(n<=0){
cout<<"n must be a positive integer."<<endl;
return 1;
}
long long sum=0,fact=1;
cout<<"integer"<<" sum"<<" factorial"<<endl;
cout<<"==================================="<<endl;
for(int i=1;i<=n;i++){
sum=sum+i;
fact=fact*i;
cout<<i<<" "<<sum<<" "<<fact<<endl;
}
return 0;
}
