#include<iostream>
using namespace std;
void rowsum(int a[][5],int r,int c){
    int i,j;
    int s;
    for(i=0;i<r;i++){
        s=0;
        for(j=0;j<c;j++){
            s+=a[i][j];
        }
        cout<<"sum of row "<<i+1<<" is "<<s<<endl;
    }


}
void colsum(int a[][5],int r,int c){
    int i,j;
    int s;
    for(i=0;i<r;i++){
        s=0;
        for(j=0;j<c;j++){
            s+=a[j][i];
        }
        cout<<"sum of column "<<i+1<<" is "<<s<<endl;
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
    cout<<"array:"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<a[i][j]<<'\t';
        }
        cout<<endl;

    }

    rowsum(a,r,c);
    colsum(a,r,c);


}