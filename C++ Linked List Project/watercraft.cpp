/*
Jason Rodgers
CPSC 1020, S21
jtrodge@clemson.edu
PA2
Cathy Kittlested
*/

#include "watercraft.h"

//Initialize elements of the Watercraft private variables
watercraft::watercraft() {
  type = "";
  make = "";
  model = "";
  propulsion = 0;
  engine = "";
  hp = 0;
  color = "";
  length = 0;
  base_price = 0;
  total_price = 0;
}

watercraft::watercraft( ifstream &inFile ) {
  string typeTemp;
  string makeTemp;
  string modelTemp;
  int propulsionTemp;
  string engineTemp;
  int hpTemp;
  string colorTemp;
  int lengthTemp;
  double base_priceTemp;
  double total_priceTemp;
  double biminiTemp;
  double towbarTemp;
  double stereoTemp;
  double tableTemp;
  double gpsTemp;
  double anchorTemp;
  double paddlesTemp;
  while (getline(inFile, typeTemp))
  {
    getline(inFile, typeTemp);
    getline(inFile, makeTemp);
    getline(inFile, modelTemp);
    inFile >> propulsionTemp;
    getline(inFile, engineTemp);
    inFile >> hpTemp;
    getline(inFile, colorTemp);
    inFile >> lengthTemp;
    inFile >> base_priceTemp;
    inFile >> total_priceTemp;
    inFile >> biminiTemp;
    inFile >> towbarTemp;
    inFile >> stereoTemp;
    inFile >> tableTemp;
    inFile >> gpsTemp;
    inFile >> anchorTemp;
    inFile >> paddlesTemp;
    watercraft * newWatercraft = new watercraft(typeTemp, makeTemp, modelTemp, propulsionTemp, engineTemp, hpTemp, colorTemp, lengthTemp, base_priceTemp, total_priceTemp, biminiTemp, towbarTemp, stereoTemp, tableTemp, gpsTemp, anchorTemp, paddlesTemp);
  }
}

//Print Watercraft / Correct formatting of correct watercraft
void watercraft::printWatercraft ( int index ) {
  cout << setw(2) << index + 1 << ". "
      << setw(13) << left << type << setw(20) << left << make
      << setw(23) << left << model << setw(11) << left << engine
      << setw(5) << left << hp << setw(19) << left << color
      << setw(5) << left << length << setw(10) << left << fixed
      << setprecision(2) << right << total_price;
  cout << "\n";
}
