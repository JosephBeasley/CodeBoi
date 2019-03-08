
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// function prototypes
void shuffle( unsigned int deck[][ FACES ] );
void deal(unsigned int deck[][ FACES ], unsigned int hand[][ 2 ], 
   char *suit[], char *face[] );
void pair( unsigned int hand[][ 2 ], char *suit[], char *face[] );
void threeOfKind( unsigned int hand[][ 2 ], char *suit[], char *face[] );
void fourOfKind( unsigned int hand[][ 2 ], char *suit[], char *face[] );
void straightHand( unsigned int hand[][ 2 ], char *suit[], char *face[] );
void flushHand( unsigned int hand[][ 2 ], char *suit[], char *face[] );

int main()
{
   char *suit[ SUITS ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
   char *face[ FACES ] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
   unsigned int deck[ SUITS ][ FACES ]; // represents deck of cards
   unsigned int hand[ 5 ][ 2 ]; // represents hand
   size_t row, column; // loop counters
   
   // loop through rows of deck
   for ( row = 0; row < SUITS; ++row )
   {
      // loop through columns of deck for current row
      for ( column = 0; column < FACES; ++column )
      {
         deck[ row ][ column ] = 0; // initialize slot of deck to 0
      } // end inner for
   } // end outer for

   srand( time( NULL ) ); // seed random number generator
   
   // shuffle the deck and deal a 5-card hand
   shuffle( deck );
   deal( deck, hand, suit, face );
   
   // determine the hand's poker value
   pair( hand, suit, face );
   threeOfKind( hand, suit, face );
   fourOfKind( hand, suit, face );
   straightHand( hand, suit, face );
   flushHand( hand, suit, face );
} // end function main

// shuffles the deck
void shuffle( unsigned int deck[][ FACES ] )
{
   size_t row; // represents suit value of card
   size_t column; // represents face value of card
   unsigned int card; // loop counter

   // for each of the 52 cards, choose a slot of the deck randomly
   for ( card = 1; card <= CARDS; ++card )
   {
      do // choose a new random location until unoccupied slot is found
      {
         row = rand() % SUITS; // randomly select the row
         column = rand() % FACES; // randomly select the column
      } while( deck[ row ][ column ] != 0 ); // end do...while

      // place card number in chosen slot of deck
      deck[ row ][ column ] = card;
   } // end for
} // end function shuffle

// deals a poker hand
void deal( unsigned int deck[][ FACES ], unsigned int hand[][ 2 ], 
   char *suit[], char *face[] )
{
   unsigned int r = 0; // counter for position in the hand
   size_t card, row, column; // loop counters

   puts( "The hand is:\n" );

   // loop to distrubute the cards
   for ( card = 1; card < 6; ++card )
      for ( row = 0; row < SUITS; ++row )
         for ( column = 0; column < FACES; ++column )
            if ( deck[ row ][ column ] == card )
            {
               hand[ r ][ 0 ] = row;
               hand[ r ][ 1 ] = column;
               printf( "%5s of %-8s\n", face[ column ], suit[ row ] );
               ++r;
            } // end if

   puts( "\n" );
} // end function deal

// determines if there are any pairs in the hand
void pair( unsigned int hand[][ 2 ], char *suit[], char *face[] )
{
   // counter that records how many cards of each rank are in the hand
   unsigned int counter[ FACES ] = { 0 };
   
   size_t r, p; // loop counters

   // record how many cards of each rank are in the hand
   for ( r = 0; r < 5; ++r )
      ++counter[ hand[ r ][ 1 ] ];

   // print result if there is a pair
   for ( p = 0; p < FACES; ++p )
      if ( counter[ p ] == 2 )
        printf( "The hand contains a pair of %ss.\n", face[ p ] );
} // end function pair

// determines if there is a three of a kind in the hand
void threeOfKind( unsigned int hand[][ 2 ], char *suit[], char *face[] )
{
   // counter that records how many cards of each rank are in the hand
   unsigned int counter[ FACES ] = { 0 };

   size_t r, t; // loop counters

   // record how many cards of each rank are in the hand
   for ( r = 0; r < 5; ++r )
      ++counter[ hand[ r ][ 1 ] ];

   // print result if there is a three of a kind
   for ( t = 0; t < FACES; ++t )
      if ( counter[ t ] == 3 )
        printf( "The hand contains three %ss.\n", face[ t ] );
} // end function threeOfKind

// determines if there is a four of a kind in the hand
void fourOfKind( unsigned int hand[][ 2 ], char *suit[], char *face[] )
{
   // counter that records how many cards of each rank are in the hand
   unsigned int counter[ FACES ] = { 0 };

   size_t r, k; // loop counters

   // record how many cards of each rank are in the hand
   for ( r = 0; r < 5; ++r )
      ++counter[ hand[ r ][ 1 ] ];

   // print result if there is a pair
   for ( k = 0; k < FACES; ++k )
      if ( counter[ k ] == 4 )
        printf( "The hand contains four %ss.\n", face[ k ] );
} // end function fourOfKind

// determines if there is a straight in the hand
void straightHand( unsigned int hand[][ 2 ], char *suit[], char *face[] )
{
   unsigned int s[ 5 ] = { 0 }; // array that holds a copy of hand
   unsigned int temp; // temporary integer
   size_t r, pass, comp; // loop counters

   // copy column locations to sort
   for ( r = 0; r < 5; ++r )
      s[ r ] = hand[ r ][ 1 ];

   // bubble sort column locations
   for ( pass = 1; pass < 5; ++pass )
      for ( comp = 0; comp < 4; ++comp )
         if ( s[ comp ] > s[ comp + 1 ] )
         {
            temp = s[ comp ];
            s[ comp ] = s[ comp + 1 ];
            s[ comp + 1 ] = temp;
         } // end if

   // check if sorted columns are a straight
   if ( s[ 4 ] - 1 == s[ 3 ] && s[ 3 ] - 1 == s[ 2 ]
      && s[ 2 ] - 1 == s[ 1 ] && s[ 1 ] - 1 == s[ 0 ] )
   {
      printf( "The hand contains a straight from %s to %s.\n",
              face[ s[ 0 ] ], face[ s[ 4 ] ] );
   } // end if
} // end function straightHand

// determines if there is a flush in the hand
void flushHand( unsigned int hand[][ 2 ], char *suit[], char *face[] )
{
   // counter that records how many cards of each suit are in the hand
   unsigned int count[ SUITS ] = { 0 };
   
   size_t r, f; // loop counters

   // record how many cards of each suit are in the hand
   for ( r = 0; r < 5; ++r )
      ++count[ hand[ r ][ 0 ] ];

   for ( f = 0; f < SUITS; ++f )
      if ( count[ f ] == 5 )
         printf( "The hand contains a flush of %ss.\n", suit[ f ] );
} // end function flushHand

