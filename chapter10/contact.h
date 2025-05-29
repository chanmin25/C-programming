#pragma once
#pragma once
#ifndef _CONTACT_H_12345678
#define _CONTACT_H_12345678

enum gender { MAN, WOMAN };
typedef enum gender EGender;

struct contact
{
	char name[24];
	char phone[24];
	EGender gender;
	int year;
};

typedef struct contact Contact;


int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);
int isEqualContactPtr(const Contact* a, Contact* b);
void printContactPtr(const Contact* ct);


#endif