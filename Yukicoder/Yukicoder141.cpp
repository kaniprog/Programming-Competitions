#define _CRT_SECURE_NO_WARNINGS
#include <queue>
#include <set>
#include <map>
#include <list>
#include <stack>
#include <cmath>
#include <functional>
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
#include <iterator>
#include <algorithm>
#include <iostream>

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
#define mp make_pair
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef long long ll;
int dx[] = { 0,1,0,-1 };
int dy[] = { -1,0,1,0 };

struct edge{ int to,cost; };

ll to10(int dec, string num) {
    ll a = 0,b = 1;
    for (int i = num.length() - 1; i >= 0; i--) {
        if ('A' <= num[i] && num[i] <= 'Z') {
            a += b*(10 + (num[i] - 'A'));
        }
        else {
            a += b*(num[i] - '0');
        }
        b *= dec;
    }
    return a;
}

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
    ll u, d;
    cin >> u >> d;
    ll count = 0;

    while (true) {
        if (u == d) {
            break;
        }
        if (d == 1) {
            count += u - 1;
            break;
        }
        if (u >= d) {
            u -= d;
        }
        else {
            ll tmp = u;
            u = d;
            d = tmp;
        }
        count++;
    }
    P(count);
}

int main() {
    solve();
    return 0;
}
