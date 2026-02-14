#include<iostream>
#define size 10
using namespace std;
void reverse(int a[],int n){
    int s=0;
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
    int a[size],i,n;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    reverse(a,n);
    cout<<"reversed array is :"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}
