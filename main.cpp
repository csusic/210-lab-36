// COMSC-210 | Lab 36 | Christine Susic

#include <iostream>
#include <fstream>
#include <vector>
#include "StringBinaryTree.h"
using namespace std;

int main() {
    ifstream fin("codes.txt"); //open file
    int count = 0; //counter
    string codes; //string to read from file
    StringBinaryTree tree;
    
    while (getline(fin, codes)) {
            tree.insertNode(codes);
            count++;
    }
    
    tree.displayInOrder(); //display contents

    fin.close(); //close file
    
    StringBinaryTree tree2;
    tree2.insertNode("Hello"); //insert node
    tree2.displayInOrder(); //display contents

    return 0;
}