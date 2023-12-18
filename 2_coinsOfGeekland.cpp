#include<iostream>
#include<vector>
using namespace std;
//GEEKS FOR GEEKS QUESTION
int coinsOfGeekland(vector<vector<int>> arr,int k){
    int n = arr.size();
    int maxSum = 0;
    vector<vector<int>>  dp(n+1, vector<int> (n+1));
    for(int i=0; i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else{
                dp[i][j] = arr[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
            }
            if(i>=k && j>=k){
                maxSum  = max(dp[i][j] - (dp[i-k][j] + dp[i][j-k] - dp[i-k][j-k]),maxSum);
            }
        }
    }
    return maxSum;
}

int main(){
    vector<vector<int> > arr ={ {1, 1, 1, 1, 1}, 
                                {2, 2, 2, 2, 2}, 
                                {3, 8, 6, 7, 3}, 
                                {4, 4, 4, 4, 4}, 
                                {5, 5, 5, 5, 5}
                              };
    cout<<coinsOfGeekland(arr,3);
}