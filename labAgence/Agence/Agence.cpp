

#include <iostream>
#include <ctime>
#include "FactoryVaisseau.h"
#include "Vaisseau.h"





int main()
{
    srand(time(NULL));
    std::cout << "... production d'un vaisseau" << std::endl;
    Vaisseau* monVaisseau = FactoryVaisseau::getRandomVaisseau();
    std::cout << monVaisseau->to_string();
    delete monVaisseau;
}
    
