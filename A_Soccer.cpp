
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
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
   if(a1>a2 && b2>b1){
       cout<<"NO"<<endl;
   }
   else if(a2>a1 && b1>b2){
       cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
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
