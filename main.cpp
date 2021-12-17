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

  Room* rmoutside;
  strcpy(inputDescription, "outside");
  rmoutside = new Room(inputDescription, outside);
  map<char, char*> mpoutside;
  mpoutside.insert(pair<char, char*>('s', onehall));
  rmoutside->setExits(mpoutside);
  vecRoomList.push_back(rmoutside);

  Room* rmspanish;
  strcpy(inputDescription, "in spanish");
  rmspanish = new Room(inputDescription, spanish);
  map<char, char*> mpspanish;
  mpspanish.insert(pair<char, char*>('e', onehall));
  rmspanish->setExits(mpspanish);
  vecRoomList.push_back(rmspanish);
  
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

  Room* rmstorage;
  strcpy(inputDescription, "in storage");
  rmstorage = new Room(inputDescription, storage);
  map<char, char*> mpstorage;
  mpstorage.insert(pair<char, char*>('s', threehall));
  mpstorage.insert(pair<char, char*>('w', onehall));
  rmstorage->setExits(mpstorage);
  vecRoomList.push_back(rmstorage);
  
  Room* rmfilm;
  strcpy(inputDescription, "in film");
  rmfilm = new Room(inputDescription, film);
  map<char, char*> mpfilm;
  mpfilm.insert(pair<char, char*>('e', onetwenty));
  mpfilm.insert(pair<char, char*>('s', gym));
  rmfilm->setExits(mpfilm);
  vecRoomList.push_back(rmfilm);

  Room* rmtheater;
  strcpy(inputDescription, "in theater");
  rmtheater = new Room(inputDescription, theater);
  map<char, char*> mptheater;
  mptheater.insert(pair<char, char*>('e', threehall));
  mptheater.insert(pair<char, char*>('w', onetwenty));
  rmtheater->setExits(mptheater);
  vecRoomList.push_back(rmtheater);

  Room* rmthreehall;
  strcpy(inputDescription, "in three hall");
  rmthreehall = new Room(inputDescription, threehall);
  map<char, char*> mpthreehall;
  mpthreehall.insert(pair<char, char*>('n', storage));
  mpthreehall.insert(pair<char, char*>('e', library));
  mpthreehall.insert(pair<char, char*>('s', cafe));
  mpthreehall.insert(pair<char, char*>('w', theater));
  rmthreehall->setExits(mpthreehall);
  vecRoomList.push_back(rmthreehall);

  Room* rmlibrary;
  strcpy(inputDescription, "in library");
  rmlibrary = new Room(inputDescription, library);
  map<char, char*> mplibrary;
  mplibrary.insert(pair<char, char*>('w', threehall));
  rmlibrary->setExits(mplibrary);
  vecRoomList.push_back(rmlibrary);

  Room* rmlab;
  strcpy(inputDescription, "in lab");
  rmlab = new Room(inputDescription, lab);
  map<char, char*> mplab;
  mplab.insert(pair<char, char*>('n', onetwenty));
  mplab.insert(pair<char, char*>('e', office));
  mplab.insert(pair<char, char*>('s', twohall));
  rmlab->setExits(mplab);
  vecRoomList.push_back(rmlab);

  Room* rmoffice;
  strcpy(inputDescription, "in office");
  rmoffice = new Room(inputDescription, office);
  map<char, char*> mpoffice;
  mpoffice.insert(pair<char, char*>('w', lab));
  rmoffice->setExits(mpoffice);
  vecRoomList.push_back(rmoffice);

  Room* rmcafe;
  strcpy(inputDescription, "in cafe");
  rmcafe = new Room(inputDescription, cafe);
  map<char, char*> mpcafe;
  mpcafe.insert(pair<char, char*>('n', threehall));
  rmcafe->setExits(mpcafe);
  vecRoomList.push_back(rmcafe);

  Room* rmgym;
  strcpy(inputDescription, "in gym");
  rmgym = new Room(inputDescription, gym);
  map<char, char*> mpgym;
  mpgym.insert(pair<char, char*>('n',film));
  mpgym.insert(pair<char, char*>('e', twohall));
  rmgym->setExits(mpgym);
  vecRoomList.push_back(rmgym);

  Room* rmtwohall;
  strcpy(inputDescription, "in two hall");
  rmtwohall = new Room(inputDescription, twohall);
  map<char, char*> mptwohall;
  mptwohall.insert(pair<char, char*>('n', lab));
  mptwohall.insert(pair<char, char*>('e', art));
  mptwohall.insert(pair<char, char*>('w', gym));
  rmtwohall->setExits(mptwohall);
  vecRoomList.push_back(rmtwohall);

  Room* rmart;
  strcpy(inputDescription, "in art");
  rmart = new Room(inputDescription, art);
  map<char, char*> mpart;
  mpart.insert(pair<char, char*>('w', twohall));
  rmart->setExits(mpart);
  vecRoomList.push_back(rmart);

  Room* currentRoom;
  map<char, char*> currentMap;
  currentRoom = rmtwohall;
  currentRoom->displayRoomInfo();
  currentRoom->displayExits();
  currentMap = currentRoom->getExits();

  bool stillPlay = true;
  char input[25];
  char goExit[10];
  char strtemp[40];
  while (stillPlay == true)
    {

      //cout << "You are here: " << currentRoom->getRoomName() << endl;
      //cout << currentRoom->getRoomDescription() << endl;
      
      cout << "Enter a command. Type HELP for assistance"  << endl;
      cin.get(input, 25);
      cin.get();

      if(strcmp(input, "HELP") == 0)
	{
	  cout << "Here is a list of commands to travel between rooms: EAST, NORTH, SOUTH, WEST" << endl;
	  cout << "Type QUIT to quit the game" << endl;
	  cout << "Type PICK to pick up an item" << endl;
	  cout << "Type DROP to drop an item" << endl;
	  cout << "Type INVENTORY to check inventory and see what items you have" << endl;
	}

      if(strcmp(input, "WEST") == 0)
	{
	  strcpy(strtemp,currentMap.find('w')->second);
	  
	  for(vector<Room*>::iterator it = vecRoomList.begin(); it!= vecRoomList.end(); it++)
	    {
	      if(strcmp((*it)->getRoomName(), strtemp) == 0)
		{
		  currentRoom = (*it);
		  currentRoom->displayRoomInfo();
		  currentRoom->displayExits();
		  break;
		}
	    }

	  currentMap = currentRoom->getExits();
	}

      if(strcmp(input, "EAST") == 0)
	{
	  strcpy(strtemp,currentMap.find('e')->second);
	  
	  for(vector<Room*>::iterator it = vecRoomList.begin(); it!= vecRoomList.end(); it++)
	    {
	      if(strcmp((*it)->getRoomName(), strtemp) == 0)
		{
		  currentRoom = (*it);
		  currentRoom->displayRoomInfo();
		  currentRoom->displayExits();
		  break;
		}
	    }

	  currentMap = currentRoom->getExits();
	}

      if(strcmp(input, "NORTH") == 0)
	{
	  strcpy(strtemp,currentMap.find('n')->second);
	  
	  for(vector<Room*>::iterator it = vecRoomList.begin(); it!= vecRoomList.end(); it++)
	    {
	      if(strcmp((*it)->getRoomName(), strtemp) == 0)
		{
		  currentRoom = (*it);
		  currentRoom->displayRoomInfo();
		  currentRoom->displayExits();
		  break;
		}
	    }

	  currentMap = currentRoom->getExits();
	}
      
      if(strcmp(input, "SOUTH") == 0)
	{
	  strcpy(strtemp,currentMap.find('s')->second);
	  
	  for(vector<Room*>::iterator it = vecRoomList.begin(); it!= vecRoomList.end(); it++)
	    {
	      if(strcmp((*it)->getRoomName(), strtemp) == 0)
		{
		  currentRoom = (*it);
		  currentRoom->displayRoomInfo();
		  currentRoom->displayExits();
		  break;
		}
	    }

	  currentMap = currentRoom->getExits();
	}

      if(strcmp(input, "QUIT") == 0)
	{
	  stillPlay = false;
	}


      

      /*
      if (strcmp(input, "go") == 0)
	{
	  cout << "which exist do you want to go through?" << endl;
	  cout << "type 'n' for north, 'e' for east, 's' for south, and 'w' for west" << endl;
	  cin.get(goExit, 10);
	  cin.get();

	  if (strcmp(getExit, "n") == 0)
	    {
	      strcpy(strtemp, currentMap.find('n')->second);
	    }
	
	}
      */
    }



  
  /*
  cout << currentRoom->getRoomName() << endl;
  cout << currentRoom->getRoomDescription() << endl;

  char strtemp[40];
  strcpy(strtemp,currentMap.find('s')->second);
  cout << strtemp << endl;


  for(vector<Room*>::iterator it = vecRoomList.begin(); it!= vecRoomList.end(); it++)
    {
      if(strcmp((*it)->getRoomName(), strtemp) == 0)
	{
	  currentRoom = (*it);
	  break;
	}
    }

  currentMap = currentRoom->getExits();
  cout << currentRoom->getRoomName() << endl;
  cout << currentRoom->getRoomDescription() << endl;
  strcpy(strtemp,currentMap.find('w')->second);
  cout << strtemp << endl;
  */  

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
