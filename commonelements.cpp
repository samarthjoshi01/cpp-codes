# include <iostream>
using namespace std;
int* find(int arr1[],int n1,int arr2[],int n2,int*ind){
    int n3;
    if(n1>n2){
    n3=n2;
    }
    else{
        n3=n1;
    }
    
    int * arr3=new int[n3];
    int i=0,j=0;
    while(i<n1&&j<n2){
        if(arr1[i]==arr2[j]){
            arr3[(*ind)++]=arr1[i];
        i++,j++;
        }

    else if(arr1[i]<arr2[j])
    i++;
    else 
    j++;

    }
    return arr3;

}
int main(){
    int T,ind=0;

cout<<"enter the no of test cases"<<endl;
cin>>T;
while(T--){
    int n1;
    cout<<"enter the size of the 1 array ";
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    cin>>arr1[i];
    int n2;
    cout<<"enter the size of the 2 array ";
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++)
    cin>>arr2[i];

int *arr= find(arr1, n1, arr2, n2,&ind);
 cout<<"common elements of the arrays are";
 for(int i=0;i<ind;i++){
    cout<<arr[i];
 }

}
return 0;


}