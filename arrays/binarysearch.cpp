#include<iostream>
#define s 10
using namespace std;
int bs(int a[],int n,int x){
    int l=0;
    int u=n-1;
    int mid;
    while(l<=u){
        mid=(l+u)/2;
        if(a[mid]==x){
        return mid+1;
        break;
        }
        if(a[mid]<x)
        l=mid+1;
        else
        u=mid-1;

        
    }
    return -1;
}
int main(){
    int a[s],i,p,x,n;
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter element to be searched";
    cin>>x;
    p=bs(a,n,x);
    if(p==-1)
    cout<<"element not found"<<endl;
    else
    cout<<"element found at position"<<p;
}