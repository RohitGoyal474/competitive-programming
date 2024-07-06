
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
    vector<int>a(3);
    for(int i=0;i<3;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int d1=a[1]-a[0];
    int d2=a[2]-a[1];
    cout<<d1+d2<<endl;
    
    

    return 0;
}
