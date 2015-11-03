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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v[101][101];
    bool visited[1001][101];
    rep(i,1001){
        rep(j, 101){
            visited[i][j] = false;
        }
    }
    int way[1000];
    rep(i, m){
        int a, b, c;
        cin >> a >> b >> c;
        v[a][b].push_back(c);
        v[b][a].push_back(c);
    }
    int d;
    cin >> d;
    rep(x, 101)rep(y, 101){
        if (!v[x][y].empty()){
            for (int z = 0; z < v[x][y].size();z++){
                if (v[x][y][z] == d){
                    visited[1][y] = true;
                }
            }
        }
    }
    for (int i = 2; i <= k; i++){
        cin >> d;
        rep(j, 101){
            if (visited[i - 1][j]){
                rep(l, 101){
                    if (!v[j][l].empty()){
                        for (int z = 0; z < v[j][l].size(); z++){
                            if (v[j][l][z] == d){
                                visited[i][l] = true;
                            }
                        }
                    }
                }
            }
        }
    }
    int count = 0;
    queue<int> q;
    rep(i, 101){
        if (visited[k][i]){
            count++;
            q.push(i);
        }
    }
    P(count);
    while (!q.empty()){
        cout << q.front();
        q.pop();
        if (!q.empty()){
            cout << " ";
        }
    }
    P("");
}

int main() {
    solve();
    return 0;
}
