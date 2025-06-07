#include <stdio.h>
#include "Am18_song.h"

void printSong(SONG songs[], int numsong)
{
	printf("=== 전체 곡 목록 ===\n");
	for (int i = 0; i < numsong; i++)
	{
		printf("%d. %s (%d초)\n", i + 1, songs[i].list, songs[i].second);
	}
}

void printPlaylist(SONG pl[], int count)
{
	printf("=== 현재 플레이리스트 ===\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d. %s (%d초)\n", i + 1, pl[i].list, pl[i].second);
	}
	printf("총 재생 시간: %d초 \n\n", totalsecond(pl, count));
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