#include "BinTree.h"

Node::Node(Node* _fParent, int _iVal)
{
    fParent = _fParent;
    fLeft   = nullptr;
    fRight  = nullptr;
    iVal     = _iVal;
}

BinTree::BinTree()
{ 
    ptrRoot = nullptr;
}

std::vector<int> BinTree::GetSortTree()
{
    std::vector<int> arrResult;
    RectSearchLMR(arrResult, ptrRoot);

    return arrResult;
}

void BinTree::Insert(int iNewVal) 
{ 
    if (ptrRoot = nullptr)
    {
        ptrRoot = new Node(nullptr, iNewVal);
        return;
    }

    Node* ptrNewNode = GetNodePosition(ptrRoot, iNewVal);
    const int& iCurVal    = ptrNewNode->iVal;

    if (iNewVal < iCurVal)
    {

    }
    else
    {

    }



}

Node* BinTree::GetNodePosition(Node* ptrNow, int iVal) 
{ 
    const int& iCurVal = ptrNow->iVal;





}

void BinTree::RectSearchLMR(std::vector<int>& arrResult, Node* ptrNow)
{
    if (nullptr == ptrNow) return;

    if (ptrNow->fLeft)
    {
        RectSearchLMR(arrResult, ptrNow->fLeft);
    }
    arrResult.push_back(ptrNow->iVal);
    if (ptrNow->fRight)
    {
        RectSearchLMR(arrResult, ptrNow->fRight);
    }
}