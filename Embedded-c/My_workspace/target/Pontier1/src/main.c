/*
 * main.c
 *
 *  Created on: Mar 12, 2020
 *      Author: Alain
 */

# include <stdio.h>

int main() {
	// POINTER ADDRESS 0x00007FFF8E3C824

	char *address1 = (char*) 0x00007FFF8E3C824;

	printf("%s", &address1);
	fflush(stdout);
}

