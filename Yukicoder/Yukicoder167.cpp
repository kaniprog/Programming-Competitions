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

void solve() {
    string n, m;
    cin >> n >> m;
    int N = n[n.length() - 1] - '0';
    if (m == "0"){
        P(1);
        return;
    }
    if (N == 0 || N == 1 || N == 5 || N == 6){
        P(N);
    }
    else if (N == 4 || N == 9){
        if ((m[m.length() - 1] - '0') % 2 == 0){
            P(N*N % 10);
        }
        else{
            P(N);
        }
    }
    else{
        int last2;
        if (m.length() >= 2){
            last2 = (((m[m.length() - 2] - '0') * 10) + (m[m.length() - 1] - '0')) % 4;
        }
        else{
            last2 = (m[m.length() - 1] - '0') % 4;
        }
        if (last2 == 0){
            P(N*N*N*N % 10);
        }
        else if (last2 == 1){
            P(N);
        }
        else if (last2 == 2){
            P(N*N % 10);
        }
        else{
            P(N*N*N % 10);
        }
    }
}

int main() {
    solve();
    return 0;
}
