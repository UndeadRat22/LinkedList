#include "List.h"

#define bint BigInteger
#define mtable MultiplicationTable

typedef enum {false, true} bool;

typedef enum {positive = 0,	negative = 1} Sign;

typedef struct BigInteger 
{
	List* list;
	Sign sign;
} BigInteger;

typedef struct MultiplicationTable
{
	bint values[10];
} MultiplicationTable;


bint bint_cpy(bint);			/*copies a given integer to a new memory location, does not delete the old one*/
bint string_to_bint(char*);		/*converts an ascii string to a big integer*/
char* bint_to_string(bint);		/*converts a big integer to an ascii string*/

bint bint_add(bint, bint);	/* a + b*/
bint bint_sub(bint, bint);	/* a - b*/
bint bint_mul(bint, bint);	/* a * b*/
bint bint_div(bint, bint);	/* a / b*/
bint bint_mod(bint, bint);
mtable get_table(bint);		/* returns the big integer multiplied by 0, 1, 2, ... 9*/
bool is_zero(bint);						/* checks and returs 1 if the given bint is zero
												   else returns 0*/
Sign div_mult_sign(Sign, Sign);					/*returns what sign should the new bint have when doing division or multiplication*/
void print_table(mtable);	/*debug for table values*/
/* logical operations */
bool bint_equal(bint a, bint b);						/* true if a == b */
bool bint_greater_than(bint a, bint b);					/* true if a > b */
bool bint_lesser_than(bint a, bint b);					/* true if a < b */

char* unsigned_to_string(unsigned a);