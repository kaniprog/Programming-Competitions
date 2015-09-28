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

string s;

void solve() {
	int a[3], b[3], ver1 = 0, ver2 = 0;
	rep(i, 3) {
		scanf("%d%*c", &a[i]);
	}
	rep(i, 3) {
		scanf("%d%*c", &b[i]);
	}
	ver1 = a[0] * 1000000 + a[1] * 10000 + a[2] * 10;
	ver2 = b[0] * 1000000 + b[1] * 10000 + b[2] * 10;
	if (ver2 <= ver1) {
		P("YES");
	}
	else {
		P("NO");
	}
}


int main() {
	solve();
	return 0;
}
