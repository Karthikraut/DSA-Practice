#include<iostream>
using namespace std;
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kaden(int *arr,int num){
        int sum=0,maxSum =0;
        for(int i=0; i<num; i++){
               if(sum<0) sum=0;
               else if(sum>=0){
                   sum+=arr[i];
               }
               maxSum =max(sum,maxSum);
          }
           return maxSum;
    }
    void rotate(int *arr,int num){
        int temp =arr[num-1];
           arr[num-1]=arr[0];
           for(int i=1; i<num-1;i++){
               arr[i-1] =arr[i];
           }
           arr[num-2]=temp;
    }
    int circularSubarraySum(int arr[], int num){
       
     
       if(num==1) return arr[0];
        if(num==2){
            if(arr[0]>0 && arr[1]>0) return arr[0]+arr[1];
            else return max(arr[0],arr[1]);
        }
        int rslt =0;
        for(int i=0; i<num; i++){
            int sum = kaden(arr,num);
          
            rotate(arr,num);
           rslt = max(rslt,sum);

        }
           
    
        return rslt;
    }
      
       
};
int main(){
    
}