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

Room::~Room() {}
