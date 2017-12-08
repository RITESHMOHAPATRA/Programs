/* Write a program to check whether a string is permuation of another string or not */
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;

int partition(string &s,int lb,int ub){

  int j = lb - 1;
  char pivot = s[ub];
  for(int i = lb; i < ub ; i++){
    if(s[i] < pivot){
      j++;
      swap(s[i],s[j]);
    }
  }
  j++;
  swap(s[j],s[ub]);
  return j;
}

void quicksort(string &s,int lb,int ub){
  if(lb < ub){
    int p = partition(s,lb,ub);
    quicksort(s,lb,p-1);
    quicksort(s,p+1,ub);
  }
}

int main() {

  cout << "\nEnter the base string:";
  string base;
  getline(cin,base);

  cout << "\nEnter the permuted string:";
  string perm;
  getline(cin,perm);

  if(base.size() != perm.size()){
    cout << "Not a premutation of base string." << endl;
  }
  else{
    /*
      Using the sort function of c++ we can do it easily without manually writing quicksort function
      for sorting a string.


      sort(base.begin(),base.end())
      sort(perm.begin(),perm.end())

      Then check whether these two are equal.

    */

    quicksort(base,0,base.size() - 1);
    quicksort(perm,0,perm.size() - 1);

    if(base == perm){
      cout << "\nPermuted string." << endl;
    }
    else
      cout << "\nNot a permuted string." << endl;
    }
  return 0;
}
