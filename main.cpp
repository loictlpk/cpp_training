#include <iostream>

int sum(int a, int b){
    std::cout << a + b << std::endl;
    return 0;
}
int sum(int a, int b, int c){
    std::cout << a + b + c << std::endl;
    return 0;
}

int main()
{
    int i{0};
    bool security{true};
    std::string msg{};

    do{

        if(!security){
            security = true ;  
            msg = "BACK" ;
            ++i ;                      
        }
        else if(security){
           security = false ; 
           msg = "GO";   
           ++i ;
        }
                 
        std::cout << msg << std::endl;
        
    }while(i<=1);
    
    sum(2, 3);
    sum(2, 3, 5);

    return 0;
}