#include <stdio.h>

main(){
 
 char telos;
 
    do{
	
 
	 int integer1, integer2, integer3, integer4, newinteger1, newinteger3, arithmitis, paronomastis, akeraios; 
	 char  symbolo, grammi3;
	 float apotelesma2;
	 
	 printf("Dwse ton arithmhth tou protou klasmatos\n");
	 scanf("%d", &integer1); 
	 
		   	while (integer1>9 || integer1<0) {
	 		printf("O arithmos prepei na einai monopsifios h thetikos. Dwse allon arithmo\n");
	 		scanf("%d", &integer1);
		 }
		 
		 
	  printf("Dwse ton paronomasth tou protou klasmatos\n");
	  scanf("%d", &integer2); 
	 	while (integer2>9 || integer2==0 || integer2<0) {
	 		printf("O arithmos prepei na einai monopsifios, thetikos kai mh mhdenikos. Dwse allon arithmo\n");
	 		scanf("%d", &integer2);
		 }
	 
	  printf("Dwse ton arithmhth tou deuterou klasmatos\n");
	 scanf("%d", &integer3); 
	 
		   	while (integer3>9 || integer3<0) {
	 		printf("O arithmos prepei na einai monopsifios h thetikos. Dwse allon arithmo\n");
	 		scanf("%d", &integer3);
		 }
	 
	 printf("Dwse ton paronomasth tou protou klasmatos\n");
	 scanf("%d", &integer4); 
	 	while (integer4>9 || integer4==0 || integer4<0) {
	 		printf("O arithmos prepei na einai monopsifios, thetikos kai mh mhdenikos. Dwse allon arithmo\n");
	 		scanf("%d", &integer4);
		 }
	   
		  
	 printf("Dwse to symvolo ths arithmhtikhs praxhs:\n");
	 scanf(" %c", &symbolo);
	
	    while ((symbolo!= '+') && (symbolo!= '-') && (symbolo!= '*') && (symbolo!= '/')) {
	 		printf("Ta epitrepta symbola einai ta  +, -, *, /. Eisagete ena apo ta epitrepta symbola\n");
	 		scanf(" %c", &symbolo);
		}  
	 
	 //_______________________________________________________________________ synexeia
	 
	  grammi3= '-';
	  
	 if (symbolo=='*'){  				
	 			 				
		arithmitis=integer1*integer3;  
		paronomastis=integer2*integer4;
		
		printf ("To apotelesma einai:\n");              	// NA TO KOITAKSW, EINAI OI DYO GRAMMES - K NA TO VALW K STA ALLA
			if ((arithmitis>9) || (paronomastis>9)){
			grammi3='--';
		 }	     
	
		printf ("%d\t %d\t %d\t \n", integer1, integer3,arithmitis); 	 	 
		printf ("- %c\t - =\t %c\t \n", symbolo, grammi3);  
	  	printf ("%d \t %d \t %d \t \n",  integer2, integer4, paronomastis);   
	   
	}
	
	 
	  if (symbolo=='+'){ 
	  paronomastis=integer2*integer4;    //GINONTAI OMONYMA
	
	  newinteger1=integer1*integer4;   // protos arithmitis
	  newinteger3=integer3*integer2;   // deyteros arithmitis
	  arithmitis=newinteger1+newinteger3;
	
		printf ("%d\t %d\t %d\t \n", integer1, integer3,arithmitis); 	 	 
		printf ("- %c\t - =\t %c\t \n", symbolo, grammi3);  
	  	printf ("%d \t %d \t %d \t \n",  integer2, integer4, paronomastis); 
	
	}
	 
	 
	   if (symbolo=='-'){ 
	  paronomastis=integer2*integer4;    //GINONTAI OMONYMA
	
	  newinteger1=integer1*integer4;   // protos arithmitis
	  newinteger3=integer3*integer2;   // deyteros arithmitis
	  arithmitis=newinteger1-newinteger3;
	
		printf ("%d\t %d\t %d\t \n", integer1, integer3,arithmitis); 	 	 
		printf ("- %c\t - =\t %c\t \n", symbolo, grammi3);  
	  	printf ("%d \t %d \t %d \t \n",  integer2, integer4, paronomastis); 
	
	}
	  
	 
	 if (symbolo=='/'){
	 	if ((integer4)>0){				// exei ginei hdh mia fora o elegxos, epanw sthn arxh
		 
	 	arithmitis=integer1*integer4;
	 	paronomastis=integer2*integer3;
	 
	 	printf ("To apotelesma se arithmo einai \n");
	 
	 	printf ("%d\t %d\t %d\t \n", integer1, integer3,arithmitis); 	 	 
		printf ("- %c\t =\t %c\t \n", symbolo, grammi3);  
	  	printf ("%d \t %d \t %d \t \n",  integer2, integer4, paronomastis); 
		}
	}
	else {	
	printf ("H praksi den mporei na ginei");  
	}


	 
	 //__________________________________________________________________Metatropi se meikto
	 
	if ( (arithmitis>paronomastis)  && (arithmitis%paronomastis!=0)   ){			// tote mono mporei na ginei meikto
	
		akeraios=(arithmitis/paronomastis);
		arithmitis=(arithmitis%paronomastis);	// modulo
		
		printf("O meiktos tha einai: \n");
		printf("\t %d \n", arithmitis);	
		printf("%d*\t - \n", akeraios);
		printf("\t %d \n", paronomastis);	
	}
	
		else {
	    printf("Den yparxei meiktos, giati to klasma den einai kataxristiko");
	}

   printf("An theleis na termatiseis th diadikasia, pathse 'n'. An thes na synexiseis, dwse allon xarakthra");
   scanf(" %c", &telos);   			// einai anagh na kanoyme check gia to an o allos tha dwsei opwsdhpote xarakthra?

	}while (telos!= 'n');			
 
}
