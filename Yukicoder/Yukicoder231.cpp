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
#define B 2
#define G 1
#define W 0
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define MAX 100000000
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

int main(){
  int n;
  cin >> n;
  int left = 3000000;
  int g[n],d[n],s[n];
  for(int i = 0;i < n;i++){
    cin >> g[i] >> d[i];
    s[i] = g[i] - 30000*d[i];
  }
  int ma = -1;
  int num;
  for(int i = 0;i < n;i++){
    if(s[i] > ma){
      ma = s[i];
      num = i;
    }
  }
  if(ma*6 >= left){
    P("YES");
    for(int i = 0;i < 6;i++){
      P(num + 1);
    }
  }else{
    P("NO");
  }
}
