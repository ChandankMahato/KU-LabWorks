#include "ArrBST.h"
#include <iostream>

int main()
{
    ArrBST tree;
    int elem;
    /* add keys to the tree */
    tree.add(40, 40);
    tree.add(1, 1);
    tree.add(70, 70);
    tree.add(23, 23);
    tree.add(20, 20);
    tree.add(55, 55);
    tree.add(89, 89);
    tree.add(34, 34);
    tree.add(66, 66);
    tree.add(2, 2);
    tree.add(45, 45);
    tree.add(17, 17);
    tree.add(11, 11);
    tree.add(60, 60);
    tree.inorder(); //traversing inorder
    tree.min(elem); // getting min value
    std::cout << elem << "\n";
    tree.max(elem); // getting max value
    std::cout << elem << "\n";

    std::cout << tree.search(17) << "\n"; // search for key= 17,returns 1
    tree.remove(17);                      //remove key = 17
    tree.remove(89);                      // remove key = 89
    tree.inorder();                       // traversing again
    tree.max(elem);                       //getting new max value
    std::cout << elem << "\n";
    return 0;
}