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

void Room::displayRoomInfo()
{
  cout << "You are here: " << roomName << ", " << roomDetail << endl;
}

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

void Room::displayItems()
{
  cout << "Items in this room: " << endl;
  for (vector<Item*>:: iterator it = items.begin(); it != items.end(); it++)
    {
      cout << (*it)->getItemName() << endl;
    }
}

Room::~Room() {}
