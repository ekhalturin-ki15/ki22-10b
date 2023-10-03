#pragma once

struct Node
{
	int iVal;
	Node* ptrNext;
	//Node* ptrPrev;
};


struct List
{
public:

	//shared_ptr<int> ptrBegin;
	Node* ptrBegin;
	Node* ptrEnd;


public:


	Node* GetToIndex(int iIndex);

private:


};