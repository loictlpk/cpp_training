#include <iostream>

struct points{
    int loic = 0 ; 
    int eric = 0 ;
    int hasan = 0 ;
} pt;

int display(){
    
    for (int* ptr = &pt.loic; ptr <= &pt.hasan; ptr++) {
        std::cout << "Valeur : " << *ptr << std::endl;
    }
    return 0;
}

int changeValue(){
    pt.loic = 0;
    pt.eric = 0;
    pt.hasan = 0;
    return 0;
};

int changeValue(int a){
    pt.loic = a;
    return 0;
};

int changeValue(int a, int b){
    pt.loic = a;
    pt.eric = b;
    return 0;
};

int changeValue(int a, int b, int c){
    pt.loic = a;
    pt.eric = b;
    pt.hasan = c; 
    return 0;
};

int main(){
    display();
    changeValue(1, 4, 6);
    display();
    changeValue();
    display();
    return 0;
}