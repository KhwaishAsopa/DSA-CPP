#include<iostream>
#define s 10
using namespace std;
int sortedrotated(int a[],int n){
    int i;
    int c=0;
    for(i=1;i<n;i++){
        if(a[i-1]>a[i])
        c++;
    }
    if(a[n-1]>a[0])
        c++;
    return c;
}
int main(){
    int a[s],n,i,r;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    r=sortedrotated(a,n);
    if(r<=1)
    cout<<"array is sorted rotated";
    else
    cout<<"array is not sorted rotated";
}