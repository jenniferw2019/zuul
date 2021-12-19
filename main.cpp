/*
This program runs a text-based adventure game. User can travel between rooms, pick up and drop items, and check 
their inventory using commands. The room description, exits, and any items in the room will be displayed when 
user enters. There are 5 objects: a broom in the lab, a basketball in the gym, an apple in the cafe, a book in the library and a robot in the onetwenty.  Find and pick up those 5 objects and drop them in storage room to win.

Author: Jennifer Wang
12/18/21
 */
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include "item.h"
#include "room.h"



using namespace std;

int main()
{

  //variables
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

  char broom[] = "broom";
  char basketball[] = "basketball";
  char apple[] = "apple";
  char book[] = "book";
  char robot[] = "robot";

  vector<Room*> vecRoomList;
  vector<Item*> vecInventoryList;

  char inputDescription[200];

  //create room and map of exits

  Room* rmoutside;
  strcpy(inputDescription, "standing in front of the school");
  rmoutside = new Room(inputDescription, outside);
  map<char, char*> mpoutside;
  mpoutside.insert(pair<char, char*>('s', onehall));
  rmoutside->setExits(mpoutside);
  vecRoomList.push_back(rmoutside);

  Room* rmspanish;
  strcpy(inputDescription, "get ready for spanish lessons");
  rmspanish = new Room(inputDescription, spanish);
  map<char, char*> mpspanish;
  mpspanish.insert(pair<char, char*>('e', onehall));
  rmspanish->setExits(mpspanish);
  vecRoomList.push_back(rmspanish);
  
  Room* rmonehall;
  strcpy(inputDescription, "the busiest hall at school");
  rmonehall = new Room(inputDescription, onehall);
  map<char, char*> mponehall;
  mponehall.insert(pair<char, char*>('n', outside));
  mponehall.insert(pair<char, char*>('e', storage));
  mponehall.insert(pair<char, char*>('s', onetwenty));
  mponehall.insert(pair<char, char*>('w', spanish));
  rmonehall->setExits(mponehall);
  vecRoomList.push_back(rmonehall);

  Room* rmonetwenty;
  strcpy(inputDescription, "and it's time to code");
  rmonetwenty = new Room(inputDescription, onetwenty);
  map<char, char*> mponetwenty;
  mponetwenty.insert(pair<char, char*>('n', onehall));
  mponetwenty.insert(pair<char, char*>('e', theater));
  mponetwenty.insert(pair<char, char*>('s', lab));
  mponetwenty.insert(pair<char, char*>('w', film));
  rmonetwenty->setExits(mponetwenty);
  Item* irobot = new Item(robot);
  vector<Item*> itemListOne;
  itemListOne.push_back(irobot);
  rmonetwenty->setItems(itemListOne);
  vecRoomList.push_back(rmonetwenty);

  Room* rmstorage;
  strcpy(inputDescription, "where supplies are stored");
  rmstorage = new Room(inputDescription, storage);
  map<char, char*> mpstorage;
  mpstorage.insert(pair<char, char*>('s', threehall));
  mpstorage.insert(pair<char, char*>('w', onehall));
  rmstorage->setExits(mpstorage);
  vecRoomList.push_back(rmstorage);
  
  Room* rmfilm;
  strcpy(inputDescription, "the movie is about to start");
  rmfilm = new Room(inputDescription, film);
  map<char, char*> mpfilm;
  mpfilm.insert(pair<char, char*>('e', onetwenty));
  mpfilm.insert(pair<char, char*>('s', gym));
  rmfilm->setExits(mpfilm);
  vecRoomList.push_back(rmfilm);

  Room* rmtheater;
  strcpy(inputDescription, "cast and crew are rehersing");
  rmtheater = new Room(inputDescription, theater);
  map<char, char*> mptheater;
  mptheater.insert(pair<char, char*>('e', threehall));
  mptheater.insert(pair<char, char*>('w', onetwenty));
  rmtheater->setExits(mptheater);
  vecRoomList.push_back(rmtheater);

  Room* rmthreehall;
  strcpy(inputDescription, "another hallway");
  rmthreehall = new Room(inputDescription, threehall);
  map<char, char*> mpthreehall;
  mpthreehall.insert(pair<char, char*>('n', storage));
  mpthreehall.insert(pair<char, char*>('e', library));
  mpthreehall.insert(pair<char, char*>('s', cafe));
  mpthreehall.insert(pair<char, char*>('w', theater));
  rmthreehall->setExits(mpthreehall);
  vecRoomList.push_back(rmthreehall);

  Room* rmlibrary;
  strcpy(inputDescription, "shhhh be quiet");
  rmlibrary = new Room(inputDescription, library);
  map<char, char*> mplibrary;
  mplibrary.insert(pair<char, char*>('w', threehall));
  rmlibrary->setExits(mplibrary);
  Item* ibook = new Item(book);
  vector<Item*> itemListLibrary;
  itemListLibrary.push_back(ibook);
  rmlibrary->setItems(itemListLibrary);
  vecRoomList.push_back(rmlibrary);

  Room* rmlab;
  strcpy(inputDescription, "be careful when doing experiments");
  rmlab = new Room(inputDescription, lab);
  map<char, char*> mplab;
  mplab.insert(pair<char, char*>('n', onetwenty));
  mplab.insert(pair<char, char*>('e', office));
  mplab.insert(pair<char, char*>('s', twohall));
  rmlab->setExits(mplab);
  Item* ibroom = new Item(broom);
  vector<Item*> itemListLab;
  itemListLab.push_back(ibroom);
  rmlab->setItems(itemListLab);
  vecRoomList.push_back(rmlab);
  

  Room* rmoffice;
  strcpy(inputDescription, "the only office in school");
  rmoffice = new Room(inputDescription, office);
  map<char, char*> mpoffice;
  mpoffice.insert(pair<char, char*>('w', lab));
  rmoffice->setExits(mpoffice);
  vecRoomList.push_back(rmoffice);

  Room* rmcafe;
  strcpy(inputDescription, "food is yummy");
  rmcafe = new Room(inputDescription, cafe);
  map<char, char*> mpcafe;
  mpcafe.insert(pair<char, char*>('n', threehall));
  rmcafe->setExits(mpcafe);
  Item* iapple = new Item(apple);
  vector<Item*> itemListCafe;
  itemListCafe.push_back(iapple);
  rmcafe->setItems(itemListCafe);
  vecRoomList.push_back(rmcafe);

  Room* rmgym;
  strcpy(inputDescription, "PE time");
  rmgym = new Room(inputDescription, gym);
  map<char, char*> mpgym;
  mpgym.insert(pair<char, char*>('n',film));
  mpgym.insert(pair<char, char*>('e', twohall));
  rmgym->setExits(mpgym);
  Item* ibasketball = new Item(basketball);
  vector<Item*> itemListGym;
  itemListGym.push_back(ibasketball);
  rmgym->setItems(itemListGym);
  vecRoomList.push_back(rmgym);

  Room* rmtwohall;
  strcpy(inputDescription, "a less crowded hallway");
  rmtwohall = new Room(inputDescription, twohall);
  map<char, char*> mptwohall;
  mptwohall.insert(pair<char, char*>('n', lab));
  mptwohall.insert(pair<char, char*>('e', art));
  mptwohall.insert(pair<char, char*>('w', gym));
  rmtwohall->setExits(mptwohall);
  vecRoomList.push_back(rmtwohall);

  Room* rmart;
  strcpy(inputDescription, "get your creative juices flowing");
  rmart = new Room(inputDescription, art);
  map<char, char*> mpart;
  mpart.insert(pair<char, char*>('w', twohall));
  rmart->setExits(mpart);
  vecRoomList.push_back(rmart);

  cout << "Welcome to Zuul Game" << endl;
  cout << "Find, pick up, and drop all 5 items";
  cout << " (broom, basketball, apple, book, robot) into storage room to win" << endl;

  //set current room as outside
  Room* currentRoom;
  map<char, char*> currentMap;
  currentRoom = rmoutside;
  currentRoom->displayRoomInfo();
  currentRoom->displayExits();
  currentMap = currentRoom->getExits();

  
  vector<Item*> currentItem;
  currentItem = currentRoom->getItems();

  currentRoom->displayItems();
  
  bool stillPlay = true;
  char input[25];
  char goExit[10];
  char strtemp[40];

  
  while (stillPlay == true)
    {
      
      cout << "Enter a command. Type HELP for list of commands"  << endl;
      cin.get(input, 25);
      cin.get();
      
      //if type help, print out list of commands
      if(strcmp(input, "HELP") == 0)
	{
	  cout << "Here is a list of commands to travel between rooms: EAST, NORTH, SOUTH, WEST" << endl;
	  cout << "Type QUIT to quit the game" << endl;
	  cout << "Type PICK to pick up all items in current room" << endl;
	  cout << "Type DROP to drop all items in inventory to current room" << endl;
	  cout << "Type INVENTORY to check inventory and see what items you have" << endl;
	}

      //if type WEST, check to see if exit exists, and moves user to the new room
      else if(strcmp(input, "WEST") == 0)
	{
	  map<char, char*>::iterator tempIt;
	  tempIt = currentMap.find('w');
	  if (tempIt == currentMap.end())
	    {
	      cout << "This exit does not exist" << endl;
	    }
	  else
	    {
	      
	      strcpy(strtemp,currentMap.find('w')->second);
	      
	      for(vector<Room*>::iterator it = vecRoomList.begin(); it!= vecRoomList.end(); it++)
		{
		  if(strcmp((*it)->getRoomName(), strtemp) == 0)
		    {
		      //display new room info, exits, and items
		      currentRoom = (*it);
		      currentRoom->displayRoomInfo();
		      currentRoom->displayExits();
		      currentRoom->displayItems();
		      break;
		    }
		  	  
		}
	    }

	  currentMap = currentRoom->getExits();
	}

      //if type EAST, check to see if exit exists, and moves user to new room
      else if(strcmp(input, "EAST") == 0)
	{
	  map<char, char*>::iterator tempIt;
	  tempIt = currentMap.find('e');
	  if (tempIt == currentMap.end())
	    {
	      cout << "This exit does not exist" << endl;
	    }
	  else {
	    
	    strcpy(strtemp,currentMap.find('e')->second);
	    
	    for(vector<Room*>::iterator it = vecRoomList.begin(); it!= vecRoomList.end(); it++)
	      {
		if(strcmp((*it)->getRoomName(), strtemp) == 0)
		  {
		    //print out new room info, exits, and items
		    currentRoom = (*it);
		    currentRoom->displayRoomInfo();
		    currentRoom->displayExits();
		    currentRoom->displayItems();
		    break;
		  }
	      }
	  }
	  
	  currentMap = currentRoom->getExits();
	}
      //if type NORTH, check to see if exit exists, and move user to the new room
      else if(strcmp(input, "NORTH") == 0)
	{
	  map<char, char*>::iterator tempIt;
	  tempIt = currentMap.find('n');
	  if (tempIt == currentMap.end())
	    {
	      cout << "This exit does not exist" << endl;
	    }
	  else {
	    
	    strcpy(strtemp,currentMap.find('n')->second);
	    
	    for(vector<Room*>::iterator it = vecRoomList.begin(); it!= vecRoomList.end(); it++)
	      {
		if(strcmp((*it)->getRoomName(), strtemp) == 0)
		  {
		    //print out new room info, exits, and items
		    currentRoom = (*it);
		    currentRoom->displayRoomInfo();
		    currentRoom->displayExits();
		    currentRoom->displayItems();
		    break;
		  }
	      }
	  }
	  
	  currentMap = currentRoom->getExits();
	}

      //if type SOUTH, check to see if exit exists, and move user to new room
      else if(strcmp(input, "SOUTH") == 0)
	{
	  map<char, char*>::iterator tempIt;
	  tempIt = currentMap.find('s');
	  if (tempIt == currentMap.end())
	    {
	      cout << "This exit does not exist" << endl;
	    }
	  else
	    {
	      strcpy(strtemp,currentMap.find('s')->second);
	      
	      for(vector<Room*>::iterator it = vecRoomList.begin(); it!= vecRoomList.end(); it++)
		{
		  if(strcmp((*it)->getRoomName(), strtemp) == 0)
		    {
		      //print out new room info, exits, and items
		      currentRoom = (*it);
		      currentRoom->displayRoomInfo();
		      currentRoom->displayExits();
		      currentRoom->displayItems();
		      break;
		    }
		}
	    }
	  
	  currentMap = currentRoom->getExits();
	}
      //if type PICK, pick up all items in a room
      else if(strcmp(input, "PICK") == 0)
	{
	  currentItem = currentRoom->getItems();

	  for(vector<Item*>::iterator it = currentItem.begin(); it!= currentItem.end(); it++)
	    {
	      vecInventoryList.push_back(*it);
	    }
	  currentItem.clear();
	  currentRoom->setItems(currentItem);
	  
	}
      //if type INVENTORY, print out user inventory
      else if(strcmp(input, "INVENTORY") == 0)
	{
	  for(vector<Item*>:: iterator it = vecInventoryList.begin(); it!= vecInventoryList.end(); it++)
	    {
	      cout << (*it)->getItemName() << " ";
	    }
	  cout << endl;
	}

      //if type DROP, drop all items in user inventory to current room
      else if(strcmp(input, "DROP") == 0)
	{
	  
	  currentItem = currentRoom->getItems();
	  
	  for(vector<Item*>::iterator it = vecInventoryList.begin(); it!= vecInventoryList.end(); it++)
	    {
	      currentItem.push_back(*it);

	    }
	  vecInventoryList.clear();
	  currentRoom->setItems(currentItem);

	  int countItem;
	  countItem = rmstorage->countItems();
	  if (countItem == 5)
	    {
	      cout << "You dropped all 5 items in storage room" << endl;
	      cout << "You win!" << endl;
	      stillPlay = false;
	    }
	}

      //if type QUIT, game stops
      else if(strcmp(input, "QUIT") == 0)
	{
	  stillPlay = false;
	}
    }
  return 0;
}
