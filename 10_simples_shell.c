#include "signal.h"

/**
 * sighandler - software generated interrupt.
 * @n: unused variable
 *
 * Return: void
 */

void sighandle(int n__attribute__((unused)))
{
	write(STDERR_FILENO, "\n($)", 5);
}