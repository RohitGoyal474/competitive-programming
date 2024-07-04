
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
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long Max=arr[0];
    long long ans=0;
    long long m=0;
    for(long long i=1;i<n;i++){
        if(arr[i]<Max){
            ans+=Max-arr[i];
            m=max(m,Max-arr[i]);
        }
        else{
            Max=arr[i];
        }
    }
    if(ans==0){
        cout<<0<<endl;
    }else{
        cout<<ans+m<<endl;
    }
}


int main() {
    
    int noOfCases;
    cin>>noOfCases;
    while(noOfCases--){
        solve();
    }

    return 0;
}
