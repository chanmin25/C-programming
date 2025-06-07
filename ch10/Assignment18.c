/*파일명: Core C Assignment18

*내용 : 음원 사이트의 플레이리스트 기능을 구현하려고 한다. 이미 등록된 SONG 궂체 배열이 있을 떄, 전체 곡 목록을 보여주고 사용자로부터
* 플레이리스트에 추가할 노래를 번호로 선택하게 한다. 플레이리스트에 노래를 추가할 떄마다 플레이리스트의 곡 목록과 전체 재생 시간이
* 얼마인지를 출력한다. 플레이리스트에는 최대 5곡만 등록할 수 있다. 
*작성자 : 정찬민

*날짜 : 2025.06.07

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Am18_song.h"

void Assignment18()
{
	SONG songs[MAX_SONG] =
	{
		{"거짓말처럼 - TOIL & Gist", 208},
		{"연서 - 서동현", 211},
		{"Pain - 하현상", 316},
		{"다른 누구 말고 너야 - 김나영", 198},
		{"다 우리 얘기야 - 송하예", 209},
		{"LIMITLESS - FT아일랜드", 291},
		{"Another Day - 먼제이 키즈 & 펀치", 278}
	};

	SONG pl[MAX_PL];
	int playlistCount = 0;

	int choice;
	while (playlistCount < MAX_PL)
	{
		printSong(songs, MAX_SONG);
		printf("\n플레이리스트에 추가할 노래 번호 (1~%d, 0: 종료): ", MAX_SONG);
		scanf("%d", &choice);

		if (choice == 0) break;

		if (choice < 1 || choice > MAX_SONG)
		{
			printf("잘못된 선택입니다.\n\n");
			continue;
		}

		pl[playlistCount++] = songs[choice - 1];
		printPlaylist(pl, playlistCount);
	}

	if (playlistCount == MAX_PL)
	{
		printf("플레이리스트가 꽉 찼습니다. \n");
	}
	
}

int main()
{
	Assignment18();
	return 0;
}