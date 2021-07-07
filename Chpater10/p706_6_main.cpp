#include "p706_6.h"

int main()
{
	Move move(2, 3);
	
	move.showmove();

	Move move2(1, 2);
	move2.showmove();
	Move moveadd = move.add(move2);
	moveadd.showmove();

	moveadd.reset();
	moveadd.showmove();


}