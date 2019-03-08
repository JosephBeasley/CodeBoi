/*
Name: Joseph Beasley
Date: 27FEB2019
project: surfin bird struct
*/
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////// PERFORMANCE LAB I.5.A-4 ////////////////////////////////////////////////
/////////////////////////////////////////////// FUNCTION ARGUMENTS //////////////////////////////////////////////////
///////////////////////////////////////////////// "Surfin' Bird" ////////////////////////////////////////////////////
/////////////////////////////////////////////// Instructor Solution /////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The students must define find_the_word() as specified below.
// Do *NOT* change main() as it contains 56 tests created for find_the_word()
// char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
// Return Value
//     char pointer to the first occurrence of searchWord in the null-terminated string found at sentence_ptr
//     NULL for all other situations (e.g., sentence_ptr is NULL, searchWord_ptr is NULL, errorCode_ptr is NULL)
// Parameters
//     sentence_ptr - char pointer to a null-terminated string which represents the sentence to search
//     searchWord_ptr - char pointer to a null-terminated string which represents the key to search for
//     errorCode_ptr - int pointer which will store an error code provided by find_the_word (see below)
// Purpose - Safely (e.g., watch for array overruns, mind the null-terminators) locate the memory address
//     of the string found at searchWord_ptr within sentence_ptr
// Requirements
//     Only Address Arithmetic is permitted to access sentence_ptr and searchWord_ptr.  The test input utilizes
//         methods other than address arithmetic but that is none of your concern.
//     Assign your error code to the memory address found in errorCode_ptr.  The error codes are #defined as constant
//         MACROS at the beginning of main() but are also listed here:
//         DEFAULT_ERROR_CODE - This is a default value used in testing.  The error code variable is initialized
//             with this value.  The error code variable is also reset to this value after each test.  The
//             students will not need to return this code.  It is entirely restricted to testing and debugging.
//         ERROR_CODE_SUCCESS - This is not an actual error.  Rather, it indicates your function has successfully
//             completed.  Use this MACRO to indicate success.
//         ERROR_NULL_SENTENCE_POINTER - This MACRO is to be used when sentence_ptr is NULL.  The return value of 
//             the function will of course be NULL but the function also needs to store this MACRO in the memory 
//             address stored in errorCode_ptr.
//         ERROR_NULL_SEARCH_POINTER - This MACRO is to be used when searchWord_ptr is NULL.  The return value 
//             of the function will of course be NULL but the function also needs to store this MACRO in the memory 
//             address stored in errorCode_ptr.
//         ERROR_SEARCH_NOT_FOUND - This MACRO is to be used when the string located at searchWord_ptr has not
//             been found inside the string located at sentence_ptr.  The return value of the function will of
//             course be NULL but the function also needs to store this MACRO in the memory address stored in
//             errorCode_ptr.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

/* Error code default value */
#ifdef DEFAULT_ERROR_CODE
#undef DEFAULT_ERROR_CODE
#endif
#define DEFAULT_ERROR_CODE 90318

/* Just in case NULL was undefined... */
#ifndef NULL
#define NULL ((void*) 0)
#endif

/* Error code for success */
#ifdef ERROR_CODE_SUCCESS
#undef ERROR_CODE_SUCCESS
#endif
#define ERROR_CODE_SUCCESS ((int)1)

/* Error code if sentence_ptr is NULL */
#ifdef ERROR_NULL_SENTENCE_POINTER
#undef ERROR_NULL_SENTENCE_POINTER
#endif
#define ERROR_NULL_SENTENCE_POINTER ((int)-1)

/* Error code if searchWord_ptr is NULL */
#ifdef ERROR_NULL_SEARCH_POINTER
#undef ERROR_NULL_SEARCH_POINTER
#endif
#define ERROR_NULL_SEARCH_POINTER ((int)-2)

