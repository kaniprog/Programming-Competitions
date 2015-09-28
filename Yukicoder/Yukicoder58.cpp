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
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};

int sttoi(std::string str){int ret;std::stringstream ss;ss << str;ss >> ret;return ret;}

int main(){
  int n,k;
  cin >> n >> k;
  int d = n-k;
  double jirouwin = 0;
  double tarouwin = 0;
  for(int i = 0;i < 1000000;i++){
    int jirousum = 0;
    int tarousum = 0;
    for(int j = 0;j < n;j++){
      jirousum += rand()%6 + 1;
    }
    for(int j = 0;j < k;j++){
      tarousum += rand()%3 + 4;
    }
    for(int j = 0;j < d;j++){
      tarousum += rand()%6 + 1;
    }
    if(jirousum > tarousum){
      jirouwin++;
    }else if(jirousum < tarousum){
      tarouwin++;
    }
  }
  P(tarouwin/1000000);
}
