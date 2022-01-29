#ifndef MAINLOOP_HPP
#define MAINLOOP_HPP

#include<iostream>
#include"calculate.hpp"

namespace mainloop{

    void mainfunction(){
        for(;;){
                int option;

    void mainfunction()
        {
            for(;;)
                {
                  int option;
              
                  std::cout<<"0: Exit\n1: Addieren\n2: Multiplizieren"<<std::endl;
                  std::cin>>option;

                  switch(option){

                      default: std::cout<<"Fehler!!!"<<std::endl;     break;
                      case 1: calculate::addition();                  break;
                      case 2: calculate::multiply();                  break;
                      case 0: return;

            }
        }
    }
}
#endif