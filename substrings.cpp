#include <iostream>
#include <string>

int main(){
    std::string str = "Ola, mundo!";
    std::string substr = str.substr(7, 5);
    printf("Substring: %s\n", substr.c_str());
    return 0;

}
