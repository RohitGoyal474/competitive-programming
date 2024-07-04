
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
    while(n--){
        int n_;
        cin>>n_;
        int ans=0;
        int max1=0,l=0;
        for(int i=0;i<n_;i++){
            int i_;
            cin>>i_;
            if(i_>=max1 && i==n_-1){
                ans=i_+max1;
            }
            else if(i_>=max1){
                max1=i_;
            }
            l=i_;
        }
        if(ans==0){
            ans=max1+l;
        }
        cout<<ans<<endl;
    }
    

    return 0;
}
