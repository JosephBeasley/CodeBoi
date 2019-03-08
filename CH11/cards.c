// Card shuffling and dealing.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototypes
void shuffle( unsigned int wDeck[][ FACES ] ); // shuffling modifies wDeck
void deal( unsigned int wDeck[][ FACES ], const char *wFace[], 
   const char *wSuit[] ); // dealing doesn't modify the arrays

int main( void )
{
   // initialize suit array                       
   const char *suit[ SUITS ] =            
      { "Hearts", "Diamonds", "Clubs", "Spades" };
   
   // initialize face array                   
   const char *face[ FACES ] =
      { "Ace", "Deuce", "Three", "Four",         
        "Five", "Six", "Seven", "Eight",         
        "Nine", "Ten", "Jack", "Queen", "King" };

   // initialize deck array
   unsigned int deck[ SUITS ][ FACES ] = { 0 };

   srand( time( NULL ) ); // seed random-number generator

   shuffle( deck ); // shuffle the deck
   deal( deck, face, suit ); // deal the deck
} // end main

// shuffle cards in deck
void shuffle( unsigned int wDeck[][ FACES ] )
{
   size_t row; // row number
   size_t column; // column number
   size_t card; // counter

   // for each of the cards, choose slot of deck randomly
   for ( card = 1; card <= CARDS; ++card ) {

      // choose new random location until unoccupied slot found
      do {                                                        
         row = rand() % SUITS;                                   
         column = rand() % FACES;                             
      } while( wDeck[ row ][ column ] != 0 ); // end do...while

      // place card number in chosen slot of deck
      wDeck[ row ][ column ] = card;
   } // end for
} // end function shuffle

// deal cards in deck
void deal( unsigned int wDeck[][ FACES ], const char *wFace[],
   const char *wSuit[] )
{
   size_t card; // card counter
   size_t row; // row counter
   size_t column; // column counter

   // deal each of the cards
   for ( card = 1; card <= CARDS; ++card ) {
      // loop through rows of wDeck
      for ( row = 0; row < SUITS; ++row ) {
         // loop through columns of wDeck for current row
         for ( column = 0; column < FACES; ++column ) {
            // if slot contains current card, display card
            if ( wDeck[ row ][ column ] == card ) {
               printf( "%5s of %-8s%c", wFace[ column ], wSuit[ row ],
                  card % 2 == 0 ? '\n' : '\t' ); // 2-column format
            } // end if
         } // end for
      } // end for
   } // end for
} // end function deal

