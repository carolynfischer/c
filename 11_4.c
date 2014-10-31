/* Write code that performs two tasks: defines a structure named data that
 * contains one type int member and two type float members, and declares
 * an instance of type data named info. */

struct data {
	int i_mbr;
	float f_mbr1;
	float f_mbr2;
}

/* Write code that declares and initializes pointer to info */

struct data *p_info;
p_info = &info;

/* Continuing with excercise 4, show two ways of using pointer notation 
 * to assign the value 5.5 to the first float member of info. */

p_info->f_mbr1;
(*p_info).f_mbr1;
