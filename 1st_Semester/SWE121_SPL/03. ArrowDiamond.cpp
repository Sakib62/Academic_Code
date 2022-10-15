/**
**********Bismillahir Rahmanir Rahim**********
              @uthor : Sakib62
*/

#include <bits/stdc++.h>
#include<windef.h> // or windows.h or stdlib.h
typedef long long ll;
using namespace std;
int t, choice, n, i, j;
int len, hf, mm, dd, yh;

///LOVE PORTION
void love(int n) {
       hf = n/2, mm = 1, dd = n;
       if(n&1) dd++;
       dd/=2;
       for(i = 1; i <= n/2 + 1; i = i + 2) {
            for(j = mm; j <= n/4; j++) cout << " "; mm++;
            for(j = 1; j <= hf; j++) cout << "*";
            for(j = dd; j >= 1; j--) cout << " "; dd -= 2;
            for(j = 1; j <= hf; j++) cout << "*";
            hf += 2;
            cout << "\n";
       }
}

int main() {
    system("Color E1"); //b4 or 71
    cout << "Enter test case no: ";
    cin >> t;
    cout << "\t\t\t Star Pattern \t\t\t\n";
    cout << "1. Half diamond\n2. Mirrored half diamond\n3. Right arrow\n4. Left arrow\n";
    cout << "5. Plus\n6. Eight\n7. Heart\n8. Heart with center name\n";
    while(t--) {
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
           case 1:
               cout << "Enter row number(odd): ";
               cin >> n;
               for(i = 1; i <= (n+1)/2; i++) {
                for(j = 1; j <= i; j++) cout << "*";
                cout << "\n";
               }
               for(i = 1; i <= n/2; i++) {
                for(j = i; j <= n/2; j++) cout << "*";
                cout << "\n";
               }
               break;

           case 2:
               cout << "Enter row number(odd): ";
               cin >> n;
               for(i = 1; i <= (n+1)/2; i++) {
                for(j = i; j <= n/2; j++) cout << " ";
                for(j = 1; j <= i; j++) cout << "*";
                cout << "\n";
               }
               for(i = 1; i <= n/2; i++) {
                for(j = 1; j <= i; j++) cout << " ";
                for(j = i; j <= n/2; j++) cout << "*";
                cout << "\n";
               }
               break;

           case 3:
               cout << "Enter row number(odd): ";
               cin >> n;
               for(i = 1; i <= (n+1)/2; i++) {
                for(j = 1; j < i; j++) cout << "  ";
                for(j = i; j <= (n+1)/2; j++) cout << "*";
                cout << "\n";
               }
               for(i = 1; i <= n/2; i++) {
                for(j = i; j < n/2; j++) cout << "  ";
                for(j = 1; j <= i+1; j++) cout << "*";
                cout << "\n";
               }
               break;

           case 4:
               cout << "Enter row number(odd): ";
               cin >> n;
               for(i = 1; i <= (n+1)/2; i++) {
                for(j = i; j < (n+1)/2; j++) cout << " ";
                for(j = i; j <= (n+1)/2; j++) cout << "*";
                cout << "\n";
               }
               for(i = 1; i <= n/2; i++) {
                for(j = 1; j <= i; j++) cout << " ";
                for(j = 1; j <= i+1; j++) cout << "*";
                cout << "\n";
               }
               break;

           case 5:
               cout << "Enter row number: ";
               cin >> n;
               for(i = 1; i <= n/2; i++) {
                for(j = 1; j <= n/2; j++) cout << " ";
                cout << "+\n";
               }
               for(j = 1; j <= n; j++) cout << "+";
               cout << "\n";
               for(i = 1; i <= n/2; i++) {
                for(j = 1; j <= n/2; j++) cout << " ";
                cout << "+\n";
               }
               break;

           case 6:
               cout << "Enter row number: ";
               cin >> n;
               for(i = 1; i <= n; i++) {
                if(i == 1 || i == (n+1)/2 || i == n) {
                    cout << " ";
                    for(j = 1; j <= n/2; j++) cout << "*";
                }
                else {
                    cout << "*";
                    for(j = 1; j <= n/2; j++) cout << " ";
                    cout << "*";
                }
                cout << "\n";
               }
               break;

           case 7:
               cout << "Enter row number: ";
               cin >> n;
               love(n);
               for(i = 1; i <= n; i++) {
                    for(j = 1; j < i; j++) {
                        cout << " ";
                    }
                    for(j = 2*n - i; j >= i; j--) cout << "*";
                    cout << "\n";
              }
              break;

           case 8:
               cout << "Enter row number: ";
               cin >> n;
               string s = "I MISS MY CHILDHOOD TIMES.";
               cout << "Enter name(of length "<< n*2 - 1 <<  " or less): ";
               //cin >> s;
               getline(cin >> ws, s);

               len = s.length();
               hf = n/2, mm = 1, dd = n;
               if(n&1) dd++;
               dd/=2;
               yh = n/2 + 1;
               if(n%4 == 0) yh--;
               for(i = 1; i <= yh; i = i + 2) {
                    for(j = mm; j <= n/4; j++) cout << " "; mm++;
                    for(j = 1; j <= hf; j++) cout << "*";
                    for(j = dd; j >= 1; j--) cout << " "; dd -= 2;
                    for(j = 1; j <= hf; j++) cout << "*";
                    hf += 2;
                    cout << "\n";
               }


               for(i = 1; i <= n; i++) {
                    for(j = 1; j < i; j++) {
                        cout << " ";
                    }
                    if(i == 1) {
                        for(j = 1; j < n - len/2; j++) cout << "*";
                        cout << s;
                        for(j = 1; j < n - len/2; j++) cout << "*";
                        if(len%2 == 0) cout << "*";
                    }
                    else for(j = 2*n - i; j >= i; j--) cout << "*";

                    cout << "\n";
              }
              break;
        }
        cout << "\n";
    }
}
