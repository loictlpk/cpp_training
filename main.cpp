#include <iostream>

int main()
{
    bool security{true};
    int test{0};
    std::string msg{};

    while(test < 2){

        if(!security){
            security = true ;  
            msg = "BACK" ;
            ++test ;                      
        }
        else if(security){
           security = false ; 
           msg = "GO";   
           ++test ;
        }
               
        
        std::cout << msg << std::endl;
        
    }
   
    return 0;
}