/* Error code is the string in searchWord_ptr can not be found in the string located at sentence_ptr */
#ifdef ERROR_SEARCH_NOT_FOUND
#undef ERROR_SEARCH_NOT_FOUND
#endif
#define ERROR_SEARCH_NOT_FOUND ((int)-3)

/* Standard array size for manual dimension declaration */
#ifdef BUFF_SIZE
#undef BUFF_SIZE
#endif
#define BUFF_SIZE 1024

/*
 * FUNCTION:   find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
 *
 * ARGUMENTS:  sentence_ptr is a char pointer to a null-terminated string to search
 *             searchWord_ptr is a char pointer to a null-terminated string to find inside sentence_ptr
 *             errorCode_ptr is an int pointer.  Store your error code at this memory address.
 *
 * RETURNS:	   char pointer to the first occurrence of the searchWord_ptr string found in the
 *                 sentence_ptr string.  The char pointer should be a memory address in the
 *                 sentence_ptr string and this memory address should represent the first 'index'
 *                 of the searchWord_ptr string.  This memory address from the sentence_ptr string
 *                 should dereference to a value equivalent to searchWord_ptr[0].
 *             All other occurences should return NULL.  This includes, but is not limited to, the
 *                 following:
 *                     sentence_ptr is NULL
 *                     searchWord_ptr is NULL
 *                     errorCode_ptr is NULL
 *                     the searchWord_ptr string is not found in the sentence_ptr string
 *
 * NOTES:      This function only utilizes address arithmetic to access information within the
 *                 null-terminated char array found at both sentence_ptr and searchWord_ptr
 *             Only access elements of the char array found at both sentence_ptr and searchWord_ptr
 *                 using address arithmetic (AKA pointer math).  The definition of this function should 
 *                 be entirely devoid of the [ and ] characters.  (e.g., sentence_ptr[i] is forbidden)
 *             The only guarantees for the arguments are:sdfsdfsdfsdfsdf
 *                 Any string found at sentence_ptr is null-terminated
 *                 Any string found at searchWord_ptr is null-terminated
 *             There is no guarantee sentence_ptr has an address (return NULL if it's NULL and assign the
 *                 proper error code)
 *             There is no guarantee searchWord_ptr has an address (return NULL if it's NULL and assign the
 *                 proper error code)
 *             There is no guarantee errorCode_ptr has an address (return NULL if it's NULL and assign the
 *                 proper error code)
 *             There is no guarantee the string found at sentence_ptr contains the string found at 
 *                 searchWord_ptr (return NULL if the string at searchWord_ptr is not found and assign the
 *                 proper error code)
 *             There is no guarantee the strings found at both sentence_ptr and searchWord_ptr will
 *                 return a string length longer than zero (0)
 */
char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr);

struct SurfinBirdTestStruct
{
    char *inputString_ptr;
    char *searchWord_ptr;
    char *expectedReturn_ptr;
    int expectedErrorCode;
};


