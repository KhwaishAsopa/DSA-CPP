<<<<<<< HEAD
#include<iostream>
using namespace std;
void bsort(int a[],int n){
    int i;
    if(n==0 || n==1)
        return;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    bsort(a,n-1);
}
int main(){
    int n;
    int a[10];
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    bsort(a,n);
    cout<<"sorted array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

=======
#include<iostream>
using namespace std;
void bsort(int a[],int n){
    int i;
    if(n==0 || n==1)
        return;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    bsort(a,n-1);
}
int main(){
    int n;
    int a[10];
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    bsort(a,n);
    cout<<"sorted array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}