#include <iostream>
#include <cstdlib>
#include <list>
#include <map>
using namespace std;

void AddElement(list<int>& my_list,int data) {
  my_list.push_back(data);
}

void Traverse(list<int>& my_list){
  // Traverse the list
  cout << "\nList Elements:" << endl;
  for(auto i:my_list){
    cout <<  i << "\t";
  }
}

void RemoveDuplicates(list<int>& my_list){
  map<int,int> my_map;
  // Detect duplicate and remove the duplicate
  for(list<int>::iterator it = my_list.begin();it != my_list.end();it++){
    if(!my_map.empty() && my_map.count(*it) > 0){
      it = my_list.erase(it);
    } else {
       my_map[*it] = 1;
    }
  }
}
int main() {
  list<int> my_list;

  AddElement(my_list,5);
  AddElement(my_list,7);
  AddElement(my_list,5);
  AddElement(my_list,9);

  Traverse(my_list);
  RemoveDuplicates(my_list);
  Traverse(my_list);
  return 0;
}