int main(void)
{
	int i = 0; 
	int numTestsRun = 0;
	int numTestsPassed = 0;
	int putErrorCodeHere = DEFAULT_ERROR_CODE;
	char * tempReturnValue_ptr = NULL;
	char testChar1 = 0; // DEBUGGING
	char testChar2 = 0; // DEBUGGING

    struct SurfinBirdTestStruct test[6];
	/* TEST INPUT */
	// Three normal strings
	char testInput0[] = { "Good luck to you on this lab.\nI hope you do well." }; // Key: \n

	// Two strings that have duplicate keys
	char testInput1[] = { "This string is an example of a string that has two occurrences of the word 'is'." }; // Key: is

	// Two NULL strings to pass as sentence_ptr
	char * testInput2 = NULL; // Key: "Doesn't matter"

	// Two real strings to pass alongside a NULL searchWord
	char testInput3[] = { "It's a shame to waste a perfectly good sentence." }; // Key:  NULL

	// Two real strings to pass alongside a NULL errorCode
	char testInput4[] = { "At least electrons are free." }; // Key: are

	// Two strings that aren't in each other
	char testInput5[] = { "You can't find a key here!" }; // Key: Robot

	test[0].inputString_ptr = testInput0;
    test[1].inputString_ptr = testInput1;
    test[2].inputString_ptr = testInput2;
    test[3].inputString_ptr = testInput3;
    test[4].inputString_ptr = testInput4;
    test[5].inputString_ptr = testInput5;

	/* TEST SEARCH KEYS */
	char testKey0[] = {10,0};

	char testKey1[] = { "is" };

	char testKey2[] = { "Doesn't matter" };

	char * testKey3 = NULL;

	char testKey4[] = {"are"};

	char testKey5[] = {"Robot"};
	
	test[0].searchWord_ptr = testKey0;
    test[1].searchWord_ptr = testKey1;
    test[2].searchWord_ptr = testKey2;
    test[3].searchWord_ptr = testKey3;
    test[4].searchWord_ptr = testKey4;
    test[5].searchWord_ptr = testKey5;
    
	/* TEST RETURN VALUES */
	test[0].expectedReturn_ptr = &testInput0[29];
	test[1].expectedReturn_ptr = NULL;
    test[2].expectedReturn_ptr = NULL;
    test[3].expectedReturn_ptr = NULL;
    test[4].expectedReturn_ptr = NULL;
    test[5].expectedReturn_ptr = NULL;


	/* TEST ERROR CODES */
    test[0].expectedErrorCode =  ERROR_CODE_SUCCESS;
    test[1].expectedErrorCode =  ERROR_SEARCH_NOT_FOUND;
    test[2].expectedErrorCode =  ERROR_NULL_SENTENCE_POINTER;
    test[3].expectedErrorCode =  ERROR_NULL_SEARCH_POINTER;
    test[4].expectedErrorCode =  DEFAULT_ERROR_CODE;
    test[5].expectedErrorCode =  ERROR_SEARCH_NOT_FOUND;


	/* CALCULATE THE NUMBER OF TESTS */
	int numTotalTests = sizeof(test) / sizeof(test[0]);

	/* EXECUTE THE TESTS */
	for (i = 0; i < numTotalTests; i++)
	{
		/* 0. TEST HEADER */
		printf("\n");
		printf("************\n");
		printf("* TEST #%02d *\n", i);
		printf("************\n");
        if(i != 4)
        {
            tempReturnValue_ptr = find_the_word(test[i].inputString_ptr, test[i].searchWord_ptr, &putErrorCodeHere);
        }
        else
        {
            tempReturnValue_ptr = find_the_word(test[i].inputString_ptr, test[i].searchWord_ptr, NULL);
        }
        


		/* 1. TEST RETURN VALUE */
		numTestsRun++;
		printf("\tReturn Value Test:\t");
		if (tempReturnValue_ptr == test[i].expectedReturn_ptr)
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected pointer:\t%p\n", test[i].expectedReturn_ptr);
			printf("\t\tReceived pointer:\t%d\n", tempReturnValue_ptr);
		}

		/* 2. TEST ERROR CODE */
		numTestsRun++;
		printf("\tError Code Test:\t");
		if (putErrorCodeHere == test[i].expectedErrorCode)
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected error code:\t%d\n", test[i].expectedErrorCode);
			printf("\t\tReceived error code:\t%d\n", putErrorCodeHere);
			if (putErrorCodeHere == DEFAULT_ERROR_CODE)
			{
				puts("\t\tError code not even updated!");
			}
		}

		putErrorCodeHere = DEFAULT_ERROR_CODE; // Reset error code
	}

	if (numTestsRun)
	{
		printf("\n\n\n*******************************\n");
		printf("Out of the %d tests that ran...\n", numTestsRun);
		printf("%d tests passed.\n", numTestsPassed);
		printf("*******************************\n"); 
	}
	
	return 0;
}

