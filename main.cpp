// COMSC-210 | Lab 36 | Christine Susic

#include <iostream>
#include <fstream>
#include "StringBinaryTree.h"
using namespace std;

int main() {
    ifstream fin("codes.txt"); //open file
    int count = 0; //counter
    string codes; //string to read from file
    StringBinaryTree tree; //binary tree
    
    //read codes from file into tree
    while (getline(fin, codes)) {
        tree.insertNode(codes);
        count++;
    }

    fin.close(); //close file
    
    StringBinaryTree tree2; //binary tree2
    //strings to search tree
    string addNode, deleteNode, searchNode, modifyNode;
    
    //menu
    cout << "String Binary Tree Menu" << endl;
    //insert node
    cout << "Add" << endl;
    cin >> addNode;
    tree.insertNode("Hello");
    //delete node
    cout << "Delete" << endl;
    tree.remove("wumzrtoe");
    //search for node
    cout << "Search" << endl;
    tree.searchNode("wuNDD54s");
    //modify node
    cout << "Modify" << endl;
    tree.
    
    tree.displayInOrder();
  
    return 0;
}