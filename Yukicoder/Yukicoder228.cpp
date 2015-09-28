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

int main(){
  int nums[16];
  int puzzle[4][4];
  int answer[4][4] = {{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,0}};

  for(int i = 0;i < 4;i++){
    for(int j = 0;j < 4;j++){
      cin >> puzzle[i][j];
     }
  }
  int p = 0,q = 0;
  for(int i = 0;i < 16;i++){
    nums[i] = puzzle[p][q];
    if(q == 3){
      p++;
      q = 0;
    }else{
      q++;
    }
  }
  int count = 0;
  for(int e= 0;e < 16;e++){
    for(int f = 0;f < 16;f++){
        if(e < f && nums[e] > nums[f] && nums[e] != 0 && nums[f] != 0)count++;
    }
  }
  for(int i = 0;i < 4;i++){
    for(int j = 0;j < 4;j++){
      int t = puzzle[i][j];
      if(t == 0){
        count += 3-i;
      }else{
        int x,y;
        for(int k = 0;k < 4;k++){
          for(int l = 0;l < 4;l++){
            if(answer[k][l] == t){
              x = l;
              y = k;
              break;
            }
          }
        }
        int dis = abs(i-y) + abs(j-x);
        if(dis >= 2){
          P("No");
          return 0;
        }
      }
    }
  }
  if(count % 2 == 0){P("Yes");}else P("No");
  return 0;
}
