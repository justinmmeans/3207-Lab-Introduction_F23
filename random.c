//Justin Means
//Function program to generate a random character for print_random.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){

    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	return alphabet[rand() % 25 + 0];
}