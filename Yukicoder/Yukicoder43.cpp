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
int n;
char s[100][100];
int mini = 1000;
void calc(int a,int b){
  if(a == n){
    int count[n];
    for(int i = 0;i < n;i++){count[i] = 0;}
    for(int i = 0;i < n;i++){
      for(int j = 0;j < n;j++){
        if(s[i][j] == 'o'){
          count[i]++;
        }
      }
    }
    int junni = 1;
    int before = 918723;
    for(int i = 1;i < n;i++){
      if(count[0] < count[i]){
        if(before != count[i]){
          before = count[i];
          junni++;
        }
      }
    }
    mini = min(mini,junni);
    return;
  }

  if(b == n){
    calc(a+1,0);
    return;
  }
  if(s[a][b] != '-'){
    calc(a,b+1);
    return;
  }
  s[a][b] = 'o';
  s[b][a] = 'x'; 
  calc(a,b+1);
  s[b][a] = 'o';
  s[a][b] = 'x'; 
  calc(a,b+1); 
  s[a][b] = s[b][a] = '-'; 
}

int main(){
   cin >> n;
   for(int i = 0;i < n;i++){
    string tmp;
    cin >> tmp;
    for(int j = 0;j < n;j++){
      s[i][j] = tmp[j];
    }
   }
   calc(0,0);
   P(mini);
}
