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

void solve() {
    map<int, int> m;
    rep(i, 5) {
        int a;
        cin >> a;
        if (m.find(a) != m.end()) {
            m[a]++;
        }
        else {
            m[a] = 1;
        }
    }
    int n = m.size();

    if (n == 4) {
        P("ONE PAIR");
    }
    else if (n == 3) {
        int cnt2 = 0;
        int cnt3 = 0;
        for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
            if (it->second == 2) {
                cnt2++;
            }
            else if (it->second == 3) {
                cnt3++;
            }
        }
        if (cnt2 == 2) {
            P("TWO PAIR");
        }
        if (cnt3 == 1 && cnt2 == 0) {
            P("THREE CARD");
        }
    }
    else if (n == 2) {
        int cnt2 = 0;
        int cnt3 = 0;
        for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
            if (it->second == 2) {
                cnt2++;
            }
            else if (it->second == 3) {
                cnt3++;
            }
        }
        if (cnt2 == 1 && cnt3 == 1) {
            P("FULL HOUSE");
        }
        else {
            P("NO HAND");
        }
    }
    else {
        P("NO HAND");
    }
}


int main() {
    solve();
    return 0;
