/*���ϸ�: Core C Assignment18

*���� : ���� ����Ʈ�� �÷��̸���Ʈ ����� �����Ϸ��� �Ѵ�. �̹� ��ϵ� SONG ��ü �迭�� ���� ��, ��ü �� ����� �����ְ� ����ڷκ���
* �÷��̸���Ʈ�� �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�. �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ� ��ü ��� �ð���
* �������� ����Ѵ�. �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�. 
*�ۼ��� : ������

*��¥ : 2025.06.07

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Am18_song.h"

void Assignment18()
{
	SONG songs[MAX_SONG] =
	{
		{"������ó�� - TOIL & Gist", 208},
		{"���� - ������", 211},
		{"Pain - ������", 316},
		{"�ٸ� ���� ���� �ʾ� - �質��", 198},
		{"�� �츮 ���� - ���Ͽ�", 209},
		{"LIMITLESS - FT���Ϸ���", 291},
		{"Another Day - ������ Ű�� & ��ġ", 278}
	};

	SONG pl[MAX_PL];
	int playlistCount = 0;

	int choice;
	while (playlistCount < MAX_PL)
	{
		printSong(songs, MAX_SONG);
		printf("\n�÷��̸���Ʈ�� �߰��� �뷡 ��ȣ (1~%d, 0: ����): ", MAX_SONG);
		scanf("%d", &choice);

		if (choice == 0) break;

		if (choice < 1 || choice > MAX_SONG)
		{
			printf("�߸��� �����Դϴ�.\n\n");
			continue;
		}

		pl[playlistCount++] = songs[choice - 1];
		printPlaylist(pl, playlistCount);
	}

	if (playlistCount == MAX_PL)
	{
		printf("�÷��̸���Ʈ�� �� á���ϴ�. \n");
	}
	
}

int main()
{
	Assignment18();
	return 0;
}