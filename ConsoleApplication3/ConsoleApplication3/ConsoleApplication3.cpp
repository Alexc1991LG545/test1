

#include <iostream>
#include <string>

struct City {
    std::string city{};
   
    std::string street{};
    int house{};
    
    int flat{};
    int index{};

    void showData();


};


void showData(City* name)
{
    std::cout << name->city << '\t' << name->street << '\t' << name->house << '\t' << name->flat << '\t' << name->index << '\n';

}

int main()
{
    City c1{ "Moscow","Red squere", 23, 427, 54321 };
    City c2{ "Pterburg","Lenina",64, 656, 77777 };

    City* cityOne(&c1);
    City* cityTwo(&c2);
    showData(cityOne);
    showData(cityTwo);


   
    
  

}

