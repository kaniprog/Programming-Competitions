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

int sttoi(std::string str) { int ret; std::stringstream ss; ss << str; ss >> ret; return ret; }
int par[MAX];
int ran[MAX];

int main() {
	ll n, a, b, c;
	cin >> n >> a >> b >> c;
	if (a < b && b > c && a != c) {
		P(0);
		return 0;
	}
	if (a > b && c > b && a != c) {
		P(0);
		return 0;
	}
	if (n == 0) {
		P(-1);
		return 0;
	}
	if (a == b && b == c && a == c) {
		if (a == n) {
			P(-1);
			return 0;
		}
		else if (a == 1) {
			P(-1);
		}
		else {
			P(3);
			return 0;
		}
	}
	else if (a == c) {
		if (a == 0) {
			P(-1);
		}
		else {
			P(2);
		}
		return 0;
	}
	else if (a < c) {
		if (max(a, max(b, c)) == b) {
			P(0);
			return 0;
		}
		else if (min(a, min(b, c)) == b) {
			P(0);
			return 0;
		}
		else {
			ll gap = min(abs(a - b), abs(b - c));
			if (gap == abs(a - b)) {
				if (a == 0) {
					if (c - (abs(b - c)/n + 1)*n < b && c - (abs(b - c)/n + 1)*n > 0) {
						P((int)(abs(b - c) / n + 1));
						return 0;
					}
					else {
						P(-1);
						return 0;
					}
				}
				else {
					P((int)gap / n + 1);
					return 0;
				}
			}
			else {
				if (b == 0) {
					P(-1);
					return 0;
				}
				else {
					P((int)gap / n + 1);
					return 0;
				}
			}
		}
	}
	else if (a > c) {
		if (max(a, max(b, c)) == b) {
			P(0);
			return 0;
		}
		else if (min(a, min(b, c)) == b) {
			P(0);
			return 0;
		}
		else {
			ll gap = min(abs(a - b), abs(b - c));
			if (gap == abs(b - c)) {
				if (c == 0) {
					P(-1);
					return 0;
				}
				else {
					P((int)gap / n + 1);
					return 0;
				}
			}
			else {
				if (b == 0) {
					P(-1);
					return 0;
				}
				else {
					P((int)gap / n + 1);
					return 0;
				}
			}
		}
	}
}
