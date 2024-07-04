#include <iostream>
#include <unordered_map>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; ++i)

vector<int> merge(vector<int>arr1,vector<int>arr2){
    int p1=0, p2=0;
    vector<int>ans;
    
    while(p1<arr1.size() && p2<arr2.size()){
        if(arr1[p1]>=arr2[p2]){
            ans.push_back(arr2[p2]);
            p2++;
        }
        else if(arr1[p1]<arr2[p2]){
            ans.push_back(arr1[p1]);
            p1++;
        }
    }
    while(p1<arr1.size()){
        ans.push_back(arr1[p1]);
    }
    while(p2<arr2.size()){
        ans.push_back(arr2[p2]);
    }
    return ans;
}
bool pal(string s){
    int n=s.size();
    int half=n/2;
    if(n%2==0){
       int  p1=half;
        int p2=half+1;
    }
    else{
        int p1=half+1,p2=half+1;
    }
    
    while(p1>=0 && p2<n){
        if(s[p1]!=s[p2]){
            return false;
        }
        p1--;
        p2++;
    }
    return true;
}



int main() {
    int arr[4]={1,4,3,2};

    int n=arr.size();

    
   
}
