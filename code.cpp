#include<iostream>
using namespace std;
int main()
{
	int alive;
	do
	{
		eat();
		sleep();
		code();
	} while (alive);
}
void eat()
{
	int code;
	int food = 0;
	if (code)
	{
		food++;
	}
}
void sleep()
{
	int code;
	int sleep;
	if (code)
	{
		sleep--;
	}
	else
	{
		sleep++;
	}
}
void code()
{
	sleep();
	eat();
}


