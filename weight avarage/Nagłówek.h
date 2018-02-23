#include <iostream>
#include <string>

using namespace std;
void oceny();
class Przedmioty
{
public:
	void przedmioty();
	friend void oceny();
};


class Oceny
{
public:
	friend void przedmioty();
	void oceny();
};
