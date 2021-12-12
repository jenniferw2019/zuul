#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include "item.h"
#include "room.h"



using namespace std;

int main()
{

  char outside[] = "outside";
  char spanish[] = "spanish";
  char onetwenty[] = "onetwenty";
  char storage[] = "storage";
  char film[] = "film";
  char onehall[] = "onehall";
  char theater[] = "theater";
  char threehall[] = "threehall";
  char library[] = "library";
  char lab[] = "lab";
  char office[] = "office";
  char cafe[] = "cafe";
  char gym[] = "gym";
  char twohall[] = "twohall";
  char art[] = "art";

  vector<Room*> vecRoomList;

  char inputDescription[150];

  //create room and map of exits
  Room* rmonehall;
  strcpy(inputDescription, "in one hall");
  rmonehall = new Room(inputDescription, onehall);
  map<char, char*> mponehall;
  mponehall.insert(pair<char, char*>('n', outside));
  mponehall.insert(pair<char, char*>('e', storage));
  mponehall.insert(pair<char, char*>('s', onetwenty));
  mponehall.insert(pair<char, char*>('w', spanish));
  rmonehall->setExits(mponehall);
  vecRoomList.push_back(rmonehall);

  Room* rmonetwenty;
  strcpy(inputDescription, "in one twenty");
  rmonetwenty = new Room(inputDescription, onetwenty);
  map<char, char*> mponetwenty;
  mponetwenty.insert(pair<char, char*>('n', onehall));
  mponetwenty.insert(pair<char, char*>('e', theater));
  mponetwenty.insert(pair<char, char*>('s', lab));
  mponetwenty.insert(pair<char, char*>('w', film));
  rmonetwenty->setExits(mponetwenty);
  vecRoomList.push_back(rmonetwenty);

  Room* currentRoom;
  map<char, char*> currentMap;
  currentRoom = rmonehall;
  currentMap = currentRoom->getExits();

  cout << currentRoom->getRoomName() << endl;
  cout << currentRoom->getRoomDescription() << endl;

  char strtemp[40];
  strcpy(strtemp,currentMap.find('s')->second);
  cout << strtemp << endl;

  
  
  /*
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
  */
  return 0;
}
