<<<<<<< HEAD
#include<iostream>
#define s 10
using namespace std;
void reverse(char c[],int l){
    int st=0;
    int e=l-1;
    while(st<e)
        swap(c[st++],c[e--]);
}
int main(){
    char c[s];
    int i=0;
    int l=0;
    cout<<"enter string:";
    cin>>c;
    while(c[i]!='\0'){
        l++;
        i++;
    }
    reverse(c,l);
    cout<<c;
=======
#include<iostream>
#define s 10
using namespace std;
void reverse(char c[],int l){
    int st=0;
    int e=l-1;
    while(st<e)
        swap(c[st++],c[e--]);
}
int main(){
    char c[s];
    int i=0;
    int l=0;
    cout<<"enter string:";
    cin>>c;
    while(c[i]!='\0'){
        l++;
        i++;
    }
    reverse(c,l);
    cout<<c;
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}