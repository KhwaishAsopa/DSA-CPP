#include<iostream>
#define s 10
using namespace std;
void movezero(int a[],int n){
    int i=0;
    int j,t;
    for(j=0;j<n;j++){
        if(a[j]!=0){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            i++;
        }
    }
        
    
}
int main(){
    int a[s],n,i;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    movezero(a,n);
    cout<<"updated array is"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;

}