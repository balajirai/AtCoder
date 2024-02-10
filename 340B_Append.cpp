#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;

    vector<ll>nums;

    while (t--){
        ll a, b;
        cin>>a>>b;

        if(a==1){
            nums.push_back(b);
        }

        else{
            int n = nums.size();
            cout<< nums[n-b] <<endl;
        }
    }
    
    return 0;
}