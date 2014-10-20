#include <unistd.h>
#include <iostream>
#include <string>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	int tot = 10;
	int num = 4;
	pid_t pid;
	char arr[] = {'A','B','C','D','\0'};
	srand(time(NULL));
	for(int i = 1; i <= num; i++)
	{
		pid = fork();
		if(pid)
		{
			break;
		}
		else if(pid == -1)
			perror("error with fork().");
		cout << "pid #" << getpid() << endl;
		int x = rand() % 4;
		if(arr[x] == 0)
		{
			while(arr[x] == 0)
				x = rand() % 4;
		}
		if(arr[x] != 0)
		{
			for(int i = 0; i < tot; i++)
			{
				cout << arr[x];
			}
			cout << endl;
			arr[x] = 0;
		}
	}

	wait(NULL);
	return 0;
}
