
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
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    vector<long long>ans(n,0);
    rep(i,0,n){
        cin>>v[i];
    }
    v[0]+=k;
    long long p,max_=INT_MIN;
    rep(i,0,n){
        if(v[i]>max_){
            max_=v[i];
            p=i;
        }
    }
    
    ans[p]=0;
    rep(i,p+1,n){
        ans[i]=i;
    }
    if(p!=0){
        ans[0]=1;
    }
    long long sum=v[0];
    rep(i,1,p){
        sum+=v[i];
        if(sum>=max_){
           
            ans[i]=i;
          
        }
        else{
            ans[i]=i+1;
        }
        
    }
    rep(i,0,n){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}


int main() {
    
    int noOfCases;
    cin>>noOfCases;
    while(noOfCases--){
        solve();
    }

    return 0;
}
