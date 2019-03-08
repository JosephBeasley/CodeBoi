// Creating a sequential file
#include <stdio.h>
#include<stdlib.h>

int main( void )
{ 
   char first[30]; // first name
   char middle[30]; // middle name
   char last[30]; // last name

   FILE *cfPtr; // cfPtr = clients.dat file pointer   

   // fopen opens file. Exit program if unable to create file 
   if ( ( cfPtr = fopen( "usernames.txt", "a" ) ) == NULL ) {
      puts( "File could not be opened" );
   } // end if
   else { 
      puts( "Enter the first, middle, and last name." );
      puts( "Enter EOF to end input." );
      printf( "%s", "* " );
      scanf( "%.29s %.29s %.29s", first, middle, last );

      // write account, name and balance into file with fprintf
      while ( !feof( stdin ) ) { 
         fprintf( cfPtr, "%29s%29s%29s\n", first, middle, last );
         printf( "%s", "* " );
         scanf( "%29s%29s%29s", first, middle, last );
      } // end while
      
      fclose( cfPtr ); // fclose closes file   
   } // end else
} // end main

