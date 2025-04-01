#include <iostream>
#include<math.h>
using namespace std;
class account{
   protected:
   string name;
   string type;
   static double rate;
   static double servicecharge;
   double balance;
   public:
   account(){
cout<<"enter name";
getline(cin,name);
cout<<"account type";
getline(cin,type);
balance=0;

   }

   void deposit(){
      int amount;
cout<<"enter the amount to deposit :";
cin>>amount;
balance=balance+amount;

cout<<" amount is deposited and updated balance is"<<balance;;
   }
void display(){
cout<<"customer name :"<<name;
cout<<"account type "<<type;
cout<<"balance :"<<balance;

}
 void withdraw(){
      float amount;
cout<<"enter the amount to withdraw :";
cin>>amount;
balance=balance-amount;

cout<<amount<<"is withdrawn"<<"updated balance is"<<balance;


   }
   
   void check(){
      if(balance<1000){
balance=balance-servicecharge;
cout<<"survice charge applied new balance is"<<balance;

   }
   else{
      cout<<"no service charge is applied";
   }


   }
};
double account::rate=5;
double account::servicecharge=100;

class savingaccount:public account{
   public:
void calinterest(){
      double ci;
      int time;
      

cout<<"time ";
cin>>time;

ci=balance*pow(1+(rate/100),time)-balance;
balance+=ci;
cout<<"interest of"<<ci<<"added to balance updated balance is"<<balance;
;
}


   
};

class currentaccount:public account{
protected:
int chequebook;
};
int main(){
savingaccount o1;
o1.deposit();
o1.calinterest();
o1.withdraw();
o1.check();

}