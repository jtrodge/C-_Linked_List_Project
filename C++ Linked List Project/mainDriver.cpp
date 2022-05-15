/*
Jason Rodgers
CPSC 1020, S21
jtrodge@clemson.edu
PA2
Cathy Kittlested
*/

#include "accessories.cpp"
#include "watercraft.cpp"
#include "functions.cpp"

int main(int argc, char *argv[]) {
  int num;
  //Initialize ifstream
  ifstream inFile2(argv[1]);
  //Make sure the right amount of elements are being used in ./a.out or argc
  if (argc != 2) {
    cout << "Usage: " << argv[0] << " watercraft.txt" << endl;
    return -1;
  }
  //Check Statement to see if file is open
  if (!inFile2.is_open()) {
    cout << "Unable to open file" << endl;
    return -1;
  }
  //Initialize Watercraft vector for Watercraft/Accesories Functions
  vector<watercraft *> boat;
  //Everything works except case for #1 - watercraft(ifstream)
  do {
    printMenu();
    cin >> num;
    printf("\n");
    if (num == 1) {
      watercraft * allCrafts = new watercraft(inFile2);
      boat.push_back(allCrafts);
    }
    else if (num == 2) {
      addToFront(boat);
    }
    else if (num == 3) {
      addToFront(boat);
    }
    else if (num == 4) {
      //Use boat size to get size of boat
      cout << "There are " << boat.size() << " watercraft in the inventory.\n\n";
    }
    else if (num == 5) {
      printBoat(boat);
    }
    else if (num == 6) {
      printBoat(boat);
      printSpecs(boat);
    }
    else if (num == 7) {
      printBoat(boat);
      deleteWatercraft(boat);
    }
    else if (num == 8) {
      printBoat(boat);
      searchByType(boat);
    }
    else if (num == 9) {
      printBoat(boat);
      searchByMotorType(boat);
    }
    else if (num == 10) {
      printByPrice(boat);
    }
    else if (num == 11) {
      TAV(boat);
    }
    else {
      inFile2.close();
      break;
    }
  } while (num != 12);

  return 0;
}
