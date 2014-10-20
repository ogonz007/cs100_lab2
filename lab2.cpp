#include <unistd.h>
#include <iostream>
#include <string>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;

int main()
{
	pid_t Pid = fork();
	if(Pid >= 0)
	{
		if(Pid == 0)
		{
			// child process
		}
		else
		{
			wait(NULL);
			// parent process
		}
	}
	else
	{
		perror("error with fork().");
	}

	pid_t Pid2 = fork();
	if(Pid2 >= 0)
	{
		if(Pid2 == 0)
		{
			// child process
		}
		else
		{
			// parent process
		}
	}
	else
	{
		perror("error with fork().");
	}













	return 0;
}
