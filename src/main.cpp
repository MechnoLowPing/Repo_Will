#include<iostream>
#include"calculate.hpp"



void mainfunction()
{
    for(;;)
        {
            int option;

            std::cout<<"Geben Sie eine Zahl zwischen 0 und 4 ein!"<<std::endl;
            std::cin>>option;

            switch(option){

                default: std::cout<<"Fehler!!! Zahl zwischen 0 und 1 benötigt!"<<std::endl; break;
                case 1: calculate::addition(); break;
                case 0: return;

            }
        }

}



int main(){

    mainfunction();
    
}