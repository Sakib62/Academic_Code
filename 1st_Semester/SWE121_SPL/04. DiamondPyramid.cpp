/**
**********Bismillahir Rahmanir Rahim**********
              @uthor : Sakib62
*/

#include <bits/stdc++.h>
#include<windows.h>
typedef long long ll;
using namespace std;

int t, n, choice, i, j, k, l, m;

void lol(int i, int n) {
    for(j = i; j < n/2; j++) {cout <<" ";}
}

int main() {
    system("Color E1");
    cout << "Enter test case no: ";
    cin >> t;
    cout << "\t\t\t Star Pattern \t\t\t\n";
    cout << "1. Diamond\n2. Hollow diamond\n3. V\n4. X\n5. Pyramid\n";
    cout << "6. Inverted pyramid\n7. Hollow pyramid\n8. Hollow inverted pyramid\n\n";
    while(t--) {
     cout << "Enter choice: ";
     cin >> choice;
     switch(choice) {
        case 1:
            cout << "Enter row number(odd): ";
            cin >> n;
            if(n%2==0) cout << "AS ROW NO. IS EVEN, FOLLOWING PATTERN IS THE SAME IF ROW = "<< n+1 <<"\n";
             for(i = 0; i < n/2; i++) {
                lol(i, n);
                for(j = 1; j <= 2*i +1 ; j++) {
                    cout << "*";
                }
                lol(i, n);
                cout << "\n";
             }
             for(i = 1; i<= n; i++) {
                cout << "*";
             }
             if(n%2==0) cout << "*";
             cout << "\n";
             for(i = n/2 - 1  ; i >= 0 ; i--) {
                lol(i, n);
                for(j = 1; j <= 2*i +1; j++) {
                    cout << "*";
                }
                lol(i, n);
                cout << "\n";
             }
        break;

        case 2:
            cout << "Enter row number(even): ";
            cin >> n;
            if(n&1) cout << "AS ROW NO. IS ODD, FOLLOWING PATTERN IS THE SAME IF ROW = "<< n-1 <<"\n";
            for(i = 1; i <= n/2; i++) {
                for(j = i; j <= n/2; j++) {
                    cout << "*";
                }
                for(j = 1; j <= (i-1)*2; j++) {
                    cout << " ";
                }
                for(j = i; j <= n/2; j++) {
                    cout << "*";
                }
                cout << "\n";
            }

            for(i = 1; i <= n/2; i++) {
                for(j = 1; j <= i; j++) {
                    cout << "*";
                }
                int l = 1;
                if(n&1) l++;
                for(j = n - 2*i; j >= l; j--) {
                    cout << " ";
                }
                for(j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << "\n";
            }
            break;

        case 3:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                for(j = 1; j < i; j++) {
                    cout << " ";
                }
                cout << "*";
                for(j = 2*n - 1; j > 2*i; j--) {
                    cout << " ";
                }
                if(i<n)cout << "*";
                for(j = 1; j < i; j++) {
                    cout << " ";
                }
                cout << "\n";
            }
            break;

        case 4:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n /2 + 1; i++) {
                 for(j = 1; j < i; j++) {
                     cout << " ";
                 }
                 cout << "*";
                 for(j = n - i; j > i ; j--) {
                     cout << " ";
                 }
                 if(i!= n/2 +1) cout << "*";
                 //for(int j = 1; j < i; j++) cout << " ";
                 cout << "\n";
                 if(n%2==0 && i == n/2) break;
             }

             for(i = 1; i <= n/2 ;i++) {
                 for(j = n/2; j > i; j--) {cout <<" ";}
                 cout << "*";
                 for(j = 1; j <= 1+2*(i-1) ; j++) {
                    if(n%2==0 && j == 1 + 2*(i-1)) break;
                    cout << " ";
                 }
                 cout << "*";
                // for(int j = n/2; j > i; j--) {cout <<" ";}
                 cout << "\n";
             }
             break;

        case 5:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= n - i; j++) {
                    cout << " ";
                }
                for(j = 1; j <= 2*i - 1; j++) {
                    cout << "*";
                }
                for(j = 1; j <= n - i; j++) {
                    cout << " ";
                }
                cout << "\n";
            }
            break;
        case 6:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                for(j = 1; j < i; j++) {
                    cout << " ";
                }
                for(j = 2*n - i; j >= i; j--) {
                    cout << "*";
                }
                for(j = 1; j < i; j++) {
                    cout << " ";
                }
                cout << "\n";
            }
            break;
        case 7:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= n - i; j++) {
                    cout << " ";
                }
                if(i == 1 || i == n) {
                    for(j = 1; j <= 2*i - 1; j++) {
                        cout << "*";
                    }
                }
                else {
                    cout << "*";
                    for(j = 1; j <= (i-1)*2 - 1; j++) {
                        cout << " ";
                    }
                    cout << "*";
                }
                for(j = 1; j <= n - i; j++) {
                    cout << " ";
                }
                cout << "\n";
            }
            break;

        case 8:
            cout << "Enter row number: ";
            cin >> n;
            for(i = 1; i <= n; i++) {
                for(j = 1; j < i; j++) {
                    cout << " ";
                }
                if(i == 1 || i == n) {
                    for(j = 2*n - i; j >= i; j--) {
                        cout << "*";
                    }
                }
                else {
                    cout << "*";
                    for(j = 2*n - 3; j > (i-1)*2; j--) {
                        cout << " ";
                    }
                    cout << "*";
                }
                for(j = 1; j < i; j++) {
                    cout << " ";
                }
                cout << "\n";
            }
            break;
     }
     cout << "\n";
    }
}
