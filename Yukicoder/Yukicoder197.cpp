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

int main(){
  string s,t;
  int n,scnt= 0,tcnt = 0;
  cin >> s >> n >> t;
  for(int i = 0;i < 3;i++){
    if(s[i]=='o')scnt++;
    if(t[i]=='o')tcnt++;
  }
  if(scnt != tcnt){
    P("SUCCESS");
    return 0;
  }
  if(n == 0){
      if(s == t){
          P("FAILURE");
      }else{
          P("SUCCESS");
      }
  }else if(n==1){
      	swap(s[0],s[1]);
        if(s==t){
             P("FAILURE");
             return 0;
        }
        swap(s[0],s[1]);
        swap(s[1],s[2]);
        if(s==t){
             P("FAILURE");
             return 0;
        }
        swap(s[1],s[2]);
        P("SUCCESS");
  }else if(n==2){
      if(s==t){
        P("FAILURE");
      }else{
        swap(s[0],s[1]);
        swap(s[1],s[2]);
        if(s==t){
            P("FAILURE");
        }else{
            P("SUCCESS");
        }
      }
  }else{
    P("FAILURE");
  }
}
