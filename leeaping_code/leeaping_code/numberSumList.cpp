#include "code_helper.h"
#include "numberSumList.h"

LCode_NumberSumList::LCode_NumberSumList( )
{
}

LCode_NumberSumList::~LCode_NumberSumList( )
{
}

LCode_SinglyList * LCode_NumberSumList::addTowNumbers( LCode_SinglyList * firstNumberList, LCode_SinglyList * secondNumberList )
{
	LCode_SinglyList *firstHeard = firstNumberList;
	LCode_SinglyList *secondHeard = secondNumberList;

	if( firstHeard->value == 0 || secondHeard->value == 0 ||
		firstHeard == nullptr || secondHeard == nullptr )
	{
		return nullptr;
	}

	int setNumber = 0; //��λ����
	while( firstHeard != nullptr || secondHeard != nullptr )
	{
		int x = (firstHeard != nullptr) ? firstHeard->value : 0;
		int y = (secondHeard != nullptr) ? secondHeard->value : 0;

		int sum = x + y + setNumber;

		setNumber = sum % 10;

	}

	return nullptr;
}
