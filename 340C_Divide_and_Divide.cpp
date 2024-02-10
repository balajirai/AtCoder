#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n, unordered_map<ll, ll>&dp){
    if(n == 1) return 0;
    if(dp[n] > 0) return dp[n];
    return dp[n] = n + solve(n/2, dp) + solve((n+1)/2, dp);
}

int main(){
    ll n;
    cin>>n;

    unordered_map<ll, ll>dp;
    cout<< solve(n, dp) <<endl;
    
    return 0;
}