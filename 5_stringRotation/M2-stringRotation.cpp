#include<iostream>
#include<queue>
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
bool checkRotation(string s1, string s2){
    queue<char> q1,q2;
    int n=s1.length(),m=s2.length();
    if(n!=m) return false;
    for(int i=0; i<n; i++){
        q1.push(s1[i]);
        q2.push(s2[i]);
    }

    int k= n;
    while(k){
        char ch = q2.front();
        q2.pop();
        q2.push(ch);
        if(q1==q2) return true;
    }
    return false;
}
int main(){
    //Method 1:-> Brute Force :-> BY using QUueue T.C = O(N^2), S.C = O(1)
    string s1=  "geeksforgeeks";
    string s2 = "forgeeksgeeks";
    cout<<checkRotation(s1,s2);
}

