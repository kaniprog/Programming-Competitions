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
  int n,d;
  cin >> n >> d;
  string s;
  cin >> s;

  int dim = 0;
  int count = 0;
  int keisu = 0;
  ll dimen[d+1];
  for(int j = 0;j < d+1;j++){
    dimen[j] = 0;
  }
  for(int i = 0;i < n;i++){
    if(s[i] == 'x'){
      count++;
    }else if(s[i] == '+'){
      if(count != 0){
        if(keisu == 0)keisu = 1;
        int tem = count - dim;
        if(tem < 0)tem = 0;
        for(int j = 0;j < dim;j++){
          if(keisu == 0)break;
          keisu *= count;
          count--;
        }
        dimen[tem] += keisu;
      }else{
        if(dim == 0){
          dimen[0] += keisu;
        }
      }
      count = 0;
      keisu = 0;
    }else if(s[i] == 'd'){
      dim++;
      i++;
    }else if(s[i] == '}'){
      if(count != 0){
        if(keisu == 0)keisu = 1;
        int tem = count - dim;
        if(tem < 0)tem = 0;
        for(int j = 0;j < dim;j++){
          if(keisu == 0)break;
          keisu *= count;
          count--;
        }
        dimen[tem] += keisu;
      }else{
        if(dim == 0){
          dimen[0] += keisu;
        }
      }
      count = 0;
      keisu = 0;
      dim--;
    }else if('1' <= s[i] && s[i] <= '9'){
      keisu = s[i] - '0';
    }  
    if(i == n-1){
      if(count != 0){
        if(keisu == 0)keisu = 1;
        int tem = count - dim;
        if(tem < 0)tem = 0;
        for(int j = 0;j < dim;j++){
          if(keisu == 0)break;
          keisu *= count;
          count--;
        }
        dimen[tem] += keisu;
      }else{
        if(dim == 0){
          dimen[0] += keisu;
        }
      }
    }  
  }
  string answer = "";
  for(int j = 0;j < d+1;j++){
    cout << dimen[j];
    if(j != d){
      cout << " ";
    }
  }
  cout << "" << endl;
}
