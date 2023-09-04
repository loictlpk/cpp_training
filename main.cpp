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
    int i{0}, nba{}, nbb{}, nbc{};
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
    
    std::cout << "Type number a: " ; 
    std::cin >> nba ; 
    std::cout << "Type number b: " ; 
    std::cin >> nbb ;
    std::cout << "" << std::endl;

    std::cout << "result : " << sum(nba, nbb) << std::endl;
        
    std::cout << "Type number c: " ; 
    std::cin >> nbc ;
    std::cout << "result : " << sum(nba, nbb, nbc) << std::endl;

    return 0;
}