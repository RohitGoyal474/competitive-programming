
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
    for(int i=0;i<n;i++){
        string a,b;
        for(int j=0;j<3;j++){
            char a1;
            cin>>a1;
            a+=a1;
        }
        for(int j=0;j<3;j++){
            char a2;
            cin>>a2;
            b+=a2;
        }
        char a_=a[0];
        char b_=b[0];
        a[0]=b_;
        b[0]=a_;
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}
