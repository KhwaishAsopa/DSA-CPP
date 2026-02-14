#include<iostream>
using namespace std;
void reverse(int a[],int n){
    int i,t;
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;

    }
}
int main(){
    int a[5],i;
    cout<<"enter elements of array";
    for(i=0;i<5;i++)
    cin>>a[i];
    reverse(a,5);
    cout<<"reversed array is :"<<endl;
    for(i=0;i<5;i++)
    cout<<a[i]<<endl;

}