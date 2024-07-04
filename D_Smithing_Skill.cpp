
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
    int a,b;
    cin>>a>>b;
    vector<int>arr1(a),arr2(a);
    for(int i=0;i<a;i++){
     cin>>arr1[i];   
    }
    for(int i=0;i<a;i++){
     cin>>arr2[i];   
    }
    std::priority_queue<int> mh;
    for(int i=0;i<b;b++){
        int t;
        cin>>t;
        mh.push(t);
    }
    
    vector<int>diff(a);
    for(int i=0;i<a;i++){
        diff[i]=arr1[i]-arr2[i];
    }
    for(int i=0;i<a;i++){
        while()
    }
}


int main() {
    
    int noOfCases=1;

    while(noOfCases--){
        solve();
    }

    return 0;
}
