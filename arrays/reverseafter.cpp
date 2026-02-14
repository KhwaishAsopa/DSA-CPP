#include<iostream>
#define size 10
using namespace std;
void reverse(int a[],int n,int r){
    int s=r;
    int e=n-1;
    int t;
    while(s<=e){
            t=a[s];
            a[s]=a[e];
            a[e]=t;
            s++;
            e--;
    }
}
int main(){
    int a[size],i,n,r;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter index after which array is to be sorted";
    cin>>r;
    reverse(a,n,r);
    cout<<"reversed array is :"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}
