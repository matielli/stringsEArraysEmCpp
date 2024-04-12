#include <iostream>
#include <string>

int main(){

    std::string str = "Ola, Mundo!";
    int pos = str.find("Ola");
    if (pos != std::string::npos) {
        printf("Encontrado na posiçao: %d\n", pos);
    } else {
        printf("Nao encontrado. \n");
    }
    return 0;
}