#include<iostream>
#define s 10
using namespace std;
int pivot(int a[],int n){
    int l=0,u=n-1;
    int mid=(l+u)/2;
    while(l<u){
        mid=(l+u)/2;
        if(a[mid]>a[0])
        l=mid+1;
        else
        u=mid;
    }
    return l;
}
int bs(int a[],int m,int e,int x){
    int l=m;
    int u=e;
    int mid;
    while(l<=u){
        mid=(l+u)/2;
        if(a[mid]==x){
        return mid;
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
    int a[s],n,i,p,x,t;
    cout<<"enter size of the array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter element to be searched";
    cin>>x;
    p=pivot(a,n);
    if(x>=a[p] && x<=a[n-1])
    t=bs(a,p,n-1,x);
    else
    t=bs(a,0,p-1,x);
    if(t==-1)
    cout<<"element not found"<<endl;
    else
    cout<<"element"<<x<<" found at index"<<t;
}