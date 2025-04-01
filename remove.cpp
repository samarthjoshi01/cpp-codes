# include<iostream>
# include <string>
using namespace std;

string remove(string ,char);
int main(){
string a,b;
char ch;
getline(cin,a);
cout<<"enter the character to be deleted"<<endl;
cin>>ch;
cout<<"before"<<a<<endl;
 a=remove(a,ch);
cout<<"string after deleting  a specific character is :"<<a;
 return 0;

}

string remove(string a,char ch){
for(int i=0;a[i]!=0;i++){
if(a[i]==ch){
    a.erase(i,1);
}


}
return a;
}