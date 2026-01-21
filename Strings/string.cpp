#include <iostream>

void load_blanks(std::string);


int main(){

    std::string w[3] = {"taylor", "Saoirse", "Jung"};
    
    load_blanks(w[0]);
    load_blanks(w[1]);
    load_blanks(w[2]);

    return 0;
}

void load_blanks(std::string w) {
    char l[w.length()];
    for(int i = 0; i < w.length(); i++) {
        l[i] = w[i];
        std::cout << "_ ";
    }
    std::cout << std::endl;
    std::cout << w.length() << std::endl;
    for(int i = 0; i < w.length(); i++) {
        std::cout << l[i] << " ";
    }
    std::cout << std::endl;
}