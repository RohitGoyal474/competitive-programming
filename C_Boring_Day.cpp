
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
    long long n,l,r;
    cin>>n>>l>>r;
  
    vector<long long>v(n);
    rep(i,0,n){
        cin>>v[i];
    }
   
    long long p1=0;
    long long sum=0;
    long long ans=0;
    while(p1<n){

       sum+=v[p1];
       cout<<sum<<endl;
       if(sum>=l && sum<=r){
        ans++;
        sum=0;
         p1++;
       }
      
       else if(sum<l){
        p1++;
       }
       else if(sum>r){
        sum=0;
       }
   
    }
    cout<<"ans:"<<ans<<endl;
}


int main() {
    
    int noOfCases;
    cin>>noOfCases;
    
    while(noOfCases--){
    
        solve();
    }

    return 0;
}
