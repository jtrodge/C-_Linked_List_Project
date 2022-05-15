/*
Jason Rodgers
CPSC 1020, S21
jtrodge@clemson.edu
PA2
Cathy Kittlested
*/
#include "functions.h"

//Print the menu everytime I execute a function
void printMenu( ) {
  cout << "1. load inventory of watercraft from file: Ignore: no file included" << endl;
  cout << "2. add additional watercraft to front of list" << endl;
  cout << "3. add additional watercraft to end of list" << endl;
  cout << "4. number of watercraft in inventory" << endl;
  cout << "5. print inventory of chosen watercraft" << endl;
  cout << "6. print specs of chosen watercraft" << endl;
  cout << "7. delete chosen watercraft" << endl;
  cout << "8. search watercraft by type" << endl;
  cout << "9. search watercraft by motor type" << endl;
  cout << "10. sort watercraft by price" << endl;
  cout << "11. total asset value in inventory" << endl;
  cout << "12. quit program " << endl;
  cout << "- - > ";
}

void addToFront(vector<watercraft *> & inventory) {
  //Initialize the Dummy Functions
  string nwType, nwMake, nwModel, nwEngine, nwColor;
  int nwPropulsion, nwHp, nwLength;
  double nwBprice, nwTprice, nwBimini, nwTowbar,
  nwStereo, nwTable, nwGPS, nwAnchor, nwPaddles;
  //Initiaize to get the accessorie functions
  accessories * extra = new accessories();

  //prompt user for info
  cout << "Enter watercraft type:\n\t";
  cin >> nwType;
  cout << "Enter watercraft make:\n\t";
  cin >> nwMake;
  cout << "Enter watercraft model:\n\t";
  cin >> nwModel;
  cout << "Enter 0 for motor, 1 for outboard, 2 for inboard:\n\t";
  cin >> nwPropulsion;
  cout << "Enter engine make:\n\t";
  cin >> nwEngine;
  cout << "How much horsepower does the engine have:\n\t";
  cin >> nwHp;
  cout << "Enter color of watercraft:\n\t";
  cin >> nwColor;
  cout << "Length of watercraft:\n\t";
  cin >> nwLength;
  cout << "Base price of watercraft:\n\t";
  cin >> nwBprice;
  cout << "Cost of bimini (if there is an extra cost)\n\t";
  cin >> nwBimini;
  extra->set_bimini(nwBimini);
  cout << "Cost of towbar (if there is an extra cost)\n\t";
  cin >> nwTowbar;
  extra->set_towbar(nwTowbar);
  cout << "Cost of stereo (if there is an extra cost)\n\t";
  cin >> nwStereo;
  extra->set_stereo(nwStereo);
  cout << "Cost of table (if there is an extra cost)\n\t";
  cin >> nwTable;
  extra->set_table(nwTable);
  cout << "Cost of gps (if there is an extra cost)\n\t";
  cin >> nwGPS;
  extra->set_gps(nwGPS);
  cout << "Cost of anchor (if there is an extra cost)\n\t";
  cin >> nwAnchor;
  extra->set_anchor(nwAnchor);
  cout << "Cost of paddles (if there is an extra cost)\n\t";
  cin >> nwPaddles;
  extra->set_paddles(nwPaddles);
  nwTprice = nwBprice + extra->get_bimini() + extra->get_towbar() + extra->get_stereo() + extra->get_table()
  + extra->get_gps() + extra->get_anchor() + extra->get_paddles();
  //Set Dummy Functions to the Watercraft
  watercraft * newCraft = new watercraft(nwType, nwMake, nwModel, nwPropulsion, nwEngine, nwHp, nwColor, nwLength,
                                        nwBprice, nwTprice, nwBimini, nwTowbar, nwStereo, nwTable, nwGPS, nwAnchor, nwPaddles);
  //Insert the Prompted information into the front of the vector
  inventory.insert(inventory.begin(), newCraft);
}

