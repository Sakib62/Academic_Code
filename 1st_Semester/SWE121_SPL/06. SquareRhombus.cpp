/**
**********Bismillahir Rahmanir Rahim**********
              @uthor : Sakib62
*/

#include <bits/stdc++.h>
#include<windows.h>
typedef long long ll;
using namespace std;

int t, n, choice, i, j, k, l, m;

int main() {
    system("Color E1");
    cout << "Enter test case no: ";
    cin >> t;
    cout << "\t\t\t Star Pattern \t\t\t\n";
    cout << "1. Square\n2. Hollow square\n3. Hollow square with one diagonal\n4. Hollow square with two diagonal\n";
    cout << "5. Rhombus\n6. Hollow rhombus\n7. Mirrored rhombus\n8. Hollow mirrored rhombus\n";
    while(t--) {
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
           case 1:
               cout << "Enter row number: ";
               cin >> n;
               for(i = 1; i <= n; i++) {
                for(j = 1; j <= n; j++) {
                    cout << "*";
                }
                cout << "\n";
               }
               break;

           case 2:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                cout << "*";
                for(j = 2; j < n; j++) {
                    if(i == 1 || i == n) cout << "*";
                    else cout << " ";
                }
                cout << "*\n";
            }
            break;

           case 3:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                cout << "*";
                if(i == 1 || i == n) {
                    for(j = 2; j < n; j++) cout << "*";
                }
                else {
                    k = 0;
                    for(j = 1; j <= i - 2; j++) {cout << " "; k++;}
                    cout << "*";
                    for(j = 1; j <= n - 3 - k; j++) cout << " ";
                }
                cout << "*\n";
            }
            break;

           case 4:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                cout << "*";
                if(i == 1 || i == n) {
                    for(j = 2; j < n; j++) cout << "*";
                }
                else {
                    if(i <= n/2) {
                        k = 0;
                        for(j = 1; j <= i - 2; j++) {cout << " "; k++;}
                        cout << "*";
                        for(j = 1; j <= n - 4 - 2*k; j++) cout << " ";
                        cout << "*";
                        for(j = 1; j <= i - 2; j++) {cout << " ";}
                    }
                    else if(n&1 && i == n/2 +1) {
                        for(j = 1; j <= n/2-1; j++) cout << " ";
                        cout << "*";
                        for(j = 1; j <= n/2-1; j++) cout << " ";
                    }
                    else {
                        l = i - n/2;
                        if(n&1) l--;
                        for(j = n/2 - 2; j >= l; j--) cout << " ";
                        cout << "*";
                        for(j = 1; j < 1 + 2*(l-1); j++) cout << " ";
                        if(n&1) cout << " ";
                        cout << "*";
                        for(j = n/2 - 2; j >= l; j--) cout << " ";
                    }
                }
                cout << "*\n";
            }
            break;

           case 5:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                for(j = i; j <= n - 1; j++) cout << " ";
                for(j = 1; j <= n; j++) cout << "*";
                cout << "\n";
             }
             break;

           case 6:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                for(j = i; j <= n - 1; j++) cout << " ";
                cout << "*";
                for(j = 1; j <= n - 2; j++) {
                    if(i == 1 || i == n) cout << "*";
                    else cout << " ";
                }
                cout << "*\n";
             }
             break;

           case 7:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                for(j = 1; j < i; j++) cout << " ";
                cout << "*";
                for(j = 1; j <= n - 2; j++) cout << "*";
                cout << "*\n";
             }
             break;

           case 8:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                for(j = 1; j < i; j++) cout << " ";
                cout << "*";
                for(j = 1; j <= n - 2; j++) {
                    if(i == 1 || i == n) cout << "*";
                    else cout << " ";
                }
                cout << "*\n";
             }
             break;
        }
        cout << "\n";
    }
}