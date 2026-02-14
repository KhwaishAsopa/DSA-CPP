#include<iostream>
#define s 10
using namespace std;
void rotate(int a[],int n,int k){
    int i,j;
    int t[s];
    for(i=0;i<n;i++){
        t[(i+k)%n]=a[i];
    }
    for(i=0;i<n;i++){
        a[i]=t[i];
    }
}
int main(){
    int a[s],n,i,k;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter no by which array has to be rotated";
    cin>>k;
    rotate(a,n,k);
    cout<<"rotated array is"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;

}
