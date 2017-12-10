#include <iostream>
#include <string>
using namespace std;

int absolute(int x,int y){
  return (x > y)?(x - y):(y - x);
}

bool checkReplace(string s,string t){
    bool isDifferent = false;
    for(int i = 0; i < s.length();i++){
      if(s[i] != t[i]){
        if(isDifferent)
          return false;
        isDifferent = true;
      }
    }
    return true;
}

bool checkInsert(string s1,string s2){
  int index1 = 0,index2 = 0;
  while(index1 < s1.length() && index2 < s2.length()){
    if(s1[index1] != s2[index2]){
      if(index1 != index2)
        return false;
      index2++;
    }
    else{
      index1++;
      index2++;
    }
  }
  return true;
}

bool oneEditAway(string s,string t){
    if(s == t)
      return true;
    else if(absolute(s.length(),t.length()) > 1)
      return false;
    else{
      if(s.length() == t.length())
        return checkReplace(s,t);
      else if(s.length() < t.length())
        return checkInsert(s,t);
      else
        return checkInsert(t,s);
    }
}

int main(){
  cout << "\nEnter 2 strings:";
  string s,t;
  cin >> s;
  cin >> t;

  (oneEditAway(s,t) == 1)?cout << "True" : cout << "False";
  return 0;
}
