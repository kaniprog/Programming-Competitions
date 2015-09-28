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

bool isPrime(ll n){
  if(n == 2) return true;
  if(n%2 == 0)return false;
  for(ll i = 3;i*i <= n;i+=2){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  ll n;
  cin >> n;
  int count = 0;
  for(ll i = 2;i*i <= n;i++){
    while(n%i == 0){
      n /= i;
      count++;
    }
  }
  if(n>1)count++;

  if(count>=3){
    P("YES");
  }else{
    P("NO");
  }
}
