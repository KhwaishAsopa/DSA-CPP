#include<iostream>
#define s 20
using namespace std;
void merge(int a[],int n,int b[],int m,int c[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
            
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }

    }
    while(i<n){
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<m){
        c[k]=b[j];
        k++;
        j++;
    }
       
}
int main(){
    int a[s],b[s],c[s],i;
    int n,m;
    cout<<"enter size of array1";
    cin>>n;
    cout<<"enter elements of array1";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter size of array2";
    cin>>m;
    cout<<"enter elements of array2";
    for(i=0;i<m;i++)
    cin>>b[i];
    c[n+m]={0};
    merge(a,n,b,m,c);
    cout<<"merged sorted array is"<<endl;
    for(i=0;i<n+m;i++)
    cout<<c[i]<<endl;
}