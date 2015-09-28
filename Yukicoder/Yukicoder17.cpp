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

int table[10001];

int main(){
   int n,m;
   cin >> n;
   int place[50];
   int field[50][50];
   for(int i = 0;i < 50;i++){
      place[i] = MAX;
   }
   for(int i = 0;i < 50;i++){
    for(int j = 0;j < 50;j++){
      field[i][j] = MAX;
    }
   }
   for(int i = 0;i < n;i++){
      field[i][i] = 0;
      cin >> place[i];
   }
   cin >> m;  
   for(int i = 0;i < m;i++){
    int a,b,c;
    cin >> a >> b >> c;
    field[a][b] = c;
    field[b][a] = c;
   }
   for(int k = 0;k < n;k++){
     for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
        if(field[i][k] != MAX && field[k][j] != MAX){
          field[i][j] = min(field[i][j],field[i][k] + field[k][j]);
        }
       }
     }
   }
   int minc = MAX;
   for(int i = 1;i < n-1;i++){
    for(int j = 1;j < n-1;j++){
      if(field[0][i] != MAX && field[i][j] != MAX && field[j][n-1] != MAX && i != j){
        minc = min(minc,field[0][i] + field[i][j] + field[j][n-1] + place[i] + place[j]);
      }
    }
   }
   P(minc);
}
