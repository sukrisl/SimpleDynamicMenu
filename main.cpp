#include "Menu.h"

int main() {
    Menu menuSuk;

    menuSuk.initRoot("root");
    menuSuk.showMenu();

    menuSuk.addChildren("A", "root");
        menuSuk.addChildren("A_1", "A");
        menuSuk.addSibling("A_2", "A_1");
        menuSuk.addSibling("A_3", "A_2");
    menuSuk.addSibling("B", "A");
        menuSuk.addChildren("B_1", "B");
        menuSuk.addSibling("B_2", "B_1");
                menuSuk.addChildren("B_2_1", "B_2");
                menuSuk.addSibling("B_2_2", "B_2_1");
                menuSuk.addSibling("B_2_3", "B_2_2");
                    menuSuk.addChildren("B_2_3_1", "B_2_3");
                    menuSuk.addSibling("B_2_3_2", "B_2_3_1");
                    menuSuk.addSibling("B_2_3_3", "B_2_3_2");
                    menuSuk.addSibling("B_2_3_4", "B_2_3_3");
                    menuSuk.addSibling("B_2_3_5", "B_2_3_4");
                    menuSuk.addSibling("B_2_3_6", "B_2_3_5");
                menuSuk.addSibling("B_2_4", "B_2_3");
    menuSuk.addSibling("C", "B");
        menuSuk.addChildren("C_1", "C");
            menuSuk.addChildren("C_1_1", "C_1");
                menuSuk.addChildren("C_1_1_1", "C_1_1");
                menuSuk.addSibling("C_1_1_2", "C_1_1_1");
                    menuSuk.addChildren("C_1_1_2_1", "C_1_1_2");
                    menuSuk.addSibling("C_1_1_2_2", "C_1_1_2_1");
                    menuSuk.addSibling("C_1_1_2_3", "C_1_1_2_2");
                    menuSuk.addSibling("C_1_1_2_4", "C_1_1_2_3");
                        menuSuk.addChildren("C_1_1_2_4_1", "C_1_1_2_4");
                        menuSuk.addSibling("C_1_1_2_4_2", "C_1_1_2_4_1");
                        menuSuk.addSibling("C_1_1_2_4_3", "C_1_1_2_4_2");
                        menuSuk.addSibling("C_1_1_2_4_4", "C_1_1_2_4_3");
                menuSuk.addSibling("C_1_1_3", "C_1_1_2");
                menuSuk.addSibling("C_1_1_4", "C_1_1_3");
            menuSuk.addSibling("C_1_2", "C_1_1");
            menuSuk.addSibling("C_1_3", "C_1_2");
            menuSuk.addSibling("C_1_4", "C_1_3");
    menuSuk.addSibling("D", "C");
        menuSuk.addChildren("D_1", "D");
            menuSuk.addChildren("D_1_1", "D_1");
                menuSuk.addChildren("D_1_1_1", "D_1_1");
                menuSuk.addSibling("D_1_1_2", "D_1_1_1");
                    menuSuk.addChildren("D_1_1_2_1", "D_1_1_2");
                    menuSuk.addSibling("D_1_1_2_2", "D_1_1_2_1");
                    menuSuk.addSibling("D_1_1_2_3", "D_1_1_2_2");
                    menuSuk.addSibling("D_1_1_2_4", "D_1_1_2_3");
                        menuSuk.addChildren("D_1_1_2_4_1", "D_1_1_2_4");
                        menuSuk.addSibling("D_1_1_2_4_2", "D_1_1_2_4_1");
                        menuSuk.addSibling("D_1_1_2_4_3", "D_1_1_2_4_2");
                        menuSuk.addSibling("D_1_1_2_4_4", "D_1_1_2_4_3");
                menuSuk.addSibling("D_1_1_3", "D_1_1_2");
                menuSuk.addSibling("D_1_1_4", "D_1_1_3");
            menuSuk.addSibling("D_1_2", "D_1_1");
            menuSuk.addSibling("D_1_3", "D_1_2");
            menuSuk.addSibling("D_1_4", "D_1_3");
        menuSuk.addSibling("D_2", "D_1");
        menuSuk.addSibling("D_3", "D_2");
        menuSuk.addSibling("D_4", "D_3");
        menuSuk.addSibling("D_5", "D_4");

    menuSuk.showMenu();
    // menuSuk.showMenu();

    return 1;
}