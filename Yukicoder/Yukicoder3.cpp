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
#define MaX 100000000
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

int n;
bool visited[10001] = {};

void dfs(){
  queue< pair<int,int> > q;
  q.push(make_pair(1,1));
  while(!q.empty()){
    int pos = q.front().first;
    int count = q.front().second;
    q.pop();
    if(pos == n){
      P(count);
      return;
    }

    int a = pos - __builtin_popcount(pos);
    if(a > 0 && !visited[a]){
      visited[a] = 1;
      q.push(make_pair(a,count+1));
    }
    int b = pos + __builtin_popcount(pos);
    if(b < n+1 && !visited[b]){
      visited[b] = 1;
      q.push(make_pair(b,count+1));
    }
  }
  P("-1");
  return;
}

int main(){
  cin >> n;
  dfs();
}
