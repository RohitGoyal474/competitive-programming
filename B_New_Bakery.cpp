#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long n_, a, b;
        cin >> n_ >> a >> b;
        
        long long max1 = LLONG_MIN;
        long long ans = 0;

        for (long long i = 1; i <= min(n_, 1000000LL); i++) {
            if(a>=b){
                ans=n_*a;
                break;
            } // Cap iteration to a practical limit
            long long val = (i * b) - (i * (i + 1) / 2) + i + (n_ - i) * a;
            if (val > max1) {   
                max1 = val;
                ans = val;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
