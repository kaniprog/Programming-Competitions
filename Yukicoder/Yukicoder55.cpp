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
    int x[3], y[3];
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    for (int i = 0; i < 3; i++){
        cin >> x[i] >> y[i];
    }
    do{
        int vx1,vx2,vy1,vy2;
        vx1 = x[v[2]] - x[v[1]];
        vy1 = y[v[2]] - y[v[1]];
        vx2 = x[v[0]] - x[v[1]];
        vy2 = y[v[0]] - y[v[1]];
        int num = (vx1*vx2) + (vy1*vy2);
        if (num == 0){
            int newx = x[v[2]] + vx2;
            int newy = y[v[2]] + vy2;
            double width, height;
            width = vx1*vx1 + vy1*vy1;
            height = vx2*vx2 + vy2*vy2;
            if (width == height){
                cout << newx << " " << newy << endl;
                return;
            }
        }
    } while (next_permutation(v.begin(), v.end()));
    P(-1);
}

int main() {
    solve();
    return 0;
}
