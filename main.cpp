#include <iostream>

int main()
{
    bool security{true};
    int i{0};
    std::string msg{};

    while(i < 2){

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
        
    }
   
    return 0;
}