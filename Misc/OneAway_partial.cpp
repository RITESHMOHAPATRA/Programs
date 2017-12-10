#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int absolute(int x,int y){
  return (x > y)?(x-y):(y-x);
}

bool checkOneEdit(string s,string t){

  if(s == t)
    return true;
  if(absolute(s.length(),t.length()) > 1)
    return false;

  int arr[256] = {0};

  for(int i = 0; i < s.length();i++){
    arr[s[i] - 'a']++;
  }
  for(int i = 0; i < t.length();i++)
    arr[t[i] - 'a']--;

  int count_one = 0,count_minus_one = 0;
  for(auto i:arr){
    if(i > 1 || i < -1)
      return false;
    else{
      if(i == 1)
        count_one++;
      else if(i == -1)
        count_minus_one++;
    }
  }

  if(count_one > 1 || count_minus_one > 1)
    return false;
  else
    return true;
}

int main(){
  cout << "\nEnter two strings:";
  string s,t;
  cin >> s ;
  cin >> t;
  (checkOneEdit(s,t) == 1)?cout << "True": cout << "False" ;
  return 0;
}
