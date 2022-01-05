#include <stdio.h>
#include <string.h>

struct Customer {
	char* name;
	double budget;	
};		
	
int main(void)
{
	struct Customer John = { "John", 100.0 };
	return 0;
}