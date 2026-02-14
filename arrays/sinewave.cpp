#include<iostream>
using namespace std;
void wave(int a[][5],int r,int c){
    int i,j;
    for(j=0;j<c;j++){
        if(j%2==0){
            for(i=0;i<r;i++)
                cout<<a[i][j]<<" ";
        }
        else if(j%2!=0){
            for(i=r-1;i>=0;i--)
                cout<<a[i][j]<<" ";
        }
    }
}
int main(){
    int a[5][5],n,i,j,r,c,x;
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
    wave(a,r,c);

}