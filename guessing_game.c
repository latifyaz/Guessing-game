#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
	     
		 int estimation,counter=0,number;
	srand(time(0));
	estimation=rand()%10 + 1;
	
	printf("\n\t\t\t== WELCOME TO OUR GAME ==");
	printf("\n\n\t\t I kept between 1 and 10, Can you guess it?");
	printf("\n\t\t [  Remember, you have 3 rights  ]\n\n\t\t\t");
	
	while(counter<3){
		   scanf("%d",&number);
		     if(counter==2 && number!=estimation){
		     	printf("\n\t\t\tYOUR RIGHT TO TRY HAS ENDED :(\n\n\n");
		     	printf("\n\t\t\t Right Answer = %d\n\n\n",estimation);
		    
		     	goto end;
			 }   
				if(number==estimation){
		   	            printf("\n\t\t !!CONGRULATIONS, RIGHT ANSWER !!\n\n\n");
		   	            goto end;
		          }
		        else if(number<estimation){
		        	    printf("\n\t\t\tWrong Estimination\n\t\t\tTry Again(UP) : "); 
				}  
				else{
					
					printf("\n\t\t\tWrong Estimination\n\t\t\tTry Again(DOWN) : ");
				}
		counter++;
	}
	
	
	end:
	return 0;
}
