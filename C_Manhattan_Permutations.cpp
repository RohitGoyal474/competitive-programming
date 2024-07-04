
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
    long long x,k;
    cin>>x>>k;
    if(k%2==1){
        cout<<"NO"<<endl;
        return;
    }
    vector<int>v(x+1);
    rep(i,1,x+1){
        v[i]=i;
    }
    k/=2;
    int n=x-1;
    rep(i,1,x/2+1){
        if(k<=n){
            swap(v[i],v[i+k]);
            k=0;
            break;
        }
        swap(v[i],v[i+n]);
        k-=n;
        n-=2;
    }
    if(k<=0){
        cout<<"YES"<<endl;
        rep(i,1,x+1){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
