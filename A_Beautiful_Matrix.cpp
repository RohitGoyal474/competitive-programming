
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
    int row,col;
    bool flag=true;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int input;
            cin>>input;
            if(input==1){
                row=i;
                col=j;
                flag=false;
                break;
            }
        }
        if(!flag){
            break;
        }
    }
    int ans=abs(3-row)+abs(3-col);
    cout<<ans;

    return 0;
}
