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
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j,k)
#define P(p) cout<<(p)<<endl;
#define EXISt(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define MAX 100000000
#define MAX_N 1000
using namespace std; 
typedef long long ll;
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};

int sttoi(std::string str){int ret;std::stringstream ss;ss << str;ss >> ret;return ret;}
    
int main(){
    int n,L[7];
    cin >> n;
    for(int i = 0;i < 7;i++){
        L[i] = 0;
    }
    for(int i = 0;i < n;i++){
        int s;
        cin >> s;
        L[s]++;
    }
    int max = 0;
    int ans = 0;
    for(int i = 0;i < 7;i++){
        if(L[i] >= max){
            max = L[i];
            ans = i;
        }
    }
    P(ans);
}
