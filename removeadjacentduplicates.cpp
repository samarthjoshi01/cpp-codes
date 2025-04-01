# include<iostream>
# include<string>
using namespace std;
int main (){
string s;
cin>>s;
 for(int i=0;i<=s.size()-1;){
    if(s=="")
    return 0;
      else  if(s[i]==s[i+1]){
            s.erase(i,2);
             if(i>0)
            i--;
            cout<<s<<endl;
         }
        else
        i++;
       }
    cout<<s;
    return 0;
}