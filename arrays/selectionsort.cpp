#include<iostream>
#define s 10
using namespace std;
void ssort(int a[],int n){
    int i,j,t,m;
    for(i=0;i<n-1;i++){
        m=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[m])
                m=j;  
        }
        t=a[i];
        a[i]=a[m];
        a[m]=t;
    }
}
int main(){
    int a[s],i,n;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    ssort(a,n);
    cout<<"sorted array is "<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}