#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "impl.h"

int patients_on_floor(FloorNodePtr curr) {
    // counts how many patients are currently on the floor
	int count = 0;
	while (curr != NULL) {
		count++;
		curr = curr->next;
	}
	return count;
}

// REMOVING PATIENTS

void remove_patient(FloorNodePtr node) {
	// delete patient from the floor
	if (node != NULL) {
	    free(node->patient);
	    free(node->pDisease);
		free(node);
	}
}

void remove_floor(FloorNodePtr curr) {
    // delete all patient from certain floor
	if (curr) {
		remove_floor(curr->next);
		remove_patient(curr);
	}
}