//https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
/*Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
*/
#include<iostream>
using namespace std;
//T.C :-> O(n) , S.C :-> O(n) //as extra spac of array is used
char getMaxOccuringChar(string str)
    {
        // Your code here
        int n =str.length();
        int arr[25];
        for(int i=0; i<25; i++){
            arr[i]=0;
        }
        for(int i=0; i<n; i++){
            char ch = str[i];
            int idx =ch-97;
             arr[idx] = arr[idx]+1;
        }
        
        int maxFreq=0;
        char ch ;
        for(int i=24; i>=0; i--){
            if(arr[i]>=maxFreq){
                maxFreq = arr[i];
                int idx = i +97;
                ch = char(idx);
            }
        }
      
        return ch;
    }
int main(){
    cout<<getMaxOccuringChar("testSample");
}