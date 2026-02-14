#include<iostream>
#include<limits.h>
using namespace std;
int maxrow(int a[][5],int r,int c){
    int i,j;
    int s;
    int row;
    int max=INT_MIN;
    for(i=0;i<r;i++){
        s=0;
        for(j=0;j<c;j++){
            s+=a[i][j];
        }
        if(s>max)
        max=s;
        row=i;
    }
    cout<<"maximum sum is "<<max<<endl;
    return row+1;


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

    int m=maxrow(a,r,c);
    cout<<"maximum sum is at row "<<m;




}