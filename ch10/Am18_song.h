#pragma once

#define	SONG_H

#define MAX_SONG 7
#define MAX_PL 5
#define LIST_LEN 100

typedef struct
{
	char list[LIST_LEN];
	int second;
}SONG;

void printSong(SONG songs[], int numsong);
void printPlaylist(SONG pl[], int count);
int totalsecond(SONG pl[], int count);
