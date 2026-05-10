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
    
    //read 10 codes from file into tree
    while (count < 10) {
        getline(fin, codes);
        tree.insertNode(codes);
        count++;
    }
    
    fin.close(); //close file
    
    //choice for menu
    int choice;
    //string input for tree menu
    string addNode, deleteNode, searchForNode, modifyNode;
    do {
        //menu
        cout << "\nString Binary Tree Menu: " << endl;
        cout << "[1] Add Node " << endl;
        cout << "[2] Delete Node " << endl;
        cout << "[3] Search for Node " << endl;
        cout << "[4] Modify Node Order (post order) " << endl;
        cout << "[5] Display Nodes (in order) " << endl;
        cout << "[0] Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    
        switch (choice) {
            //1. Insert node
            case 1:
                cout << "Add Node: ";
                cin >> addNode;
                tree.insertNode(addNode);
                break;
            //2. Delete node
            case 2:
                cout << "Delete Node: ";
                cin >> deleteNode;
                tree.remove(deleteNode);
                break;
            //3. Search for node
            case 3:
                cout << "Search for node: ";
                cin >> searchForNode;
                cout << "(O for not found, 1 for found): ";
                cout << tree.searchNode(searchForNode) << endl;
                break;
            //4. Modify nodes
            case 4:
                cout << "\nModify Node Order (post order): " << endl;
                tree.displayPostOrder();
                break;
            //5. Display nodes
            case 5:
                cout << "\nDisplay Nodes (in order): " << endl;
                tree.displayInOrder();
                break;
            //0. Exit
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "\nInvalid choice. Please try again." << endl;
        }
    } while (choice != 0);
  
    return 0;
}