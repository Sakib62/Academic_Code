/**
**********Bismillahir Rahmanir Rahim**********
              @uthor : Sakib62
*/

#include <bits/stdc++.h>
#include <windows.h>
typedef long long ll;
using namespace std;

int t, n, choice, i, j, k, l, m;

int fact(int i, int j) {
    l = 1;
    for(k = i; k > j; k--) {
        l *= k;
    }
    //factorial of i-j
    m = 1;
    for(k = 1; k <= i-j; k++) {
        m *= k;
    }
    return l / m;
}

int main() {
    system("Color E1");
    cout << "Enter test case no: ";
    cin >> t;
    cout << "\t\t\t Star Pattern \t\t\t\n";
    cout << "1. Right triangle\n2. Inverted right triangle\n3. Mirrored right triangle\n4. Inverted mirrored right triangle\n";
    cout << "5. Hollow right triangle\n6. Hollow inverted right triangle\n7. Hollow mirrored right triangle\n8. Hollow inverted mirrored right triangle\n";
    while(t--) {
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
           case 1:
               cout << "Enter row number: ";
               cin >> n;
               for(i = 1; i <= n; i++) {
                for(j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout <<"\n";
               }
            break;

           case 2:
               cout << "Enter row number: ";
               cin >> n;
               for(i = 1; i <= n; i++) {
                for(j = n; j >= i; j--) {
                    cout << "*";
                }
                cout << "\n";
               }
            break;

           case 3:
               cout << "Enter row number: ";
               cin >> n;
               for(i = 1; i <= n; i++) {
                for(j = n; j > i; j--) {
                    cout << " ";
                }
                for(j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << "\n";
               }
            break;

           case 4:
               cout << "Enter row number: ";
               cin >> n;
               for(i = 1; i <= n; i++) {
                for(j = 1; j < i; j++) {
                    cout << " ";
                }
                for(j = n; j >= i; j--) {
                    cout << "*";
                }
                cout << "\n";
               }
            break;

           case 5:
               cout << "Enter row number: ";
               cin >> n;
               for(i = 1; i <= n; i++) {
                if(i == 1 || i == 2 || i == n) {
                    for(j = 1; j <= i; j++) {
                        cout << "*";
                    }
                }
                else {
                    for(j = 1; j <= i; j++) {
                        if(j == 1 || j == i) cout << "*";
                        else cout << " ";
                    }
                }
                cout << "\n";
                }
            break;

           case 6:
               cout << "Enter row number: ";
               cin >> n;
               for(i = n; i >= 1; i--) {
                if(i == n || i == 2 || i == 1) {
                    for(j = 1; j <= i; j++) {
                        cout << "*";
                    }
                }
                else {
                    for(j = i; j >= 1; j--) {
                        if(j == i || j == 1) cout << "*";
                        else cout << " ";
                    }
                }
                cout << "\n";
               }
            break;

           case 7:
               cout << "Enter row number: ";
               cin >> n;
               for(i = 1; i <= n; i++) {
                for(j = n; j > i; j--) {
                    cout << " ";
                }
                if(i == 1 || i == 2 || i == n) {
                    for(j = 1; j <= i; j++) {
                        cout << "*";
                    }
                }
                else {
                    for(j = 1; j <= i; j++) {
                        if(j == 1 || j == i) cout << "*";
                        else cout << " ";
                    }
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
                if(i == 1 || i == n-1 || i == n) {
                    for(j = n; j >= i; j--) {
                        cout << "*";
                    }
                }
                else {
                    for(j = n; j >= i; j--) {
                        if(j == n || j == i) cout << "*";
                        else cout << " ";
                    }
                }
                cout << "\n";
               }
            break;
        }
        cout << "\n";
    }
}