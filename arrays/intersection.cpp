#include<iostream>
#define s 10
using namespace std;
void intersect(int a[],int n,int b[],int m){
    int i,j;
    int f=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j])
            cout<<a[i]<<endl;
            f=1;
            
            
        }
        
    }
    if(f==0)
    cout<<-1;
    
    
}
int main(){
    int a[s],b[s],i,c,n,m;
    cout<<"enter size of 1st array";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter size of 2nd array";
    cin>>m;
    cout<<"enter elements"<<endl;;
    for(i=0;i<m;i++)
    cin>>b[i];
    cout<<"intersection elements are"<<endl;
    intersect(a,n,b,m);
    

    
    
}