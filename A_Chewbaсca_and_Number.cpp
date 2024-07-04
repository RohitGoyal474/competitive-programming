
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
        string n;
        cin>>n;
    
    int no=n.size();
    int ans=0;
    for(int i=0;i<no;i++){
        if(i==0 && n[i]=='9'){
            continue;
        }
        else{
            if(n[i]-'0'>4){
                int a=n[i]-'0';
                a=9-a;
                char b='0'+a;
                // cout<<"a"<<a<<endl;
                n[i]=b;
            }
        }
    }

    cout<<n<<endl;
    return 0;
}
