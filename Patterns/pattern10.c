/**
output:
<
>>>
<<<<<
>>>>>>>
<<<<<<<<<
*/

#include <stdio.h>

int main(void){
	int row = 5;
	int column;

	while ( row >= 1 ){
		column = row*2;
		while(column<=10){
			printf( "%s", row % 2 ? "<": ">" );
			++column;
		}
		--row;
		puts("");
	}

	return 0;
}
