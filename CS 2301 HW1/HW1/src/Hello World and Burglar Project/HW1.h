//
// Created by supad on 10/28/2020.
//

#ifndef UNTITLED_HW1_H
#define UNTITLED_HW1_H
#include <stdbool.h>
#include "House.h"
#include "Layout.h"
#include "Room.h"

int getNumberRooms(House*);
int countRooms(Layout*);
Room* getNewRoom(House*);
Room* getFirstRoom(Layout*);
bool isOpen(Room*);
bool haveTreasure(Room*);

#endif //UNTITLED_HW1_H
