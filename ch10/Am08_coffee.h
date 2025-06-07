#pragma once

#define PRODUCT_H

#define NAME_LEN 100

typedef struct
{
	char name[NAME_LEN];
	int price;
	int inventory;
} PRODUCT;

void print_product(PRODUCT p);
