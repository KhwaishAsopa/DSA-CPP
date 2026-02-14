#include<iostream>
using namespace std;
void spiral(int a[][5],int r,int p){
    int startrow=0;
    int endrow=r-1;
    int startcol=0;
    int endcol=p-1;
    int i,c=0;
    while(c<(r*p)){
        for(i=startcol;i<=endcol;i++){
            cout<<a[startrow][i]<<" ";
            c++;
        }
        startrow++;
        for(i=startrow;i<=endrow;i++){
            cout<<a[i][endcol]<<" ";
            c++;
        }
        endcol--;
        for(i=endcol;i>=startcol;i--){
            cout<<a[endrow][i]<<" ";
            c++;
        }
        endrow--;
        for(i=endrow;i>=startrow;i--){
            cout<<a[i][startcol]<<" ";
            c++;
        }
        startcol++;
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
    spiral(a,r,c);

}