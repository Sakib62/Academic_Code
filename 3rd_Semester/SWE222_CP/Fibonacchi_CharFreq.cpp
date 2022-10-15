#include <bits/stdc++.h>
using namespace std;

unsigned long long fibonacchiStore[500];

unsigned long long fibonacchi(unsigned long long n) {

	if(n == 1) return 0;
	if(n == 2) return 1;

	if(fibonacchiStore[n]) return fibonacchiStore[n];

	return fibonacchiStore[n] = fibonacchi(n - 1) + fibonacchi(n - 2);
}

void charFrequency() {

		string s;
		cin >> s;
		map<char, int>charMapper;
		map<char, int>::iterator it;
		for(int i = 0; i < s.length(); i++) {
			charMapper[s[i]]++;
			//if(charMapper.find(s[i]) != charMapper.end()) charMapper[s[i]] += 1;
			//else charMapper[s[i]] = 1;
		}
		cout << "Char frequency in '" << s << "' is: \n";
		//for(auto it: charMapper) cout << it.first << " " << it.second << "\n";
		for(it = charMapper.begin(); it != charMapper.end(); it++) {
			cout << it->first << " " << it->second << "\n";
		}
		cout << "\n";

}

int main() {

	int t = 1;
	cin >> t;
	while(t--) {
		//charFrequency();
		unsigned long long n;
		cin >> n;
		cout << n << "'th fibonacchi number is: " << fibonacchi(n) << "\n";
	}
}