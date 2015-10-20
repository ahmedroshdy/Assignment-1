#include"Person.h"


Person::Person(const string & ln, const char *fn )
{
	lname = ln;
	strcpy_s(fname, fn);
 }
 
 void Person::Show()const {
	 cout << fname<<" "<<lname ;

 }

 void Person::FormalShow()const{
	 cout << lname << ", " << fname;
 }