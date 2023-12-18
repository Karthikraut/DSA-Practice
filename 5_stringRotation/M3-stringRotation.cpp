#include<iostream>
using namespace std;
bool checkRotation(string s1, string s2){
   string concat = s1+s1;
    if(concat.find(s2) !=-1){
        return true;
    }
    return false;
}
int main(){
    //Method 1:-> Brute Force :-> BY using QUueue T.C = O(N), S.C = O(1)
    string s1=  "geeksforgeeks";
    string s2 = "forgeeksgeeks";
    cout<<checkRotation(s1,s2);
}
