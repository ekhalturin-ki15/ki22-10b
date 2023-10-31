#pragma once
#include <vector>


struct FSolve;


//template <typename T>
struct Node
{
    Node(Node* _fParent, int _iVal);

	Node *fLeft; // 8 ����
	Node *fRight; // 8 ����
	Node *fParent; // 8 ����

	int iVal;
};

struct BinTree 
{

public:
	BinTree();

	Node *ptrRoot;
	std::vector<int> GetSortTree();
	void Insert(int iNewVal);

	Node* GetNodePosition(Node* ptrNow, int iVal);

private:

	void RectSearchLMR(std::vector<int> &arrResult, Node *ptrNow);


};
