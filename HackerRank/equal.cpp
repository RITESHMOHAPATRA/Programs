#include <iostream>
#include <vector>
using namespace std;

int minEqualDistribution(vector<int> &vec,int minm){
    int min_cost = 100000000;

    for (int i = 0; i < 3;i++){
        int total_cost = 0;

        for(int j = 0; j < vec.size();j++){
          int diff = vec[j] - (minm - i);
          int no_of_five = diff / 5;
          int no_of_two = (diff % 5)/2;
          int no_of_ones = (diff % 5) % 2;

          total_cost += no_of_five + no_of_two + no_of_ones;

        }
        min_cost = min(total_cost,min_cost);
    }

    return min_cost;
}

int main() {
  int testcases;
  cin >> testcases;
  while(testcases--){
    int n;
    cin >> n;
    vector<int> vec;
    int minm = 10000000;
    int x;
    for (int i = 0; i < n;i++){
      cin >> x;
      vec.push_back(x);
      if(x < minm){
        minm = x;
      }
    }
    cout << minEqualDistribution(vec,minm) << endl;
  }
  return 0;
}
