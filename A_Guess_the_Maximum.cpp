
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
    int no;
    cin>>no;
    for(int i=0;i<no;i++){
        int n;
        cin>>n;
        int l=INT_MAX;
        int p1,p2;
        for(int j=0;j<n;j++){
            int input;
            cin>>input;
            if(j==0){
                p1=input;
                continue;
            }
            p2=input;
            int m=max(p1,p2);
            if(m<l){
                l=m;
            }
            p1=p2;
        }
        cout<<l-1<<endl;
    }
    

    return 0;
}
