<<<<<<< HEAD
#include<iostream>
using namespace std;
char maxoccur(string s){
    int a[26]={0};
    
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int c=0;
        c=ch-'a';
        a[c]++;

    }
    int ans=0;
    int max=-1;

    for(int i=0;i<26;i++){
        if(max<a[i]){
            ans=i;
            max=a[i];
        }
    }
    char final='a'+ans;
    return final;
}
int main(){
    string s;
    int n;
    char m;
    cout<<"enter the string";
    cin>>s;
    m=maxoccur(s);
    cout<<m<<" has maximum occurence";


}

=======
#include<iostream>
using namespace std;
char maxoccur(string s){
    int a[26]={0};
    
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int c=0;
        c=ch-'a';
        a[c]++;

    }
    int ans=0;
    int max=-1;

    for(int i=0;i<26;i++){
        if(max<a[i]){
            ans=i;
            max=a[i];
        }
    }
    char final='a'+ans;
    return final;
}
int main(){
    string s;
    int n;
    char m;
    cout<<"enter the string";
    cin>>s;
    m=maxoccur(s);
    cout<<m<<" has maximum occurence";


}

>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
