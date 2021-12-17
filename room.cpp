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

char* Room::getRoomDescription()
{
  return roomDetail;
}

char* Room::getRoomName()
{
  return roomName;
}

void Room::setExits(map<char, char*> newExit)
{
  exits = newExit;
}

map<char, char*> Room::getExits()
{
  return exits;
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
	   cout << "NORTH" << endl;
	 }
       if (temp == 'e')
	 {
	   cout << "EAST" << endl;
	 }
       if (temp == 's')
	 {
	   cout << "SOUTH" << endl;
	 }
       if (temp == 'w')
	 {
	   cout << "WEST" << endl;
	 }
    }
}

Room::~Room() {}
