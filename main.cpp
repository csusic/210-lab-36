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
    
    //int for menu
    int choice;
    //strings for tree menu
    string addNode, deleteNode, searchForNode, modifyNode;
    do {
        //menu
        cout << "String Binary Tree Menu: " << endl;
        cout << "[1] Add Node " << endl;
        cout << "[2] Delete Node " << endl;
        cout << "[3] Search for Node " << endl;
        cout << "[4] Modify Node " << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;
    
        switch (choice) {
            //1. Insert node
            case 1:
                cin >> addNode;
                tree.insertNode(addNode);
                break;
            //2. Delete node
            case 2:
                 cin >> deleteNode;
                tree.remove(deleteNode);
                break;
            //3. Search for node
            case 3:
                cin >> searchForNode;
                tree.searchNode(searchForNode);
                break;
            //4. Modify node
            case 4:
                cin >> modifyNode;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
    
    tree.displayInOrder();
  
    return 0;
}