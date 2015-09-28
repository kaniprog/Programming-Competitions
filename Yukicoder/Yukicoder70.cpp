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
    int N,sum = 0;
    cin >> N;
    for(int k = 0;k < N;k++){
        string s,a="",b="";
        cin >> s;
        int h1,h2,m1,m2,i = 0;
        while(s[i] != ':'){
            a = a+s[i];
            i++;
        }
        h1 = sttoi(a);
        i++;
        while(i != s.length()){
            b = b+s[i];
            i++;
        }
        m1 = sttoi(b);
        cin >> s;
        i=0;
        a = "";b = "";
        while(s[i] != ':'){
            a = a+s[i];
            i++;
        }
        h2 = sttoi(a);
        i++;
        while(i != s.length()){
            b = b+s[i];
            i++;
        }
        m2 = sttoi(b);
        if(h2*60+m2 < h1*60+m1){
            h2+=24;
        }
        sum += h2*60+m2 -h1*60-m1;
    }
    P(sum);
}
