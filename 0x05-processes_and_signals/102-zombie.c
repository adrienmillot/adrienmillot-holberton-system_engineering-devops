#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * infinite_while - infinite loop to simulate interaction
 *
 * Return: 0 if success
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - program that creates 5 zombie processes
 *
 * Return: 0 if success
 */
int main(void)
{
	pid_t zombie;
	int cLoop;

	for (cLoop = 0; cLoop < 5; cLoop++)
	{
		zombie = fork();
		if (zombie == 0)
			exit(EXIT_FAILURE);
		printf("Zombie process created, PID: %d\n", zombie);
	}
	infinite_while();

	return (EXIT_SUCCESS);
}
