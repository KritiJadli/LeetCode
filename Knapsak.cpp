#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int knapsack(int wt[],int val[],int n,int W){
    if(n==0 || W==0){
        return 0;
    }
    if(dp[n][W]!=-1){
        return dp[n][W];
    }
    if(wt[n-1]<=W){
        return dp[n][W]=max(val[n-1]+knapsack(wt,val,n-1,W-wt[n-1]),knapsack(wt,val,n-1,W));
    }
    else{
        return dp[n][W]=knapsack(wt,val,n-1,W);
    }
}
int main(){
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    int n=4;
    int W=7;
    memset(dp,-1,sizeof(dp));
    cout<<"maximum profit is "<<knapsack(wt,val,n,W);
    return 0;

}