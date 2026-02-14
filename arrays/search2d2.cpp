#include<iostream>
using namespace std;
int search(int a[][5],int r,int c,int x){
    int row=0;
    int col=c-1;    
    while(row<r && col>=0){
        int n=a[row][col];
        if(n==x)
            return 1;
        if(x<n)
            col--;
        else
            row++;
        
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
    f=search(a,r,c,x);
    if(f==1)
        cout<<"found";
    else    
        cout<<"not found";

}