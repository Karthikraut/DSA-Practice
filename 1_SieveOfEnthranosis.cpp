#include<iostream>
using namespace std;
//SIEVE Of Erathostenisis is used for Counting Prime numbers
int countPrimes(int n) {
    if(n==2) return 0;
    if(n==3) return 1;
       //Solving by using Sieve of Erathosenis
       bool *arr = new bool[n+1];
       for(int i=0; i<=n; i++){
            arr[i] = true;
       }
       //Initialy fill the array with true as consdier first that all are the prime numbers
       arr[1]=arr[0] =false;

       for(int i=2;i*i<= n;i++){
           if(!arr[i]) continue;
           for(int j= 2*i; j<=n; j+=i){
               arr[j] =false;
           }
       }
       int count=0;
       for(int i=0; i<n ;i++){
           if(arr[i]==true) count++;
       }
       return count;
}
int main(){
   cout<< countPrimes(10);
}
