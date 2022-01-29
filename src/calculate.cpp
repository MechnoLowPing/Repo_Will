#include<iostream>
#include"calculate.hpp"

namespace calculate{
    void addition()
        {
            int x,y;
            std::cout<<"Es werden hier 2 Zahlen addiert!"<<std::endl;
            std::cout<<"Geben Sie die erste Zahle ein: "<<std::endl;
            std::cin>>x;
            std::cout<<"Geben Sie die zweite Zahle ein: "<<std::endl;
            std::cin>>y;
            std::cout<<"Das Ergebnis ist:  "<< x+y <<std::endl;
        }
    void multiply()
        {
            int x,y;
            std::cout<<"Es werden hier 2 Zahlen multipliziert!"<<std::endl;
            std::cout<<"Geben Sie die erste Zahle ein: "<<std::endl;
            std::cin>>x;
            std::cout<<"Geben Sie die zweite Zahle ein: "<<std::endl;
            std::cin>>y;
            std::cout<<"Das Ergebnis ist:  "<< x*y <<std::endl;
        }
}