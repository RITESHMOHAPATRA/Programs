/*
    Replace space with %20 like in the browser which will not allow empty spaces.
    Given the string and the actual length of the string.
    Ignore all the whitespace after the original string ends.

*/

#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string str = "Mr a b         ";
    int act_len = 6;
    std::cout << str.size() << std::endl;

    std::string::iterator end_pos = std::remove(str.begin() + act_len, str.end(), ' ');
    str.erase(end_pos, str.end());


    std::cout << str.size() << std::endl;
    for(int i = 0; i < str.size();i++){
        if(str[i] == ' '){
            str.replace(i,1,"%20");
        }
    }
    std::cout << str << std::endl;
}