void addToRear(vector<watercraft *> & inventory) {
  //Initialize the Dummy Functions
  string nwType, nwMake, nwModel, nwEngine, nwColor;
  int nwPropulsion, nwHp, nwLength;
  double nwBprice, nwTprice, nwBimini, nwTowbar,
  nwStereo, nwTable, nwGPS, nwAnchor, nwPaddles;
  //Initiaize to get the accessorie functions
  accessories * extra = new accessories();

  //prompt user for info
  cout << "Enter watercraft type:\n\t";
  cin >> nwType;
  cout << "Enter watercraft make:\n\t";
  cin >> nwMake;
  cout << "Enter watercraft model:\n\t";
  cin >> nwModel;
  cout << "Enter 0 for motor, 1 for outboard, 2 for inboard:\n\t";
  cin >> nwPropulsion;
  cout << "Enter engine make:\n\t";
  cin >> nwEngine;
  cout << "How much horsepower does the engine have:\n\t";
  cin >> nwHp;
  cout << "Enter color of watercraft:\n\t";
  cin >> nwColor;
  cout << "Length of watercraft:\n\t";
  cin >> nwLength;
  cout << "Base price of watercraft:\n\t";
  cin >> nwBprice;
  cout << "Cost of bimini (if there is an extra cost)\n\t";
  cin >> nwBimini;
  extra->set_bimini(nwBimini);
  cout << "Cost of towbar (if there is an extra cost)\n\t";
  cin >> nwTowbar;
  extra->set_towbar(nwTowbar);
  cout << "Cost of stereo (if there is an extra cost)\n\t";
  cin >> nwStereo;
  extra->set_stereo(nwStereo);
  cout << "Cost of table (if there is an extra cost)\n\t";
  cin >> nwTable;
  extra->set_table(nwTable);
  cout << "Cost of gps (if there is an extra cost)\n\t";
  cin >> nwGPS;
  extra->set_gps(nwGPS);
  cout << "Cost of anchor (if there is an extra cost)\n\t";
  cin >> nwAnchor;
  extra->set_anchor(nwAnchor);
  cout << "Cost of paddles (if there is an extra cost)\n\t";
  cin >> nwPaddles;
  extra->set_paddles(nwPaddles);
  nwTprice = nwBprice + extra->get_bimini() + extra->get_towbar() + extra->get_stereo() + extra->get_table()
  + extra->get_gps() + extra->get_anchor() + extra->get_paddles();
  //Set Dummy Functions to the Watercraft
  watercraft * newCraft = new watercraft(nwType, nwMake, nwModel, nwPropulsion, nwEngine, nwHp, nwColor, nwLength,
                                        nwBprice, nwTprice, nwBimini, nwTowbar, nwStereo, nwTable, nwGPS, nwAnchor, nwPaddles);
  //Set the propted information to the back of the vector
  inventory.push_back(newCraft);
}

void printBoat( vector<watercraft *> inventory ) {
  //Initialize an iter variable for for loop
  vector<watercraft*> :: iterator iter;
  //Set count for printWatercraft
  int count = 0;
  //Loop from start of watercraft to the end of the watercraft
  for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
    (*iter)->printWatercraft(count);
    count++;
  }
  cout << "\n";
}

void TAV( vector<watercraft *> inventory ) {
  //Initialize an iter variable for for loop
  vector<watercraft*> :: iterator iter;
  //Set sum to collect the total price of ALL of the watercrafts
  int sum = 0;
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      //Loop until the end of the vector
      sum = sum + (*iter)->getTPrice();
    }
    cout << "Total asset value of all inventory is: $ " << sum << "\n\n";
}

