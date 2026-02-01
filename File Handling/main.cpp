#include <iostream>
#include <fstream>

int main() {

    std::fstream myfile;

    myfile.open("saldina.txt", std::ios::out); // write
    if(myfile.is_open()){
        myfile << "hello\n";
        myfile << "This is second line.\n";
        myfile.close();
    }

    myfile.open("saldina.txt", std::ios::app); // append
    if(myfile.is_open()){
        myfile << "This is third line.\n";
        myfile.close();
    }

    myfile.open("saldina.txt", std::ios::in); // read
    if(myfile.is_open()) {
        std::string line;
        while(getline(myfile, line)) {
            std::cout << line << std::endl; 
        }
        myfile.close();
    }
    return 0;
}
