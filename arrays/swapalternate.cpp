#include<iostream>
using namespace std;
int main(){
    int a[10],i,t,n;
    int j=0;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    while(j!=n-1){
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
        j=j+2;
    }
    cout<<"updated array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
        
    }
}