void printSpecs( vector<watercraft *> inventory ) {
  //Initialize an iter variable for for loop
  vector<watercraft*> :: iterator iter;
  int counter;
  int num = 0;

    //Ask user to choose which one to search for
    cout << "Enter the # of the watercraft for the specs:\n--> ";
    cin >> num;
    //Check if vector is empty
    if (inventory.empty()) {          //If list is already empty
        cout << "Vector is empty!\n";
        return;
    }
    counter = 1;
    //Search for the correct watercraft
    auto temp = iter;
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      //Set temp function to break loop and delete element outside of the loop
      if (counter == num) {
        temp = iter;
      }
      //If element not found, keep iterating through loop
      else {
        //iterate counter variable to keep track of correct watercraft
        counter++;
      }
    }
    cout << "\n";
    //Print Extra Items, if it does not equal zero
    (*temp)->printWatercraft(counter - 1);
    if ((*temp)->getPropulsion() == 0) {
      cout << "\tno motor\n";
    }
    else if ((*temp)->getPropulsion() == 1) {
      cout << "\toutboard\n";
    }
    else {
      cout << "\tin-board motor\n";
    }
    if ((*temp)->getExtras().get_bimini() != 0) {
      cout << "\tbiminis: $ " << (*temp)->getExtras().get_bimini() << "\n";
    }
    if ((*temp)->getExtras().get_towbar() != 0) {
      cout  << "\ttowbar: $ " << (*temp)->getExtras().get_towbar() << "\n";
    }
    if ((*temp)->getExtras().get_stereo() != 0) {
      cout << "\tstereo: $ " << (*temp)->getExtras().get_stereo() << "\n";
    }
    if ((*temp)->getExtras().get_table() != 0) {
      cout << "\ttable: $ " << (*temp)->getExtras().get_table() << "\n";
    }
    if ((*temp)->getExtras().get_gps() != 0) {
      cout << "\tgps: $ " << (*temp)->getExtras().get_gps() << "\n";
    }
    if ((*temp)->getExtras().get_anchor() != 0) {
      cout << "\tanchor: $ " << (*temp)->getExtras().get_anchor() << "\n";
    }
    if ((*temp)->getExtras().get_paddles() != 0) {
      cout << "\tpaddles: $ " << (*temp)->getExtras().get_paddles() << "\n";
    }
}

void deleteWatercraft( vector<watercraft *> &inventory ) {
  //Initialize an iter variable for for loop
  vector<watercraft*> :: iterator iter;
  int num = 0;
    //Ask user to choose which one to delete
    cout << "Enter the # of watercraft to delete from inventory:\n--> ";
    cin >> num;
    if (inventory.empty()){          //If Vector is already empty
        cout << "Vector is empty!\n";
        return;
    }
    int counter = 1;
    auto temp = iter;
    //Search for the correct watercraft
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      if (counter == num) {
        //Set temp function to break loop and delete watercraft
        temp = iter;
      }
      //If not found, keep iterating through list
      else {
        //iterate counter variable to keep track of correct watercraft
        counter++;
      }
    }
    counter--;
    cout << "\n";
    //Use erase function to delete watercraft
    inventory.erase(inventory.begin()+(counter - 1));
}

