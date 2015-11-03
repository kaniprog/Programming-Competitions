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

ll combination(ll n, ll k) {
    ll ans = 1;
    for (ll i = 0; i < k; i++)ans *= n - i;
    for (ll i = 0; i < k; i++)ans /= k - i;
    return ans;
}

void solve() {
    int x, y;
    cin >> x >> y;
    int mx[] = {-2,-2,-1,-1,1,1,2,2};
    int my[] = {-1,1,-2,2,-2,2,-1,1};
    queue<pair<pii, int> > q;
    pii p = make_pair(0, 0);
    q.push(make_pair(p, 0));
    bool flag = false;
    while (!q.empty()) {
        pii top = q.front().first;
        int step = q.front().second;
        q.pop();
        if (step > 3) continue;
        if (top.first == x && top.second == y && step <= 3) {
            flag = true;
            break;
        }
        rep(i, 8) {
            int newX = top.first + mx[i];
            int newY = top.second + my[i];
            pii pos = make_pair(newX, newY);
            q.push(make_pair(pos, step + 1));
        }
    }
    P(flag ? "YES" : "NO");
}

int main() {
    solve();
    return 0;
}
