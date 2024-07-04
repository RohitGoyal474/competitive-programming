
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
    string s;
    cin>>s;
    unordered_map<char,int>map;
    for(int i=0;i<s.size();i++){
        map[s[i]]++;
    }
    for(auto x:map){
        if(x.second%n!=0){
            cout<<"-1"<<endl;
            return 0;
        }
    }
    string temp="";
    for(auto x:map){
        int val=x.second/n;
        for(int i=0;i<val;i++){
            temp+=x.first;
        }
        
    }
    string ans="";
    for(int i=0;i<n;i++){
        ans+=temp;
    }
   
    cout<<ans<<endl;

    return 0;
}
