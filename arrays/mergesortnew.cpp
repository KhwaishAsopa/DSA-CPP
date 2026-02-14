#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int i;
    int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first=new int[l1];
    int *second=new int[l2];
    int k=s;
    for(i=0;i<l1;i++)
        first[i]=arr[k++];
    k=mid+1;
    for(i=0;i<l2;i++)
        second[i]=arr[k++];
    int i1=0;
    int i2=0;
    k=s;
    while(i1<l1 && i2<l2)
    {
        if(first[i1]<second[i2])
            arr[k++]=first[i1++];
        else
            arr[k++]=second[i2++];

    }
    while(i1<l1)
        arr[k++]=first[i1++];
    while(i2<l2)
        arr[k++]=second[i2++];  
    delete []first;
    delete []second; 

}
void msort(int arr[],int s,int e){
    if(s>=e)
        return;
    int mid=(s+e)/2;
    msort(arr,s,mid);
    msort(arr,mid+1,e);
    merge(arr,s,e);

}
int main(){
    int n;    
    cout<<"enter size";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    msort(arr,0,n-1);
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
