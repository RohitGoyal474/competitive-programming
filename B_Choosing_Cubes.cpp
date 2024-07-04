#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int noOfCases;
    cin >> noOfCases;
    
    for (int i = 0; i < noOfCases; i++) {
        int n, f, k;
        cin >> n >> f >> k;
        
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        
        int fav = arr[f - 1];
        sort(arr.begin(), arr.end());
        
        int originalPos = -1;
        for (int j = 0; j < n; j++) {
            if (arr[j] == fav) {
                originalPos = j;
                break;
            }
        }
        
        if (originalPos == k - 1) {
            cout << "MAYBE" << endl;
        } else if (originalPos < k - 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
