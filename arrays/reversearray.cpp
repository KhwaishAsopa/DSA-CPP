#include<iostream>
#define s 10
using namespace std;
void reverse(int a[],int n){
    int t,i=0;
    int l=0;
    int h=n-1;
    while(l>=h){
        t=a[i];
        a[i]=a[n-i];
        a[n-i]=t;
        l++;
        h--;
        i++;
        
    }
    return;
}
int main(){
    int a[s],n,i;
    int sum;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of the array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,n);
    cout<<"reversed array is "<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;

    
}