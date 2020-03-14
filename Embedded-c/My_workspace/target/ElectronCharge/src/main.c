/*
 * main.c
 *
 *  Created on: Mar 12, 2020
 *      Author: Alain
 */

/* numbers of electrons responsible for producing the given charge
 * Number of electron = given charge / charge of electron - 1 */
# include <stdio.h>

int main() {

	float charge, chargeE, electron;

	printf("enter the charge\n ");
	fflush(stdout);
	scanf("%f", &charge);
	printf("enter the charge of electron\n ");
	scanf("%1e", &chargeE);
	fflush(stdout);

	electron = (charge / chargeE) * -1;

	printf("Total number of electrons = %1e\n", electron);
}