/*
 * FUNCTION:   find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
 *
 * ARGUMENTS:  sentence_ptr is a char pointer to a null-terminated string to search
 *             searchWord_ptr is a char pointer to a null-terminated string to find inside sentence_ptr
 *             errorCode_ptr is an int pointer.  Store your error code at this memory address.
 *
 * RETURNS:	   char pointer to the first occurrence of the searchWord_ptr string found in the
 *                 sentence_ptr string.  The char pointer should be a memory address in the
 *                 sentence_ptr string and this memory address should represent the first 'index'
 *                 of the searchWord_ptr string.  This memory address from the sentence_ptr string
 *                 should dereference to a value equivalent to searchWord_ptr[0].
 *             All other occurences should return NULL.  This includes, but is not limited to, the
 *                 following:
 *                     sentence_ptr is NULL
 *                     searchWord_ptr is NULL
 *                     errorCode_ptr is NULL
 *                     the searchWord_ptr string is not found in the sentence_ptr string
 *
 * NOTES:      This function only utilizes address arithmetic to access information within the
 *                 null-terminated char array found at both sentence_ptr and searchWord_ptr
 *             Only access elements of the char array found at both sentence_ptr and searchWord_ptr
 *                 using address arithmetic (AKA pointer math).  The definition of this function should
 *                 be entirely devoid of the [ and ] characters.  (e.g., sentence_ptr[i] is forbidden)
 *             The only guarantees for the arguments are:
 *                 Any string found at sentence_ptr is null-terminated
 *                 Any string found at searchWord_ptr is null-terminated
 *             There is no guarantee sentence_ptr has an address (return NULL if it's NULL and assign the
 *                 proper error code)
 *             There is no guarantee searchWord_ptr has an address (return NULL if it's NULL and assign the
 *                 proper error code)
 *             There is no guarantee errorCode_ptr has an address (return NULL if it's NULL and assign the
 *                 proper error code)
 *             There is no guarantee the string found at sentence_ptr contains the string found at
 *                 searchWord_ptr (return NULL if the string at searchWord_ptr is not found and assign the
 *                 proper error code)
 *             There is no guarantee the strings found at both sentence_ptr and searchWord_ptr will
 *                 return a string length longer than zero (0)
 */
char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
{
    char *returnValue = NULL;
    if(sentence_ptr == NULL)                                //If null string is passed ERROR and return NULL
    {
        *errorCode_ptr = ERROR_NULL_SENTENCE_POINTER;
        return returnValue;
    }
    else if(searchWord_ptr == NULL)                         //If null string is passed,ERROR and return NULL 
    {
        *errorCode_ptr = ERROR_NULL_SEARCH_POINTER;
        return returnValue;
    }
    else if(errorCode_ptr == NULL)                          //If null errorCode is passed,ERROR and return NULL
    {
        return returnValue;
    }
	for(int i = 0; i < strlen(sentence_ptr); i++)           //For every letter in the sentence
    {
        if((strlen((sentence_ptr + i)) - strlen(searchWord_ptr)) >= 0)    //If our search word fits then search for it
        {
            for(int j = 0; j < strlen(searchWord_ptr); j++)         //For every letter in search word
            {
                if(*(sentence_ptr + i + j) != *(searchWord_ptr + j))        //If the letters aren't the same then break
                {
                    break;
                }
                else if((j == strlen(searchWord_ptr) - 1) && *errorCode_ptr == ERROR_CODE_SUCCESS)
                {
                    returnValue = NULL;
                }
                else if((j == strlen(searchWord_ptr) - 1) && *errorCode_ptr == DEFAULT_ERROR_CODE)    //if the value is equal to the last value then exit
                {
                    *errorCode_ptr = ERROR_CODE_SUCCESS;
                    returnValue = (sentence_ptr + i);
                }
            }
        }
    }
    if(returnValue == NULL)
    {
        *errorCode_ptr = ERROR_SEARCH_NOT_FOUND; //if not found then return it
    }

    return returnValue;  
}