#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    
    cout<<"enter no of rows";
    cin>>n;
    int s[10];
    for(i=0;i<n;i++){
        cout<<"enter size of row"<<i;
        cin>>s[i];
    }
    int** arr=new int*[n];
    for(i=0;i<n;i++){
            arr[i]=new int[s[i]];
    }
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<s[i];j++)
            cin>>arr[i][j];
    }
    for(i=0;i<n;i++){
        for(j=0;j<s[i];j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    for(i=0;i<n;i++)
        delete [] arr[i];
    delete [] arr;
}

