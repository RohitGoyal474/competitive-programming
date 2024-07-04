
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <bitset>
#include <numeric>
#include <limits>
#include <iomanip>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve(){

    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++) cin>>arr[i];
    vector<long long>dp(n);
    dp[n-1]=arr[n-1];
    for(long long i=n-2;i>=0;i--){
        if(arr[i]>dp[i+1]){
            dp[i]=arr[i];
        }
        else{
            dp[i]=dp[i+1]+1;
        }
    }
    cout<<dp[0]<<endl;
}


int main() {
    
    int noOfCases;
    cin>>noOfCases;
    while(noOfCases--){
        solve();
    }

    return 0;
}
