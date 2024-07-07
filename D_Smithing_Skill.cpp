
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
#define ll long long
bool cmp(pair<int,int>a,pair<int,int>b){
    return a.first<b.first;
}
void solve(){
    ll a,b;
    cin>>a>>b;
    vector<ll>arr1(a),arr2(a);
    vector<pair<ll,ll> >v(a);
    for(ll i=0;i<a;i++){
     cin>>arr1[i];   
    }
    for(ll i=0;i<a;i++){
     cin>>arr2[i];   
    }
    for(ll i=0;i<a;i++){
       v[i] = make_pair(arr1[i] - arr2[i], arr1[i]);
    }
    sort(v.begin(),v.end(),cmp);

    std::priority_queue<ll> mh;
    for(ll i=0;i<b;i++){
        ll t;
        cin>>t;
        mh.push(t);
    }
    ll ans=0;
   for(ll i=0;i<a;i++){
    while (mh.top()>=v[i].second)
    {
        ll temp=mh.top();
        mh.pop();
        ll diff=temp-v[i].second;
        ll n_=diff/v[i].first;
        ll rem=diff%v[i].first;
        ans+=n_*2+2;
        temp=v[i].second+rem-v[i].first;
        

        mh.push(temp);
        
    }
    
   }
   cout<<ans<<endl;
}


int main() {
    
    int noOfCases=1;

    while(noOfCases--){
        solve();
    }

    return 0;
}
