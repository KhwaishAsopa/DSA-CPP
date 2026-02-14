#include<iostream>
using namespace std;
void wave(int a[][5],int r,int c){
    int i,j;
    for(j=0;j<c;j++){
        if(j%2==0){
            for(i=0;i<r;i++)
            cout<<a[i][j]<<'\t';
        }
        else{
            for(i=r-1;i>=0;i--)
            cout<<a[i][j]<<'\t';
        }
        cout<<endl;
    }
    
}

int main(){
    int a[5][5];
    int i,j,r,c;
    cout<<"enter no of rows";
    cin>>r;
    cout<<"enter no of columns";
    cin>>c;
    cout<<"enter elements of array";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"elements of array:"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<a[i][j]<<'\t';
        }
        cout<<endl;

    }
    cout<<"wave print:"<<endl;
    wave(a,r,c);
}