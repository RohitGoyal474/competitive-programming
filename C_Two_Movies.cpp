
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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int pos=0,neg=0;
    int a1=0,b1=0;
    for(int i=0;i<n;i++){
        if(a[i]==-1 && b[i]==-1){
            neg--;
        }
        else if(a[i]==1 && b[i]==1){
            pos++;
        }
        else{
            if(a[i]==1){
                a1++;
            }
            else if(b[i]==1){
                b1++;
            }
        }
    }
    while(neg<0){
        if(a1>=b1){
            a1--;
        }
        else{
            b1--;
        }
        neg++;
    }
     while(pos>0){
        if(a1>=b1){
            b1++;
        }
        else{
            a1++;
        }
        pos--;
    }
    int ans=min(a1,b1);
    cout<<ans<<endl;
}


int main() {
    
    int noOfCases;
    cin>>noOfCases;
    while(noOfCases--){
        solve();
    }

    return 0;
}
