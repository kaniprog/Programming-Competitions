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
#define P(p) cout<<setprecision(10)<<fixed<<(p)<<endl;
#define EXISt(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define MAX 10000000
#define pb push_back
using namespace std; 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};

int sttoi(std::string str){int ret;std::stringstream ss;ss << str;ss >> ret;return ret;}

int dp[31];
int a,b,c;
int memo(int n){
	return n == 0 ? 0 : n < 0 ? 100000 : dp[n] >= 0 ? dp[n] : dp[n] = 1+min(memo(n-a),min(memo(n-b),memo(n-c)));
}

void solve(){
	int v0,v1,v2,v3;
	int mini;
	cin >> v0 >> v1 >> v2 >> v3;
	mini = v0+v1+v2+v3;
	for(a = 1;a <= 28;a++){
		for(b = a+1;b <= 29;b++){
			for(c = b+1;c <= 30;c++){
				for(int i = 0;i < 31;i++){
					dp[i] = -1;
				}
				mini = min(mini,memo(v0)+memo(v1)+memo(v2)+memo(v3));
			}
		}
	}
	P(mini);
}

int main(){
	solve();
}
