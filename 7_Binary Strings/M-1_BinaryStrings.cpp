//https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
#include<iostream>
using namespace std;
/* Given a binary string S. The task is to count the number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

 Example 1:
 Input:
 N = 4
 S = 1111
 Output: 6
 Explanation: There are 6 substrings from
 the given string. They are 11, 11, 11,
 111, 111, 1111.*/

//ANS:-> T.C =>O(n^2), S.C => O(1) TIME LIMIT EXCEEDED FOR BIGGER TEST CASE
long binarySubstring(int n, string a){
       int count=0;
       for(int i=0; i<n-1; i++){
           if(a[i]=='1'){
               for(int j=i+1; j<n; j++){
                    if(a[j]=='1'){
                        count =count +1;
                    }
               }
           }
       } 
       
        return count;
}
int main(){
    cout<<binarySubstring(5,"11011");
}