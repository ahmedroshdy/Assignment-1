
#include"move.h"

void main(){
	Move a(3, 4), b(2, 5),c;
	a.showmove();
	b.showmove();
	c= a.add(b);
	c.showmove();
	c.reset(1, 2);
	c.showmove();
}