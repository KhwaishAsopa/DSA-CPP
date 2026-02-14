#include<iostream>
using namespace std;
int bsearch(int a[][5],int r,int c,int x){
    int s=0;
    int e=r*c-1;
    int mid=(s+e)/2;
    while(s<=e){
        int n=a[mid/c][mid%c];
        if(n==x)
            return 1;
        if(x<n)
            e=mid-1;
        else
            s=mid+1;
        int mid=(s+e)/2;

    }
    return 0;
}
int main(){
    int a[5][5],n,i,j,r,c,x,f;
    cout<<"enter no of rows and columns";
    cin>>r>>c;
    cout<<"enter elements";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            cin>>a[i][j];
    }
    
    cout<<"elements of array are"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<"enter element to be searched";
    cin>>x;
    f=bsearch(a,r,c,x);
    if(f==1)
        cout<<"found";
    else    
        cout<<"not found";

}