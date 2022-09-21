/*****************************************************************************
  @ @ @     @ @ @   |
 @     @   @     @  |
@       @ @       @ |
@		  @ | C PROGRAM TO PRINT HEART WITHOUT USING GRAPHICS
@		 @  |
 @		@   |
  @	       @    |
   @	      @     |
    @	     @      |
     @	    @       |
      @	   @        |A PROJECT BY APARUP TRIPATHI
       @  @         |
	@@          |
******************************************************************************/
#include"stdio.h"
#include"conio.h"
main()

{ 
	int i,j,rows;
	clrscr();
	printf("Enter the number of rows: ");
	scanf("%d",&rows);

/* aikhana top semi circular shapes of heart print hocche*/
	
	for(i=rows/2;i<=rows;i+=2)
	{ 

/* aikhana Spaces gulo print hocche*/
		for(j=1;j<rows-i;j+=2) 
		{ 
			printf(" "); 
		}

/* aikhana stars for left semi circle print korche*/
		for(j=1;j<=i;j++)
		{
			printf("*");
		}

/* abr Spaces print hoba*/
		for(j=1;j<=rows-i;j++)
		{ 
			printf(" "); 
		}

/* aibar stars for right semi circle print korta hoba*/
		for(j=1;j<=i;j++)
		{
			printf("*");
		} 

/* next row a shift hoba*/
		printf("\n"); 
	}

/* akta uldo pyramid print hoba*/
	for(i=rows;i>=1;i--)
	{ 
		for(j=i;j<rows;j++)
		{ 
			printf(" "); 
		} 
		for(j=1;j<=(i*2)-1;j++)
		{ 
			printf("*");
		}

/* next row ta shift kora nita hoba*/
		printf("\n"); 
	}                                                                                                                                                                                                                                                                                                                                                                                                   		printf("\n\nCREATED BY APARUP TRIPATHI, CLASS- XI, SEC-D");
	getch();
	return 0;
}