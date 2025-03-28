

#include <iostream>
#include <string>

struct Balance {
   
    

    std::string name{};
    int ID{};
    
    int balance{};

    void increasebalance();
    void setbalance(int newBalance);




};

void increasebalance(Balance& balance)
{

}


int main()
{
    Balance b1{ "Pavel", 7575, 1000 };
    Balance b2{ "Artem", 4545,2000 };

    Balance* balanceOne(&b1);
    Balance* balanceTwo(&b2);


    
        increasebalance(*balanceOne);
        balanceOne->setbalance(6000);

    
        std::cout << balanceOne->name << '\t' << balanceOne->ID << '\t' << balanceOne->balance << "$\n";

        
    
        std::cout << balanceTwo->name << '\t' << balanceTwo->ID << '\t' << balanceTwo->balance << "$\n";




    return EXIT_SUCCESS;
}
void Balance::increasebalance() {
    ++balance;
}
void Balance::setbalance(int newBalance) {
 
    balance = newBalance;
}


