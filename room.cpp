//cpp file for room
#include <iostream>
#include <cstring>
#include <cctype>
#include <map>
#include "room.h"
#include "item.h"

using namespace std;

Room:: Room() {}

Room:: Room(char* newRoomDetail, char* newRoomName)
{
  strcpy(roomDetail, newRoomDetail);
  strcpy(roomName, newRoomName);
}

char* Room::getRoomDetail()
{
  return roomDetail;
}

char* Room::getRoomName()
{
  return roomName;
}

vector<Item*> Room::getItems()
{
  return items;
}

map<char, char*> Room::getExits()
{
  return exits;
}

void Room::setExits(map<char, char*> newExit)
{
  exits = newExit;
}

void Room:: setItems(vector<Item*> newItems)
{
  items = newItems;
}

//tells user what room they are in
void Room::displayRoomInfo()
{
  cout << "You are here: " << roomName << ", " << roomDetail << endl;
}
//displays all exits a room has
void Room::displayExits()
{
  cout << "There are exits: " << endl;
  for (map<char, char*>::iterator it = exits.begin(); it!= exits.end(); it++)
    {
       char temp = it->first;
       if (temp == 'n')
	 {
	   cout << "NORTH" << " ";
	 }
       if (temp == 'e')
	 {
	   cout << "EAST" << " ";
	 }
       if (temp == 's')
	 {
	   cout << "SOUTH" << " ";
	 }
       if (temp == 'w')
	 {
	   cout << "WEST" << " ";
	 }
    }
  cout << endl;
}

//displays what items are in a room
void Room::displayItems()
{
  cout << "Items in this room: " << endl;
  for (vector<Item*>:: iterator it = items.begin(); it != items.end(); it++)
    {
      cout << (*it)->getItemName() << " ";
    }
  cout << endl;
}

int Room::countItems()
{
  int count = 0;
  count = items.size();

  return count;
}

Room::~Room() {}
