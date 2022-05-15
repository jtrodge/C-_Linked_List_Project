#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include "accessories.h"
#include "watercraft.h"
using namespace std;



void printMenu( );
void printBoat( vector<watercraft *> inventory );
void TAV( vector<watercraft *> inventory );
void printSpecs( vector<watercraft *> inventory );
void deleteWatercraft( vector<watercraft *> &inventory );
void searchByType( vector<watercraft *> inventory );
void searchByMotorType( vector<watercraft *> inventory );
bool ComparatorbyPrice(watercraft * a, watercraft * b);
void printByPrice( vector<watercraft *> inventory );

#endif /* FUNCTIONS_H */
