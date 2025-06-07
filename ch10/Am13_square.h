#pragma once

#define RECT_H

typedef struct
{
	int x;
	int y;
}POINT;

typedef struct
{
	POINT top;
	POINT bottom;
}RECT;

void print_rect(RECT p);
