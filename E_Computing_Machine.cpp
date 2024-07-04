
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
    int n;
    cin>>n;
    string A;
    string B;
    string A_;
    string B_;
    
    cin>>A;
    cin>>B;
    A_=A;
    B_=B;
    
    rep(i,0,n-2){
        if(A[i]=='0' && A[i+2]=='0'){
            B_[i+1]='1';
        }
    }
    rep(i,0,n-2){
        if(B[i]=='1' && B[i+2]=='1'){
            A_[i+1]='1';
        }
    }
    int q;
    cin>>q;
    while(q--){
        int ans=0;
        int l,r;
        cin>>l>>r;
        l--,r--;
        for(int i=l+2;i<=r-2;i++){
            if(A_[i]=='1'){
                ans++;
            }
        }
        if(A[l]=='1'){
            ans++;
        }
        if(A[r]=='1'){
            ans++;
        }
        if(r-l+1==3){
            if((B[l]=='1' && B[r]=='1')|| A[l+1]=='1'){
                ans+=1;
            }
        }
        if(r-l+1>3){
        if((B[l]=='1'&&l+2<=r && B_[l+2]=='1') ){
            ans++;
        }
        
        if((B[r]=='1'&&r-2>=l && B_[r-2]=='1') ){
            ans++;
        }
        }
       
        
        
        cout<<ans<<endl;
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
