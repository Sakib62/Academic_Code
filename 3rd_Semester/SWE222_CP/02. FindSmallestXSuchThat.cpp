#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    //cin >> T;
    while(T--) {
        cout << "Problem::\nFor a given array a[] and a threshold value, find smallest X such that sum(ceil(array element / X)) <= threshold\n\n";

        int n, sum = 0, threshold, mx = 0;
        cin >> n;
        int a[n];

        for(auto &i: a) {
            cin >> i;
            sum += i;
            mx = max(mx, i);
        }

        // for(int i = 1; i <= mx; i++) {
        //     int u = 0;
        //     for(int j = 0; j < n; j++) {
        //         u += a[j] / i;
        //         if(a[j] % i) u++;
        //     }
        //     cout << u << "\n";
        // }
        cin >> threshold;

//if we divide by 1, we get max sum,
//if we divide by mx, we get min sum
//Apply Binary Search

        if(n > threshold) { //MIN SUM
            cout << "There is no such value\n";
            continue;
        }

        cout << "Value of d is: ";

        if(sum <= threshold) { //Max sum
            cout << "1";
            continue;
        }
  
        int left = 1, right = mx, mid, ans;
        ans = right;

        while(left <= right) {

            mid = (left + right) / 2;
            int hi = 0;
            for(auto i : a) {
                hi += (i / mid);
                if(i % mid) hi++;
            }
            if(hi <= threshold) right = mid - 1, ans = min(ans, mid);
            else left = mid + 1;
        }

        cout << ans << "\n";
    }
    return 0;
}