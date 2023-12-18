#include<iostream>
using namespace std;
//Check if strings are rotations of each other or not [GFG]
/*You are given two strings of equal lengths, s1 and s2. The task is to check if s2 is a rotated version of the string s1.

Note: The characters in the strings are in lowercase.

Example 1:

Input:
geeksforgeeks
forgeeksgeeks
Output: 
1
Explanation: s1 is geeksforgeeks, s2 is
forgeeksgeeks. Clearly, s2 is a rotated
version of s1 as s2 can be obtained by
left-rotating s1 by 5 units.*/
int main(){
    //Method 1:-> Brute Force :-> T.C = O(N^2), S.C = O(1)
    string s1=  "geeksforgeeks";
    string s2 = "forgeeksgeeks";
    cout<<checkRotation(s1,s2);
}

bool checkRotation(string s1,string s2){
    int n =s1.length();
    int m = s2.length();
    if(n!=m) return false;
    for(int i=0; i<n; i++){
        bool found;
        if(s1[i]==s2[0]){
            found =true;
            for(int j=0; j<m; j++){
                if(s1[(i+j)%n] != s2[j]){
                    found =false;
                    break;
                }
            }
        }
        if(found==true) return true;
    }
    return false;

}

