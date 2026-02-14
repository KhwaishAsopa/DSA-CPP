#include<iostream>
using namespace std;
void lsearch(int a[][5],int n,int x,int r,int c){
    int i,j;
    int f=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==x){
                f=1;
                cout<<"element found at "<<i+1<<" row and "<<j+1<<" column";

            }
            
        }
                         
    }
    if(f==0)
        cout<<"element not found"; 
    
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
    cout<<"enter element to be searched";
    cin>>x;
    cout<<"elements of array are"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    lsearch(a,n,x,r,c);

}