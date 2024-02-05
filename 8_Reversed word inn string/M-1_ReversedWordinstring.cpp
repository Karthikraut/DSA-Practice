#include<iostream>
using namespace std;
string reverseWords(string s) 
    { 
       int n= s.length();
       string word ="",rev = "";
       for(int i=0 ; i<n ;i++){
           if(s[i]=='.'){
               rev  = word +rev;
               rev = s[i] +rev;
               word ="";
           }
           else{
               word += s[i];
           }
       }
       rev = word +rev;
       return rev;
      
    } 
int main(){
    cout<<reverseWords("i.love.you.why.not");
}