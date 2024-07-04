
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
    
    int noOfRounds=0;
    cin>>noOfRounds;
    if(noOfRounds==0){
        return 0;
    }

    for(int i=0;i<noOfRounds;i++){
        int arr[8]={0};
        int input1,input2;
        
        cin>>input1;
        cin>>input2;
        string word;
        int ans=0;
        cin>>word;
        for(int i=0;i<input1;i++){
            
            arr[word[i]-'A'+1]++;
        }
        for(int i=1;i<8;i++){
            if(arr[i]>=input2){
                continue;
            }
            else{
                ans+=input2-arr[i];
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
