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
int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };

int sttoi(std::string str) {
    int ret;
    std::stringstream ss; ss << str;
    ss >> ret;
    return ret;
}

bool sort_greater(const pair<string, int> &a, const pair<string, int> &b) {
    return a.second > b.second;
}

int n;
double dp[27];

void solve() {
    int n;
    cin >> n;
    ll up, down;
    ll maxi = -1;
    for (int i = 0; i <= n; i++){
        up = i;
        down = n - i;
        maxi = max((up*(down + 1)) + down, maxi);
    }
    P(maxi);
}

int main() {
    solve();
    return 0;
}
