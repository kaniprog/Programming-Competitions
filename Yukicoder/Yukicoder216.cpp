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
  int ppl[101];
  for(int i = 0;i < 101;i++){
    ppl[i] = 0;
  }
  int p[n],h[n];
  for(int i = 0;i < n;i++){
    cin >> h[i];
  }
  for(int i = 0;i < n;i++){
    cin >> p[i];
  }
  for(int i = 0;i < n;i++){
    ppl[p[i]] += h[i];
  }
  int max = -1;
  int s;
  for(int i = 0;i < 101;i++){
    if(ppl[i] > max){
      max = ppl[i];
      s = i;
    }
  }
  if(s == 0){
    P("YES");
  }else{
    P("NO");
  }
}
