#include <unistd.h>
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
typedef int t_bool;
#define FALSE 0
#define TRUE 1

t_bool EVEN(int n)
{ 
	if (n % 2 == 0) 
		return TRUE;
	else 
		return FALSE;
}

#define SUCCESS 0
