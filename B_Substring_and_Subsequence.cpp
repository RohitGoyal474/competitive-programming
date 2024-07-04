
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
    string a,b;
    cin>>a>>b;

    int ans=a.size()+b.size();
    
    for(int i=0;i<b.size();i++){
        int pt=i;
        for(int j=0;j<a.size();j++){
            if(pt<b.size() && a[j]==b[pt]){
               pt++;
            }
        }
        if(a.size()+b.size()-pt+i<ans){
            ans=a.size()+b.size()-pt+i;
        }
       
        
    }
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
