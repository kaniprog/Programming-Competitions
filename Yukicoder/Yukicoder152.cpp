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

int isPrime(int a, int b){
    if (b == 0)return a;
    return isPrime(b,a%b);
}

void solve() {
    int L;
    cin >> L;
    int l = L / 4;
    set<double> deg;
    int count = 0;
    for (int i = 0; i*i < l; i++){
        for (int j = 1; j < i; j++){
            if (isPrime(i, j) != 1)continue;
            if ((i - j) % 2 == 0)continue;
            int a = i*i-j*j;int b = 2*i*j;int c = i*i+j*j;
            if (a + b + c <= l){
                deg.insert((double)a / (double)c);
            }
        }
    }
    count = deg.size();
    count %= 1000003;
    P(count);
}

int main() {
    solve();
    return 0;
}
