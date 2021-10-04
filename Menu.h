#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <stdio.h>

class Item {
 public:
    std::string name;
    int value;
    int depth;

    Item* parent;
    Item* sibling;
    Item* child;
};

class Menu {
 private:
    Item* root;
    int depth;

 public:

    // Menu(std::string name);
    // ~Menu() {};

    Item* searchItem(std::string whichItem = "");
    void initRoot(std::string name);
    void addChildren(std::string name, std::string toWhichParent);
    void addSibling(std::string name, std::string toWhichSibling);
    void removeChildren(std::string which);
    void showMenu();
    void navigate();
};

#endif