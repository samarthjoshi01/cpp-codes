# include<iostream>
# include<fstream>
# include<vector>
# include<string>
# include<algorithm>
using namespace std;

int main(){
    ofstream out;
    ofstream out1;
    out.open("sam1.txt");
    out1.open("sam2.txt");
    cout<<"enter string";
    string a;
    getline(cin,a);
    out<<a;
   
     out.close();
    ifstream in;
    in.open("sam.txt");
   
    while(!in.eof()){
        in>>a;
     
       reverse(a.begin(),a.end());
       out1<<a<<" ";

    }
    out1.close();
    return 0;
}
