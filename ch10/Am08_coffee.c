#include <stdio.h>
#include "Am08_coffee.h"

void print_product(PRODUCT p)
{
	printf("[%s %d원 재고: %d개]", p.name, p.price, p.inventory);
}

