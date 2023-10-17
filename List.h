#pragma once

constexpr int SIZE = 10;
struct Node
{
    int   iVal;
	Node* ptrNext;
	Node* ptrPrev;
};


struct List
{
public:

	//shared_ptr<int> ptrBegin;
	Node* ptrBegin;
	Node* ptrEnd = nullptr;


public:


	Node* GetToIndex(int iIndex);

private:


};