#include"move.h"

Move::Move(double a , double b )// sets x, y to a,b
{
	x = a;
	y = b;
} 
void Move::showmove() const // shows current x, y values
{
	cout << "X = " << x << "\t" << "Y = " << y << "\n";
}

// this function adds x of m to x of invoking object	to get new x,
// adds y of m to y of invoking object to get new y,creates a new
// move object initialized to new x, y values and returns it
Move Move::add(const Move & m) const{
	double x = m.x + this->x;
	double y = m.y + this->y;
	Move move(x, y);
	return move;

}

void Move::reset(double a , double b ) // resets x,y to a, b
{
	x = a;
	y = b;
}