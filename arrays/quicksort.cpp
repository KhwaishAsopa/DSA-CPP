#include<iostream>
using namespace std;
int arr[20];
int n;
int partition(int s,int e){
    int p=arr[s];
    int i=s+1;
    int j=e;
    int t;
    while(i<=j){
        while((arr[i]<p) && (i<=e)){
            i=i+1;
        }
        while(arr[j]>p)
            j=j-1;
        if(i<j){
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            i=i+1;
            j=j-1;
        }

    }
    t=arr[j];
    arr[j]=arr[s];
    arr[s]=t;
    return j;

}
void qsort(int s,int e){
    int j;
    if(s<e){
        
        j=partition(s,e);
        qsort(s,j-1);
        qsort(j+1,e);
    }

}

int main(){ 
    int i;
    cout<<"enter size";
    cin>>n;
    
    cout<<"enter elements";
    for(i=0;i<n;i++)
        cin>>arr[i];
    qsort(0,n-1);
    cout<<"sorted array"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
