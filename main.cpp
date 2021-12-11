#include <iostream>
#include <cstring>
#include <vector>
#include "item.h"

using namespace std;

int main()
{

  vector<Item*> vecItemList;
  

  char* broom = new char[100];
  strcpy(broom, "Broom");
  Item* itemBroom = new Item(broom);
  vecItemList.push_back(itemBroom);

  char* basketball = new char[100];
  strcpy(basketball, "Basketball");
  Item* itemBasketball = new Item(basketball);
  vecItemList.push_back(itemBasketball);
  
  char* apple = new char[100];
  strcpy(apple, "Apple");
  Item* itemApple = new Item(apple);
  vecItemList.push_back(itemApple);


  //cout << newItem.getDescription() << endl;
  for (vector<Item*>::iterator it = vecItemList.begin(); it != vecItemList.end(); it++)
    {
      cout << (*it)->getDescription() << endl;
    }
  return 0;
}
