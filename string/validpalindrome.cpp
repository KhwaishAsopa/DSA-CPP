<<<<<<< HEAD
#include<iostream>
#define size 10
using namespace std;
int check(char s){
       
    if(s>='a' && s<='z' || s>='A' && s<='Z' || s>='0' && s<='9')
    return 1;
    else
    return 0;
}
void valid(char c[],int l){
    char temp[size];
    int i;
    int n=0;
    for(i=0;i<l;i++){
        if(check(c[i])==1){
                temp[i]=c[i];
                n++;
        }
    }
    for(i=0;i<n;i++)
    c[i]=temp[i];
}    

void tolower(char c[],int l){
    for(int i=0;i<l;i++){
        if(c[i]>='A' && c[i]<='Z')
            c[i]=c[i]-'A'+'a';
        
    }
}
int palindrome(char c[],int l){
    int s=0;
    int e=l-1;
    while(s<e){
        if(c[s]!=c[e])
        return 0;
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    char c[size];
    int i=0;
    int l=0;
    int p;
    cout<<"enter string:";
    cin>>c;
    while(c[i]!='\0'){
        l++;
        i++;
    }
    valid(c,l);
    tolower(c,l);
    p=palindrome(c,l);
    if(p==1)
    cout<<"given string is a palindrome";
    else
    cout<<"given string is not a palindrome";
    
=======
#include<iostream>
#define size 10
using namespace std;
int check(char s){
       
    if(s>='a' && s<='z' || s>='A' && s<='Z' || s>='0' && s<='9')
    return 1;
    else
    return 0;
}
void valid(char c[],int l){
    char temp[size];
    int i;
    int n=0;
    for(i=0;i<l;i++){
        if(check(c[i])==1){
                temp[i]=c[i];
                n++;
        }
    }
    for(i=0;i<n;i++)
    c[i]=temp[i];
}    

void tolower(char c[],int l){
    for(int i=0;i<l;i++){
        if(c[i]>='A' && c[i]<='Z')
            c[i]=c[i]-'A'+'a';
        
    }
}
int palindrome(char c[],int l){
    int s=0;
    int e=l-1;
    while(s<e){
        if(c[s]!=c[e])
        return 0;
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    char c[size];
    int i=0;
    int l=0;
    int p;
    cout<<"enter string:";
    cin>>c;
    while(c[i]!='\0'){
        l++;
        i++;
    }
    valid(c,l);
    tolower(c,l);
    p=palindrome(c,l);
    if(p==1)
    cout<<"given string is a palindrome";
    else
    cout<<"given string is not a palindrome";
    
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}