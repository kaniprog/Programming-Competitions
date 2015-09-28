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
    int nw,nb;
    cin >> nw;
    priority_queue<int> quenw1,quenb1,quenw2,quenb2;
    rep(i,nw){
        int t;
        cin >> t;
        quenw1.push(t);
        quenw2.push(t);
    }
    cin >> nb;
    rep(i,nb){
        int t;
        cin >> t;
        quenb1.push(t);
        quenb2.push(t);
    }
    int count1 = 0;
    int high1 = 100000;
    bool flag = true;
    // from white top
    while(true){
        if((quenw1.empty() && flag == true) ||  (quenb1.empty() && flag == false)){
            break;
        }
        if(flag){
            if(!quenw1.empty()){
                int tnw = quenw1.top();
                if(tnw < high1){
                    high1 = tnw;
                    count1++;
                    flag = false;
                    quenw1.pop();
                }else{
                    quenw1.pop();
                }
            }
        }else{
            if(!quenb1.empty()){
                int tnb = quenb1.top();
                if(tnb < high1){
                    high1 = tnb;
                    count1++;
                    flag = true;
                    quenb1.pop();
                }else{
                    quenb1.pop();
                }
            }
        }
    }
    int count2 = 0;
    int high2 = 100000;
    flag = false;
    //from black top
    while(true){
        if((quenw2.empty() && flag == true) ||  (quenb2.empty() && flag == false)){
            break;
        }
        if(flag){
            if(!quenw2.empty()){
                int tnw = quenw2.top();
                if(tnw < high2){
                    high2 = tnw;
                    count2++;
                    flag = false;
                    quenw2.pop();
                }else{
                    quenw2.pop();
                }
            }
        }else{
            if(!quenb2.empty()){
                int tnb = quenb2.top();
                if(tnb < high2){
                    high2 = tnb;
                    count2++;
                    flag = true;
                    quenb2.pop();
                }else{
                    quenb2.pop();
                }
            }
        }
    }
    P(max(count1,count2));
}
