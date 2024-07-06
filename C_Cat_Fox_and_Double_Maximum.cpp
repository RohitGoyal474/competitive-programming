
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
    #define ll long long


    bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }
    void solve(){
        int n;
        cin>>n;
        vector<int>arr1(n,0),arr2(n,0);
        vector<pair<int,int>>v;
        int c=0;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            s.insert(arr1[i]);
            if(arr1[i]==1)c=i;

        }
        for(int i=0;i<n;i++){
            if(i%2!=c%2){
                arr2[i]=n+1-arr1[i];
                s.erase(arr2[i]);
            }else{
                v.push_back({i,arr1[i]});
            }
        }
        sort(v.begin(),v.end(),cmp);
        int j=0;
        for(auto x:s){
            arr2[v[j].first]=x;
            j++;
        }
        for(int i=0;i<n;i++)cout<<arr2[i]<<" ";
        cout<<endl;
    }


    int main() {
        
        int noOfCases;
        cin>>noOfCases;
        while(noOfCases--){
            solve();
        }

        return 0;
    }
