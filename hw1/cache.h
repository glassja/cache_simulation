// -----------------------------------
// CSCI 340 - Operating Systems
// Fall 2016
// web.h header file
// 
// Homework 3
//
// -----------------------------------


// --------------------------------
// CONSTANTS
// --------------------------------
// RETURN VALUES
#define OK 0
#define FAIL -1

// DEBUG FLAGS
#define CACHE_DEBUG 0

// CMF
#define DM 1
#define FA 2
#define SA 3	

// Simulator parameters
#define NUM_OF_LINE_BITS 3
#define NUM_OF_TAG_BITS_DM 3;
#define NUM_OF_TAG_BITS_FA 6
#define NUM_OF_LINES 8

#define HIT 1
#define MISS 0
#define YES 1
#define NO 0
#define UNK -1
#define ZERO 0


// --------------------------------
// Structure definitions
// --------------------------------

typedef struct {

	int tag;
	int hit_count;

} cache_line;

// --------------------------------
// GLOBAL Variables
// --------------------------------

cache_line** cache;

// ------------------------------------
// Function prototype that initializes the 
// cache array. Each element in the cache 
// array is cache_line struct (see above).
// 
//
// Arguments:	web_t pointer
//
// Return:     	OK on success, FAIL on error
//

int initializeCache( unsigned int number_of_lines );


// ------------------------------------
// Function prototype that reads the cache 
// and returns the byte at the specified 
// physical memory address location.
// 
//
// Arguments:	cache mapping function (cmf)
//		memory address pointer (hex_addr)
//		found variable pointer (1=cache hit, 0=cache miss)
//		replace variable pointer (1=replacment, 0=no replacement)
//
// Return:     	byte value at specified memory location (no error)
//		FAIL (error)
//

int cread( unsigned int cmf, unsigned int* hex_addr, unsigned int* found, unsigned int* replace);


// ------------------------------------
// Function prototype that you can use to 
// visualize the cache. This can be used 
// for debugging purposes.
// 
//
// Arguments:	none
//
// Return:     	none
//

void cprint();
