#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void deal(const int wDeck[][13], const char *wFace[],
          const char *wSuit[])
{
    int row;
    int column;

    for(int i=1;i<=52;i++)
    {
        for(row=0;row<=3;row++)
        {
            for(column=0;column<=12;column++)
            {
                if(wDeck[row][column] == i)
                {
                    printf("%5s of %-8s%c",wFace[column],wSuit[row],
                           i % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}
void shuffle(int wDeck[][13])
{
    int row;
    int column;

    for(int i=1;i<=52;i++)
    {
        row = rand()%4;
        column = rand()%13;
        while(wDeck[row][column] != 0)
        {
            if(column == 12)
            {
                row = (row+1)%4;
                column = 0;
            }
            else column++;
        }

        wDeck[row][column] = i;
    }
}
int main()
{
	const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    const char *face[13] =
        {"Ace", "Deuce", "Three", "Four",
         "Five", "Six", "Seven", "Eight",
         "Nine", "Ten", "Jack", "Queen", "King"};

    int deck[4][13] = {0};

    srand(time(0));

	shuffle(deck);
	deal(deck, face, suit);
	system("pause");
	return 0;
}
