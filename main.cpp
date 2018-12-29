/*SystemTime is program for output system time*/
#include <windows.h>
#include <time.h>
#include <iostream>

int main()
{
	time_t t;
	struct tm *curtime;
	char buffer[256];

	t = time(0);

	curtime = localtime(&t);

	strftime(buffer, 256, "%d:%m:%Y %H:%M:%S\n", curtime);

	std::cout << buffer;

	return 0;
}
