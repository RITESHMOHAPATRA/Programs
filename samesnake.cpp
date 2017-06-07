#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int t;
  //cout << "\n Enter the number of test cases:";
  cin >> t;
  while(t--) {
    bool status = false;
    int x11,y11,x12,y12,x21,y21,x22,y22;
    //cout << "\n Enter the end points of both the snakes:\n";
    cin >> x11 >> y11 >> x12 >> y12 >> x21 >> y21 >> x22 >> y22;

    //checking all the y coordinates are same
    if((y11 == y12) && (y11 == y21) && (y11 == y22)){
      //check for overlapping x-coordinates
      if((x21 <= x12 && x21 >= x11) || (x21 <= x11 && x21 >= x12) || (x22 <= x12 && x22 >= x11) || (x22 <= x11 && x22 >= x12) || (x11 <= x22 && x11 >= x21) || (x11 <= x21 && x11 >= x22) || (x12 <= x22 && x12 >= x21) || (x12 <= x21 && x12 >= x22))
          status = true;
    }
    //check if all x coordinates are same
    else if ((x11 == x12) && (x11 == x21) && (x11 == x22)){
      //check for overlapping y-coordinates
      if((y21 <= y12 && y21 >= y11) || (y21 <= y11 && y21 >= y12) || (y22 <= y12 && y22 >= y11) || (y22 <= y11 && y22 >= y12) || (y11 <= y22 && y11 >= y21) || (y11 <= y21 && y11 >= y22) || (y12 <= y22 && y12 >= y21) || (y12 <= y21 && y12 >= y22))
        status = true;
    }
    else {
      if((x11 == x21 and y11 == y21) or (x11 == x22 and y11 == y22) or (x12 == x21 and y12 == y21) or (x12 == x22 and y12 == y22))
        status = true;
    }
    if(status)
      cout << "yes" << endl;
    else
      cout <<  "no" << endl;
  }
  return 0;
}
