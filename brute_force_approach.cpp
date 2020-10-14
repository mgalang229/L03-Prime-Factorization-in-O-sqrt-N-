#include <bits/stdc++.h>
using namespace std;

#define ll long long

void primeFact(int n) {
	for(int i=2; i<=n; ++i)
		if(n%i==0) {
			int cnt=0;
			while(n%i==0) {
				cnt++;
				n/=i;
			}
			cout << i << " ^ " << cnt << "\n";
		}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	primeFact(n);
}
