#define _CRT_SECURE_NO_WARNINGS
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
#define aLL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXISt(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define MAX 100000000
#define PI 3.14159265258979
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef long long ll;
int dx[] = { 0,1,0,-1 };
int dy[] = { -1,0,1,0 };

int sttoi(std::string str) { 
	int ret; 
	std::stringstream ss; ss << str;
	ss >> ret; 
	return ret; 
}

bool sort_greater(const pair<string, int> &a, const pair<string, int> &b) {
	return a.second > b.second;
}

ll permutation(ll n, ll k) {
	ll ans = 1;
	for (ll i = 0; i < k; i++) {
		ans *= n - i;
	}
	for (ll i = 0; i < k; i++) {
		ans /= k - i;
	}
	return ans;
}

void solve() {
	ll h, e, l, o, w, r, d;
	ll sum = 1;
	ll alpha[26];
	rep(i, 26) {
		cin >> alpha[i];
	}
	d = alpha[3]; e = alpha[4]; h = alpha[7]; l = alpha[11]; o = alpha[14]; r = alpha[17]; w = alpha[22];
	sum *= permutation(h, 1);
	sum *= permutation(e, 1);
	sum *= permutation(w, 1);
	sum *= permutation(r, 1);
	sum *= permutation(d, 1);
	l -= 3;
	ll maxi = 0;
	for (int i = 0; i <= l;i++) {
		maxi = max(maxi, permutation(2 + i, 2)*permutation(1 + l - i, 1));
	}
	sum *= maxi;
	maxi = 0;
	o -= 2;
	for (int i = 0; i <= o;i++){
		maxi = max(maxi, permutation(1 + i, 1)*permutation(1 + o - i, 1));
	}
	sum *= maxi;
	P(sum);
}

int main() {
	solve();
	return 0;
}
