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
    int n;
    cin >> n;
    bool D[13],C[13],H[13],S[13];
    for(int i = 0;i < 13;i++){
        D[i] = false;
        C[i] = false;
        H[i] = false;
        S[i] = false;
    }
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        switch(s[0]){
        case 'D':switch(s[1]){
                    case 'A':D[0] = true;break;
                    case 'T':D[9] = true;break;
                    case 'J':D[10] = true;break;
                    case 'Q':D[11] = true;break;
                    case 'K':D[12] = true;break;
                    default:D[(s[1] - '0')-1] = true;break;
                 }
                    break;
            case 'C':switch(s[1]){
                    case 'A':C[0] = true;break;
                    case 'T':C[9] = true;break;
                    case 'J':C[10] = true;break;
                    case 'Q':C[11] = true;break;
                    case 'K':C[12] = true;break;
                    default:C[(s[1] - '0')-1] = true;break;
                 }
                    break;
            case 'H':switch(s[1]){
                    case 'A':H[0] = true;break;
                    case 'T':H[9] = true;break;
                    case 'J':H[10] = true;break;
                    case 'Q':H[11] = true;break;
                    case 'K':H[12] = true;break;
                    default:H[(s[1] - '0')-1] = true;break;
                 }
                    break;
            case 'S':switch(s[1]){
                    case 'A':S[0] = true;break;
                    case 'T':S[9] = true;break;
                    case 'J':S[10] = true;break;
                    case 'Q':S[11] = true;break;
                    case 'K':S[12] = true;break;
                    default:S[(s[1] - '0')-1] = true;break;
                 }
                    break;
        }
    }
    int count = 0;
    for(int i = 0;i < 13;i++){
        if(D[i]){
            if(i==0){
                cout << "DA";
                count++;
                if(count != n)cout << " ";
            }else if(i==9){
                cout << "DT";
                count++;
                if(count != n)cout << " ";
            }else if(i==10){
                cout << "DJ";
                count++;
                if(count != n)cout << " ";
            }else if(i==11){
                cout << "DQ";
                count++;
                if(count != n)cout << " ";
            }else if(i==12){
                cout << "DK";
                count++;
                if(count != n)cout << " ";
            }else{
                cout << "D" << i+1;
                count++;
                if(count != n)cout << " ";
            }
        }
    }	
    for(int i = 0;i < 13;i++){
        if(C[i]){
            if(i==0){
                cout << "CA";
                count++;
                if(count != n)cout << " ";
            }else if(i==9){
                cout << "CT";
                count++;
                if(count != n)cout << " ";
            }else if(i==10){
                cout << "CJ";
                count++;
                if(count != n)cout << " ";
            }else if(i==11){
                cout << "CQ";
                count++;
                if(count != n)cout << " ";
            }else if(i==12){
                cout << "CK";
                count++;
                if(count != n)cout << " ";
            }else{
                cout << "C" << i+1;
                count++;
                if(count != n)cout << " ";
            }
        }
    }	
    for(int i = 0;i < 13;i++){
        if(H[i]){
            if(i==0){
                cout << "HA";
                count++;
                if(count != n)cout << " ";
            }else if(i==9){
                cout << "HT";
                count++;
                if(count != n)cout << " ";
            }else if(i==10){
                cout << "HJ";
                count++;
                if(count != n)cout << " ";
            }else if(i==11){
                cout << "HQ";
                count++;
                if(count != n)cout << " ";
            }else if(i==12){
                cout << "HK";
                count++;
                if(count != n)cout << " ";
            }else{
                cout << "H" << i+1;
                count++;
                if(count != n)cout << " ";
            }
        }
    }	
    for(int i = 0;i < 13;i++){
        if(S[i]){
            if(i==0){
                cout << "SA";
                count++;
                if(count != n)cout << " ";
            }else if(i==9){
                cout << "ST";
                count++;
                if(count != n)cout << " ";
            }else if(i==10){
                cout << "SJ";
                count++;
                if(count != n)cout << " ";
            }else if(i==11){
                cout << "SQ";
                count++;
                if(count != n)cout << " ";
            }else if(i==12){
                cout << "SK";
                count++;
                if(count != n)cout << " ";
            }else{
                cout << "S" << i+1;
                count++;
                if(count != n)cout << " ";
            }
        }
    }	
    P("");
}
