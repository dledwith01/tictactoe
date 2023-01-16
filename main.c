#include <stdio.h>

int main(){
	
	//declare variables
	int y; //number of columns	
	int x; //number of rows
	char ay[] = "---"; //define column width/style
	char ax[] = "   "; //define row width/style
	char by[] = "+"; //define intersection style
	char bx[] = "|"; //define column separation style
	
	//request user input
	printf("enter columns: ");
	scanf("%i", &y);
	printf("enter rows: ");
	scanf("%i", &x);
	
	//loop for grid: prints y number of columns by x number of rows.
	//if x or y are set to < 0, "ERROR: INVALID DIMENSIONS" is displayed.
	if( x > 0 & y > 0){	
		for(int j = 1; j <= x; j++){
			if(y > 0){
				printf("\n");
					for(int i = 0; i <= (y - 1); i++){
						printf("%s%s", by, ay);
					}
				printf("%s\n", by);
					for(int i = 0; i <= y - 1; i++){
						printf("%s%s", bx, ax);
					}
			}
			printf("%s", bx);
		}
			printf("\n");
				for(int i = 1; i <= y; i++){
					printf("%s%s",by, ay);	
				}
			printf("%s\n", by);
	}
	else printf("ERROR: INVALID DIMENSIONS");
	
	printf("\n");
	
	//end of main
	return(0);
}