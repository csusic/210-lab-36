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
    
    //strings for tree menu
    string addNode, deleteNode, searchForNode, modifyNode;
    
    StringBinaryTree tree2;
    tree2.insertNode("3");
    tree2.insertNode("Fun");
    tree2.insertNode("5");
    
    //menu
    cout << "String Binary Tree Menu" << endl;
    //insert node
    cout << "Add Node: ";
    cin >> addNode;
    tree2.insertNode(addNode);
    //delete node
    cout << "Delete Node: ";
    cin >> deleteNode;
    tree2.remove(deleteNode);
    //search for node
    cout << "Search for Node: ";
    cin >> searchForNode;
    tree2.searchNode(searchForNode);
    //modify node
    cout << "Modify Node: ";
    cin >> modifyNode;
    //tree.
    
    tree2.displayInOrder();
  
    return 0;
}