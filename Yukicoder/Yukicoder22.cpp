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
    int n,k;
    cin >> n >> k;
    k--;
    string s;
    cin >> s;
    stack<int> up;
    int de = 0;
    if(s[k] == ')'){
        for(int i = 0;i < s.length();i++){
            if(s[i] == '('){
                up.push(i+1);
            }else{
                if(i == k){
                    P(up.top());
                    break;
                }
                up.pop();
            }
        }
    }else{
        for(int i = 0;i < s.length();i++){
            if(s[i] == '('){
                up.push(i);
            }else{
                if(up.top() == k){
                    P(i+1);
                    break;
                }
                up.pop();
            }
        }
    }
}
