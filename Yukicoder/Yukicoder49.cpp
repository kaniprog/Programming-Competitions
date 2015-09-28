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

list<pair<int,int> > lis;
int main(){
  string s;
  cin >> s;
  bool multi = false,plus = false;
  int ans = 0;
  for(int i = 0;i < s.length();i++){
    if('0' <= s[i] && s[i] <= '9'){
      string num = "";
      while('0' <= s[i] && s[i] <= '9'){
        num = num + s[i];
        i++;
      }
      i--;
      if(multi){
        ans *= sttoi(num);
        multi = false;
      }else if(plus){
        ans += sttoi(num);
        plus = false;
      }else{
        ans = sttoi(num);
      }
    }else if(s[i] == '*'){
      plus = true;
    }else if(s[i] == '+'){
      multi = true;
    }
  }
  P(ans);
}
