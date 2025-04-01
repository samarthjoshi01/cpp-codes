# include<iostream>
# include<string>
using namespace std;
class OverLoadDemo{
public:
void merge(string s1,string s2){
string s3;
s3=s1+s2;
for(int i=0;i<s3.size();i++){

    if(s3[i]=='a'||s3[i]=='e'||s3[i]=='i'||s3[i]=='o'||s3[i]=='u'||s3[i]=='A'||s3[i]=='E'||s3[i]=='I'||s3[i]=='O'||s3[i]=='U')
    cout<<s3[i];
   

}
 cout<<" ";
 for(int i=0;i<s3.size();i++){
 if(s3[i]!='a'&&s3[i]!='e'&&s3[i]!='i'&&s3[i]!='o'&&s3[i]!='u'&&s3[i]!='A'&&s3[i]!='E'&&s3[i]!='I'&&s3[i]!='O'&&s3[i]!='U')
    cout<<s3[i];
   

 }

}
int merge(string s1){
    int sum=0;
    for(int i=0;i<s1.size();i++){
if(s1[i]>=48&&s1[i]<=57){
    sum+=s1[i]-'0';
}

    }

return sum;
}


};
int main(){
string s1,s2,s3;
OverLoadDemo o1;
cout<<"enter the first string:";
cin>> s1 ;
cout<<"enter the second string:";
cin>> s2 ;
cout<<"enter the third string:";
cin>> s3 ;
o1.merge(s1,s2);
cout<<endl;
cout<<o1.merge(s3);//gra54phic37abc
return 0;

}