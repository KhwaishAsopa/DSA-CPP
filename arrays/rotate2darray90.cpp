#include<iostream>
using namespace std;
void rotate(int a[][5],int n){
    int row,col,i,j,r;
    i=0;
    col=n-1;
    while(i<n && col>=0){
        j=0;
        row=0;
        while(row<n && j<n){
            a[j][n-i-1]=a[i][j];
            row++;
            j++;
        }
        i++;
        col--;
    }
    
    
}


int main(){
    int a[5][5],n,i,j;
    cout<<"enter no of rows and columns";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    
    cout<<"elements of array are"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    rotate(a,n);
    cout<<"array after 90 degree rotation :"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

}