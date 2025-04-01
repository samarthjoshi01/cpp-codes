# include<iostream>

# define max 100
using namespace std;
char* remove(char[],int*);
int main(){
char a[max],*b;int n;

cout<<"enter the size of the array";
cin >> n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
b=remove(a,&n);
for(int i=0;i<n;i++){
cout<<b[i];
}

}
char* remove(char*a,int* n){

for(int i=0;i<(*n);i++){
    for(int j=i+1;j<*n;j++){
        if(a[i]==a[j]){
            for(int k=j;k<*n;k++){
                a[k]=a[k+1];
            }


(*n)--;

        }


    }


}

return a;

}