#include<iostream>
#define s 10
using namespace std;
void isort(int a[],int n){
    int i,j,x;
    for(i=1;i<n;i++){
        x=a[i];
        j=i-1;
        for(;j>=0;j--){
            if(a[j]>x)
            a[j+1]=a[j];
            else
            break;
        }
        a[j+1]=x;
        
    }
}
int main(){
    int a[s],n,i;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    isort(a,n);
    cout<<"sorted array is :"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;

}