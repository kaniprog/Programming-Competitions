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

bool isKaibun(string s) {
    string a = "", b = "";
    if (s.length() % 2 == 0) {
        REP(i, 0, s.length() / 2) {
            a = a + s[i];
        }
        for (int i = s.length() - 1; i >= s.length() / 2; i--) {
            b = b + s[i];
        }
    }
    else {
        REP(i, 0, s.length() / 2) {
            a = a + s[i];
        }
        for (int i = s.length() - 1; i > s.length() / 2; i--) {
            b = b + s[i];
        }
    }
    if (a == b) {
        return true;
    }
    else {
        return false;
    }
}

void solve() {
    string s;
    cin >> s;
    int maxi = 1;
    for (int i = 0; i < s.length() - 1; i++) {
        for (int j = i + 1; j < s.length(); j++) {
            string tmp = "";
            for (int k = i; k <= j; k++) {
                tmp = tmp + s[k];
            }
            if (isKaibun(tmp)) {
                if (tmp.length() != s.length()) {
                    maxi = max(maxi,(int)tmp.length());
                }
            }
        }
    }
    P(maxi);
}


int main() {
    solve();
    return 0;
}
