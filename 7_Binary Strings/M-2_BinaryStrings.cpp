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
long binarySubstring(int n, string a){
       int count=0;
       for(int i=0; i<n; i++){
            if(a[i]==1) count+=1;
       }
       return count *(count-1)/2;
}
int main(){
    cout<<binarySubstring(5,"11011");
}

/*
Expected approach
Intuition
The idea is that if the count of 1 in the string is x, then there will be (x*(x-1))/2 possible subarrays.

Implementation
Count the number of 1 in the string using a loop and store that in the count variable
return (count*(count-1))/2
Complexity
Time complexity: O(N) for counting the number of 1 in the string by simply traversing the string.
Space complexity: O(1), As we are not using any extra space.
*/


