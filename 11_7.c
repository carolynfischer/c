/* Create a structure containing five strings: address1, address2, city, state,
 * and zip. Create a typedef called RECORD that can be used to create instances	
 * of this structure. */

typedef struct {
	char address1[31];
	char address2[31];
	char city[11];
	char state[3];
	char zip[11];
} RECORD;

/* Using typedef from excercise 7, allocate and initialize an element called myaddress */

RECORD myaddress = { "RTSoftware",
		     "P.O. Box 1213",
		     "San Francisco", "CA", "612323-23123-23" };
