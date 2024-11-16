#include<stdio.h>

void MoveDisk(int diskNumber, int startPost, int endPost, int midPost)
{
	if(diskNumber > 1)
	{
		MoveDisk(diskNumber - 1, startPost, midPost, endPost);
		printf("move disk %d from post %d to post %d\n", diskNumber, startPost, endPost);
		MoveDisk(diskNumber - 1, midPost, endPost, startPost);
	}
	else
	{
		printf("move disk %d from post %d to post %d\n", diskNumber, startPost, endPost);
	}
}

int main()
{
	MoveDisk(3, 1, 3, 2);
	return 0;
}
