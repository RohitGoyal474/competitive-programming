
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


// 6 1 1 3 5 3 1

// 1 1 2 3 4 5 5 5
// (1,2) (2,0) (3,0) (4,0) (5,3)   
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n); 
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());

}


int main() {
    
    int noOfCases;
    cin>>noOfCases;
    while(noOfCases--){
        solve();
    }

    return 0;
}
