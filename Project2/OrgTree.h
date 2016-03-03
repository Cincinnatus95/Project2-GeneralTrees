#pragma once
#include<string>
#include"TreeNode.h"
using namespace std;
#define TREENODEPTR TreeNode* 
#define TREENULLPTR Null 
class OrgTree
{
public:
	OrgTree();//default constructor
	~OrgTree();//deconstructor
	void  addroot();// add a root to the tree, if there is already a root then the whole tree becomes a sub tree of the new root.
	unsigned int getSize();// returns the number of employees in the organization tree.
	TREENODEPTR getRoot();//return a pointer to the root node of the tree.
	TREENODEPTR leftmostChild(TREENODEPTR node);// returns the leftmost child of the node pointer that is passed.
	TREENODEPTR rightSibling(TREENODEPTR node);// returns the right sibling of the node.
	void printSubTree(TREENODEPTR subTreeRoot);// prints the subtree starting at the node that is passed as a pointer.
	TREENODEPTR find(string title);// the the employee by the title given
	bool read(string filename);// read in an existing text file containing an OrgTree and create a Tree from it.
	void write(string filename);// output the tree structure to a text file.
	void hire(TREENODEPTR, string newTitle, string newName);// add a new node as the right child of the node pointer passed in
	bool fire(string formerTitle);// remove the employee whos title matches the one passed in. 
private:
	
};

OrgTree::OrgTree()
{
}

OrgTree::~OrgTree()
{
}
