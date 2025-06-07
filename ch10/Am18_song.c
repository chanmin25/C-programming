#include <stdio.h>
#include "Am18_song.h"

void printSong(SONG songs[], int numsong)
{
	printf("=== ��ü �� ��� ===\n");
	for (int i = 0; i < numsong; i++)
	{
		printf("%d. %s (%d��)\n", i + 1, songs[i].list, songs[i].second);
	}
}

void printPlaylist(SONG pl[], int count)
{
	printf("=== ���� �÷��̸���Ʈ ===\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d. %s (%d��)\n", i + 1, pl[i].list, pl[i].second);
	}
	printf("�� ��� �ð�: %d�� \n\n", totalsecond(pl, count));
}

int totalsecond(SONG pl[], int count)
{
	int total = 0;
	for (int i = 0; i < count; i++)
	{
		total += pl[i].second;
	}
	return total;
}