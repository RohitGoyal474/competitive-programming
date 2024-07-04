
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




int main() {
    
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        for( auto x:a){
            if(x=='+'){
                ans++;
                break;
            }
            else if(x=='-'){
                ans--;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