void searchByType( vector<watercraft *> inventory ) {
  //Initialize an iter variable for for loop
  vector<watercraft*> :: iterator iter;
  int num = 0;
  //Initialize strings of watercraft types
  string pontoon = "pontoon";
  string fishing = "fishing";
  string sportBoat = "sport boat";
  string kayak = "kayak";
  string canoe = "canoe";
  string sailboat = "sailboat";
  //Prompt user for input
  cout << "Type of watercraft to search for: \n";
  cout << "1. pontoon\n2. fishing\n3. sport boat\n4. kayak\n5. canoe\n6. sailboat\n";
  cout << "- - > ";
  cin >> num;
  cout << "\n";
  //Different types of watercraft cases
  int count = 1;
  if (num == 1) {
    //Use for loop to find correct watercraft
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      //Use getter function to find correct watercrafts
      if ((*iter)->getType() == pontoon) {
        //Set count to 1 for loop, so decrement it in print function
        (*iter)->printWatercraft(count - 1);
        cout << "\n";
      }
      else {
        count++;
      }
    }
  }
  else if (num == 2) {
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      //Use getter function to find correct watercrafts
      if ((*iter)->getType() == fishing) {
        //Set count to 1 for loop, so decrement it in print function
        (*iter)->printWatercraft(count - 1);
        cout << "\n";
      }
      else {
        count++;
      }
    }
  }
  else if (num == 3) {
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      //Use getter function to find correct watercrafts
      if ((*iter)->getType() == sportBoat) {
        //Set count to 1 for loop, so decrement it in print function
        (*iter)->printWatercraft(count - 1);
        cout << "\n";
      }
      else {
        count++;
      }
    }
  }
  else if (num == 4) {
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      //Use getter function to find correct watercrafts
      if ((*iter)->getType() == kayak) {
        //Set count to 1 for loop, so decrement it in print function
        (*iter)->printWatercraft(count - 1);
        cout << "\n";
      }
      else {
        count++;
      }
    }
  }
  else if (num == 5) {
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      //Use getter function to find correct watercrafts
      if ((*iter)->getType() == canoe) {
        //Set count to 1 for loop, so decrement it in print function
        (*iter)->printWatercraft(count - 1);
        cout << "\n";
      }
      else {
        count++;
      }
    }
  }
  else if (num == 6) {
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      //Use getter function to find correct watercrafts
      if ((*iter)->getType() == sailboat) {
        //Set count to 1 for loop, so decrement it in print function
        (*iter)->printWatercraft(count - 1);
        cout << "\n";
      }
      else {
        count++;
      }
    }
  }
}

void searchByMotorType( vector<watercraft *> inventory ) {
  //Initialize an iter variable for for loop
  vector<watercraft*> :: iterator iter;
  //Initialize integers of watercraft Motor Types
  int num = 0;
  int uno = 1;
  int dos = 2;
  int tres = 3;
  //Prompt user for input
  cout << "Type of motor to search for: \n";
  cout << "1. no motor\n2. out-board motor\n3. in-board motor\n";
  cout << "- - > ";
  cin >> num;
  cout << "\n";

  //Different type of watercraft motor cases
  int count = 1;
  if (num == 1) {
    //Use getter function to find correct motor watercraft type
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      if ((*iter)->getPropulsion() == uno) {
        (*iter)->printWatercraft(count - 1);
        cout << "\n";
      }
      else {
        count++;
      }
    }
  }
  else if (num == 2) {
    //Use getter function to find correct motor watercraft type
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      if ((*iter)->getPropulsion() == dos) {
        //Set count to 1 for loop, so decrement it in print function
        (*iter)->printWatercraft(count - 1);
        cout << "\n";
      }
      else {
        count++;
      }
    }
  }
  else if (num == 3) {
    //Use getter function to find correct motor watercraft type
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      if ((*iter)->getPropulsion() == tres) {
        //Set count to 1 for loop, so decrement it in print function
        (*iter)->printWatercraft(count - 1);
        cout << "\n";
      }
      else {
        count++;
      }
    }
  }
}
//Use Comparator function to set the total prices in incremental order
bool Comparatorbyprice(watercraft * a, watercraft * b) {
  return a->getTPrice() < b->getTPrice();
}

void printByPrice( vector<watercraft *> inventory ) {
  //Initialize an iter variable for for loop
  vector<watercraft*> :: iterator iter;
  //Initialize a new Watercraft vector different from the original vector
  vector<watercraft *> newCraft;
    //Use for loop to give the new watercraft vector the same elements of the original vector
    for (auto iter = inventory.begin(); iter != inventory.end(); iter++) {
      newCraft = inventory;
    }
    //Initialize bubble sort
    for (long unsigned int i = 0; i < inventory.size(); i++) {
      for (long unsigned int j = 0; j < inventory.size() - i - 1; j++) {
        if (Comparatorbyprice(newCraft[j], newCraft[j + 1])) {
          //Swap the elements to where the new vector is sorted in incremental order by total price
          //Original Watercraft (inventory) was UNaffected
          swap(newCraft[j], newCraft[j + 1]);
        }
      }
    }
    //Print new watercraft vector to display elements in incremental order by total price
    printBoat(newCraft);
}
