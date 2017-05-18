#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <set>
using namespace std;

int main() {
  int n;
  cout << "\n Enter the number of strings:";
  cin >> n;
  vector<char> vec;

  int pos = 0;
  for(int i=0;i<n;i++){
    set<char> ste;
    string s;
    cin >> s;
    for(int j=0;j<s.length();j++){
        ste.insert(s[j]);
    }

    int t = ste.size();
    vec.insert(vec.begin() + pos,ste.begin(),ste.end());
    pos += t;
  }
  
  int counter = 0;
  int j = 1;
  for(int i=0;i<vec.size();i = i+j){
    j = 1;
    while(vec[i] == vec[i+j]){
      j++;
    }
    if(n == j)
      counter++;
  }

  cout << "\n Common elements:" << counter << endl;
  return 0;
}
