#include<iostream>
#include"calculate.hpp"

namespace mainloop{
    void mainfunction()
        {
            for(;;)
                {
                    int option;

                    std::cout<<"1: Add 0: Quit!"<<std::endl;
                    std::cin>>option;

                    switch(option){

                        default: std::cout<<"Fehler!!! Zahl zwischen 0 und 1 benötigt!"<<std::endl; break;
                        case 1: calculate::addition(); break;
                        case 0: return;

                    }
                }

        }
}