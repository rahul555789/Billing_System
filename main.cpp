/*Basic structure of Billing system like in resturent*/


#include "header.hpp"



class Menu
{
    public:

    Menu(int num , std::string it , int pri)
    {
        number=num;
        item=it;
        price=pri;

    }

    void display()
    {
        std::cout << number << "\t:\t" << item << "\t\t:\t" << price << std::endl;
    }
    int number;
    std::string item;
    int price;
};



int main()
{
    std::vector<Menu> Vector_Menu;

    Vector_Menu.push_back(Menu(1,"soup",100));
    Vector_Menu.push_back(Menu(2,"roti",10));
    Vector_Menu.push_back(Menu(3,"sabji",200));
    Vector_Menu.push_back(Menu(4,"Chaas",50));
    Vector_Menu.push_back(Menu(5,"papad",20));

    for(Menu obj : Vector_Menu)
    {
        obj.display();
    }
}