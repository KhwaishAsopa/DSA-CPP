#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[5][5],n,i,j,r,c,x;
    int s;
    int max=INT_MIN;
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
    for(i=0;i<r;i++){
        s=0;
        for(j=0;j<c;j++){
            s=s+a[i][j];

        }
        cout<<"sum of elements in row "<<i+1<<" is :"<<s<<endl;
        if(s>max){
            max=s;
            x=i+1;
        }
        
    }
        cout<<"maximmum sum is "<<max<<endl;
        cout<<"row having max sum is "<<x;


}