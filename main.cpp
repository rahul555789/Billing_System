/*Basic structure of Billing system like in resturent*/


#include "header.hpp"



class Menu
{
    public:

    Menu(uint16_t num , std::string it , uint16_t pri)
    {
        number=num;
        item=it;
        price=pri;

    }

    void display(){
        std::cout << number << "\t:\t" << item << "\t\t:\t" << price << std::endl;
    }
    uint16_t number;
    std::string item;
    uint16_t price;
};



int main()
{
    
    std::vector<Menu> Vector_Menu;

    Vector_Menu.push_back(Menu(0,"soup",100));
    Vector_Menu.push_back(Menu(1,"roti",10));
    Vector_Menu.push_back(Menu(2,"sabji",200));
    Vector_Menu.push_back(Menu(3,"Chaas",50));
    Vector_Menu.push_back(Menu(4,"papad",20));
    Vector_Menu.push_back(Menu(5,"naan",35));
    Vector_Menu.push_back(Menu(6,"machurian",150));
    Vector_Menu.push_back(Menu(7,"rice",75));
    Vector_Menu.push_back(Menu(8,"dal",55));
    Vector_Menu.push_back(Menu(9,"chai",15));

    for(Menu obj : Vector_Menu) {
        obj.display();
    }

    //TODO add option for various task (add_item, remove_item, edit_menu)
    std::cout << "enter 255 to make total"  << std::endl;
    std::cout << "enter index no : ";

    std::vector<Menu> cart;
    uint16_t index_no = -1;

    while(index_no != 255) {
        
        //TODO take input of quentity of same item and add it to cart
        std::cin >> index_no;
        
        if(index_no > 9 || index_no < 0 ) {
            if(index_no != 255)
                std::cout << "there is no item with " << index_no << std:: endl;
        }

        else {
            //TODO clear screen before every cart print
            cart.push_back(Vector_Menu[index_no]);
            std::cout << "items on cart " << std::endl;

            for(Menu obj : cart) {
                obj.display();
            }
        }
    }
    uint32_t total = 0;
    for(Menu obj : cart) {
        total += obj.price;
    }
    std::cout << "your total is = " << total << std::endl;
}