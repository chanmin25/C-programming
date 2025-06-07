#include <stdio.h>
#include "Am13_square.h"

void print_rect(RECT p)
{
	printf("[RECT 좌하단점: (%d, %d) 우상단점: (%d, %d)]", p.top.x, p.top.y, p.bottom.x, p.bottom.y);
}