#include<iostream>
#define s 10
using namespace std;
int ls(int a[],int n,int c){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==c)
        return(i+1);
    }
    return 0;
}
int main(){
    int a[s],n,i,c,l;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of the array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"element to be searched"<<endl;
    cin>>c;
    l=ls(a,n,c);
    if(l==0)
    cout<<"element not found"<<endl;
    else
    cout<<"element found at position:"<<l<<endl;



}