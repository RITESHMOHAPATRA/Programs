#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

long long sum(int n,int k,vector<long long>& vec){
  long long res = 0;
  for(int i = (n-k);i < n;i++){
    res =((res % MOD) + (vec[i] % MOD)) % MOD;
  }
  return res;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<long long> vec;
    vec.push_back(0);
    int minm = min(n,k);
    for(int i = 0; i < minm;i++){
      vec.push_back(1);
    }

    for(int i = minm + 1; i <= n;i++){
      long long res = sum(i,k,vec);
      vec.push_back(res);
    }
    cout << vec[n] << endl;
    return 0;
}

/* One Test Case Got TLE */
