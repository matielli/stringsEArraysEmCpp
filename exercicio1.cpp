#include <iostream>
#include <string>

int main(){
    std::string str;
    printf("Digite uma palavra\n");
   getline(std::cin, str);
    printf("Tamanho de string: %zu\n", str.size());

    return 0;

}




