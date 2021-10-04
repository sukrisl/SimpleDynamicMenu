#include "Menu.h"

/*
    ? This tree search algorithm

    * C = Child
    * S = Sibling
    * PS = Parent Sibling

    * | C | S | P | Out        |
    * |------------------------|
    * | 0 | 0 | 0 | Search end |
    * | 0 | 0 | 1 | Go to P    |
    * | 0 | 1 | 0 | Go to S    |   
    * | 0 | 1 | 1 | Go to S    |    
    * | 1 | 0 | 0 | Go to C    |
    * | 1 | 0 | 1 | Go to C    |
    * | 1 | 1 | 0 | Go to C    |
    * | 1 | 1 | 1 | Go to C    |
*/
Item* Menu::searchItem(std::string whichItem) {
    Item* temp = root;

    while (temp != NULL) {
        if (whichItem == "") {
            std::string indent = "";
            for (int i = 0; i < temp->depth; i++) indent += "   ";
            std::cout << indent << "|_ " << temp->name << std::endl;
        }
        
        // Break the loop if item name found
        if (temp->name == whichItem) break;

        if (temp->child != NULL) { // Look for first child
            temp = temp->child;
        } else if (temp->sibling != NULL) {  // Look for sibling
            temp = temp->sibling;
        } else if (temp->parent != NULL) { // If there is no child or sibling, go back to parent
            temp = temp->parent;

            while (temp->sibling == NULL) { // Keep go back to previous parent if parent's sibling not found
                if (temp->parent == NULL) { // The search has reach the end, because root doesn't have sibling, neither parent :(
                    temp = NULL;
                    return temp;
                }

                temp = temp->parent;
            }

            temp = temp->sibling;
        }
    }

    return temp;
}

void Menu::initRoot(std::string name) {
    root = new Item;
    root->name = name;
    root->depth = 0;
}

void Menu::addChildren(std::string name, std::string toWhichParent) {
    Item* newItem = new Item;
    Item* temp = searchItem(toWhichParent);

    if (temp != NULL) {
        newItem->name = name;
        newItem->parent = temp;
        newItem->depth = (temp->depth)+1;
        temp->child = newItem;
    } else {
        std::cout << "failed to add " << name << " children\n" << std::endl;
        delete newItem;
    }
}

void Menu::addSibling(std::string name, std::string toWhichSibling) {
    Item* newItem = new Item;
    Item* temp = searchItem(toWhichSibling);

    if (temp != NULL) {
        newItem->name = name;
        newItem->parent = temp->parent;
        newItem->depth = temp->depth;
        temp->sibling = newItem;
    } else {
        std::cout << "failed to add " << name << " sibling\n" << std::endl;
        delete newItem;
    }
}

void Menu::showMenu() {
    if (root->child == NULL) {
        std::cout << "Nothing in the menu\n" << std::endl;
        return;
    }

    searchItem();
    std::cout << "\n" << std::endl;
}