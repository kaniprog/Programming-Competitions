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
#define MAX_N 1000
using namespace std; 
typedef long long ll;
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};

int sttoi(std::string str){int ret;std::stringstream ss;ss << str;ss >> ret;return ret;}
    
int main(){
    double X,Y,L;
    cin >> X >> Y >> L;
    int step = 0;
    if(Y > 0){
        X = abs(X);Y = abs(Y);
        if(X!=0)step++;
        step += ceil(X/L) + ceil(Y/L);
    }else if(Y < 0){
        X = abs(X);Y = abs(Y);
        step+=2;
        step += ceil(X/L) + ceil(Y/L);
    }else{
        X = abs(X);
        if(X != 0)step++;
        step+=ceil(X/L);
    }
    P(step);
}
