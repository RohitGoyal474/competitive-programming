
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
    for (int i = 0; i < n; i++)
    {
       int n_;
       cin>>n_;
       int ans=INT_MIN;
       int ans_;
       for(int j=2;j<=n_;j++){
        int x=n_/j;
        int sum=j*(x*(x+1)/2);
        if(sum>ans){
            ans=sum;
            ans_=j;
        }
       }
       cout<<ans_<<endl;
    }
   
    return 0;
}
