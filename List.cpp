#include "List.h"

Node* List::GetToIndex(int iIndex)
{
	Node* ptrReturn = this->ptrBegin;
	for (int iStep = 0; iStep < iIndex; ++iStep)
	{
		if (ptrReturn == this->ptrEnd)
		{
			return ptrReturn;
		}

		ptrReturn = ptrReturn->ptrNext;
	}


	return ptrReturn;

}