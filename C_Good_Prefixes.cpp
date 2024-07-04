
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
    while (n-- >0)
    {
        int n_;
        cin>>n_;
        int maxval=0;
        int ans=0;
        int sum=0;
        for(int i=0;i<n_;i++){
            int val;
            
            
            cin>>val;
            if(val>maxval){
                sum+=maxval;
                if(sum==val){
                    ans++;
                }
                maxval=val;
            }
            else{
                sum+=val;
                if(maxval==sum){
                    ans++;
                }
            }
            
        }
        cout<<ans<<endl;
    }
    

    return 0;
}
