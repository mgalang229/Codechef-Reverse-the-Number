#include <bits/stdc++.h>

using namespace std;

const int mxN=1e6;
int a[mxN], cnt=0;

void decode(){
	int n;
	cin >> n;
	while(n!=0){
		a[cnt]=n%10;
		n/=10;
		cnt++;
	}
	bool ok=1;
	for(int i=0; i<cnt; ++i){
		if(a[i]==0&&ok)
			continue;
		else{
			ok=0;
			cout << a[i];
		}
	}
	cout << "\n";
	cnt=0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		decode();
	return 0;
}
