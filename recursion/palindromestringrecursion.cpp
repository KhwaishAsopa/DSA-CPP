<<<<<<< HEAD
#include<iostream>
using namespace std;
bool palindrome(string s,int i,int j){
    if(i>j)
        return true;
    if(s[i]!=s[j])
        return false;
    i++;
    j--;
    bool p=palindrome(s,i,j);
    return p;

}
int main(){
    string s;
    cout<<"enter string";
    cin>>s;
    bool p=palindrome(s,0,s.length()-1);
    if(p==true)
        cout<<"string is palindrome";
    else    
        cout<<"string is not a palindorme";
    
=======
#include<iostream>
using namespace std;
bool palindrome(string s,int i,int j){
    if(i>j)
        return true;
    if(s[i]!=s[j])
        return false;
    i++;
    j--;
    bool p=palindrome(s,i,j);
    return p;

}
int main(){
    string s;
    cout<<"enter string";
    cin>>s;
    bool p=palindrome(s,0,s.length()-1);
    if(p==true)
        cout<<"string is palindrome";
    else    
        cout<<"string is not a palindorme";
    
>>>>>>> e57589b51d6df2b98733a57a1d5cf12ed9419085
}