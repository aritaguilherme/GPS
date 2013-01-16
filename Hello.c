/*
 * Hello.cpp
 *
 *  Created on: 24 de Nov de 2012
 *      Author: Rita
 */
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <byteswap.h>
#include "add.h"
#define N 4


int main(int argc, char **argv) {
  //printf("Hello, world!\n");
	//int a, b;

	//a = 1;
	//b = 2;

	//c= a + b;
	//	a = add(10,10);
	//	b=sub(a);
	//	printf( "%d\n", a);
	//	printf("%d\n", b);
	//
	//	int d=6;
	//	int f=3;
	//
	//	f^=d;
	//	printf("%d",f);
	//	return 0;

	//	char *a;
	//	char *b;
	//
	//	a = (char *) malloc(10 * sizeof(char));
	//	b = (char *) malloc(10 * sizeof(char));
	//
	//	a = 'p';
	//	printf("a = %c\n", a);
	//
	//	memcpy(b, a, 1);
	//
	//	printf("b=%c", b);

	//	char *source = (char *) malloc(80 * sizeof(char));
	//	char *ptr = source;
	//	*source = 'a';
	//	ptr++;
	//	*ptr = 'b';
	//
	//	char *target = (char *) malloc(80 * sizeof(char));
	//	//*target = 'b';
	//
	//	printf( "Before memcpy, target is \"%s\"\n", target );
	//	memcpy( target, source, 2);
	//	printf( "After memcpy, target becomes \"%s\"\n", target );


	//char a = 'a';
	//printf("%x", a);

	//	typedef struct student{
	//	    char name[20];
	//	    int eng;
	//	    int math;
	//	    int phys;
	//	}STUDENT;
	//
	//	STUDENT data[]={
	//	    {"Jack", 82, 72, 58},
	//	    {"Young", 77, 82, 79},
	//	    {"Steeve", 52, 62, 39},
	//	    {"Mark", 61, 82, 88}
	//	};
	//	STUDENT *p;
	//
	//	int i;
	//
	//	    // Pointer variable p refers to the address of data
	//	    p = data;
	//
	//	    for(i=0; i<N; i++){
	//	        printf("%10s: English = %3d  Math = %3d   Physics = %3d\n",
	//	        p->name, p->eng, p->math, p->phys);
	//
	//	      // Shifting of address
	//	      p++;
	//	    }


	uint16_t a=0x1234;
	//	uint8_t b=0x12;
	//	uint8_t c=0x13;
	//	uint8_t d=0x14;
	//
	//	uint32_t final;
	//	printf("%x%x%x%x\n", a,b,c,d);
	//
	//	final = a << 24 | b << 16 | c << 8 | d;
	//	printf("%x\n",a&65472);
	//	printf("%x\n", final);

	int num = 1;
	   if(*(char *)&num == 1)
	   {
	      printf("Little-Endian\n");
	   }
	   else
	  {
	      printf("Big-Endian\n");
	  }

	printf("%x\n",a);
	printf("%p\n",(void *)&a);
	printf("%x\n",a=bswap_16(a));
	printf("%p\n",(void *)&a);

//	unsigned val = 0xFA000000;
//	unsigned char *byte = (unsigned char*)&val;
//	printf("0x%02x%02x%02x%02x\n", byte[0], byte[1], byte[2], byte[3]);

	unsigned val = 65486;
	//val=bswap_32(val);
	unsigned char *byte = (unsigned char*)&val;
	int i;

	for (i = 0; i < sizeof(val); i++)
	    printf("\tByte-%d\t0x%02x", i,byte[i]);
	printf("\n");



	return 0;
}

