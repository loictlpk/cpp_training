#include <iostream>

int sum(int a, int b){
    return a + b;
}
int sum(int a, int b, int c){
    return a + b + c;
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
    
    std::cout << sum(2, 3) << std::endl;
    std::cout << sum(2, 3, 5) << std::endl; 
    
    return 0;
}