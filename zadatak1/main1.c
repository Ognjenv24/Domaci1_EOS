#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char** argv) {

    int izbor;
    int broj = 0;
    int tren=0;
    char buffer[100];
    char buffer2[100];
    char provera[100];
    FILE *fp;
    FILE *svic;
    FILE *fpp;
    FILE *fppp;
    FILE *fpppp;
    FILE *but;
    FILE *dru1;
    FILE *dru2;
    FILE *dru3;
    FILE *led;
    FILE *led2;
    FILE *led3;
    FILE *led4;
    FILE *upis1;
    FILE *upis2;
    FILE *upis3;
    char ime_fajla[100];
    char tval1, tval2, tval3, tval4;
    char tval11,tval22,tval33,tval44;
    char sval1,sval2,sval3,sval4;
    char *str;
    char *str2;
    char *str3;
    char *str4;
    char *str5;
    size_t num_of_bytess = 6;
    size_t num_of_bytesb = 6;
    size_t num_of_bytesd = 6;
    size_t num_of_bytes = 6;
    size_t num_of_bytesu =6;
    double pauza=1;

    if (argc == 2) {
        sscanf(argv[1], "%s", ime_fajla);
    }
    else {
        printf("pogresan broj argumenata\n");
        return -1;
    }

    do {
        printf("1. Unos Kombinacija\n");
        printf("2. Prikaz Kombinacija\n");
        printf("3. Brisanje Kombinacija\n");
        printf("4. Promena pauze\n");
        printf("5. Izlaz\n");
        printf("Unesite svoj izbor:");

        scanf("%d", &izbor);
        if (izbor <= 0 || izbor > 5) {
            printf("Unesi ponovo:\n");
        }
        else {
            switch (izbor) {
                case 1:
          /*    while(broj<9){
                    // Upali diode
                    fp = fopen(ime_fajla, "w");   
                    
                    if (fp == NULL) {
                        printf("Problem pri otvaranju %s\n", ime_fajla);
                        return -1;
                    }

	
			
		    svic = fopen ("/dev/switch", "r");

                    if (svic == NULL) {
                        printf("Problem pri otvaranju switcha\n");
                        return -1;
                    }

		    fppp= fopen("/dev/button","r");

                    if (fppp == NULL) {
                        printf("Problem pri otvaranju buttona\n");
                        return -1;
                    }
                    
                    str = (char *)malloc(num_of_bytess+1); 
		getline(&str, &num_of_bytess, svic); 
		
		sval1 = str[2] - 48;
		sval2 = str[3] - 48;
		sval3 = str[4] - 48;
		sval4 = str[5] - 48;
		free(str);
                    
                    
                str2 = (char *)malloc(num_of_bytesb+1); 
		getline(&str2, &num_of_bytesb, fppp);   
		
		tval1 = str[2] - 48;
		tval2 = str[3] - 48;
		tval3 = str[4] - 48;
		tval4 = str[5] - 48;
		free(str2);
		
		if(tval1 == 1){
			if(broj < 9){
			fprintf(fp,"0b%c%c%c%c\n", sval1,sval2,sval3,sval4);
			broj++;
			sleep(1);
			}
				else{
				printf("Ne moze vise od 9 kombinacija");
				fputs("0x0F\n", fp);
				sleep(1);
				fputs("0x00\n", fp);
			}
				}  
                    
                    if(tval4==1){
                    	break;
                    }

			fclose(fp);
			fclose(svic);
			fclose(fppp);

                    }
	//		fclose(fp);
	//	fclose(svic);
	//		fclose(fppp);
                    break;*/
while(1){
fp = fopen ("/dev/button", "r");
		if(fp==NULL)
		{
			puts("Problem pri otvaranju /dev/button");
			return -1;
		}


		str = (char *)malloc(num_of_bytes+1); 
		getline(&str, &num_of_bytes, fp); 

		if(fclose(fp))
		{
			puts("Problem pri zatvaranju /dev/button");
			return -1;
		}


		tval1 = str[2] - 48;
		tval2 = str[3] - 48;
		tval3 = str[4] - 48;
		tval4 = str[5] - 48;
		free(str);

if(tval1==1){
	upis1=fopen("/dev/switch","r");

	if(upis1 == NULL){
		printf("ne otvara switch u upis");
		return -1;
	}
	
	str5 = (char *)malloc(num_of_bytesu+1);
		getline(&str5, &num_of_bytesu, upis1);

	
		fclose(upis1);

		sval1 = str5[2] - 48;
		sval2 = str5[3] - 48;
		sval3 = str5[4] - 48;
		sval4 = str5[5] - 48;
		free(str5);

	if(broj<9){
		upis2=fopen(ime_fajla,"a");
		if(upis2==NULL){
			printf("ne otvara nase u upisu");
			return -1;
		}

		fprintf(upis2,"0b%d%d%d%d\n",sval1,sval2,sval3,sval4);
		broj++;
		printf("Broj kombinacija je :%d\n",broj);
		sleep(1);
	
		fclose(upis2);
	//	break;
	}
	else{
	upis3 = fopen("/dev/led", "w");
		if(upis3 == NULL)
		{
			printf("Problem pri otvaranju /dev/led\n");
			return -1;
		}
		fputs("0x0F\n", upis3);
		if(fclose(upis3))
		{
			printf("Problem pri zatvaranju /dev/led\n");
			return -1;
		}
	printf("ne moze vise komb\n");

	break;
	
	}
}

if(tval4==1){
break;
}
	//	fclose(upis1);
}
break;
                case 2:
	//	tren=0;
              /*  while(1){
                    dru1 = fopen(ime_fajla, "r");
		    
                    
                    if (dru1 == NULL) {
                        printf("Problem pri otvaranju %s\n",ime_fajla);
                        return -1;
                    }
		    
		    dru2 = fopen("/dev/button","r");
                    if (dru2 == NULL) {
                        printf("Problem pri otvaranju buttona\n");
                        return -1;
                    }

                    // Ugasi diode
                    fpp = fopen("/dev/led","w");
                    if (fpp == NULL) {
                        printf("Problem pri otvaranju /dev/led\n");
                        fclose(dru1);
                        return -1;
                    }                       
                    
                str3 = (char *)malloc(num_of_bytesd+1); 
		getline(&str3, &num_of_bytesd, dru2);   
		
		tval1 = str[2] - 48;
		tval2 = str[3] - 48;
		tval3 = str[4] - 48;
		tval4 = str[5] - 48;
		free(str3);

                    while(fgets(buffer, sizeof(buffer), dru1) != NULL){
                        fputs(buffer, fpp);
                        sleep(pauza);
                        if(feof(dru1)){
                        	break;
                        }
                    }      
                    if(tval4==1){
                    	break;
                    }		    
                    
                    fclose(fpp);
                    fclose(dru2);  
		}*/

		
	
		
	while(1){

		led4 = fopen ("/dev/button", "r");
		if(led4==NULL)
		{
			puts("Problem pri otvaranju /dev/button");
			return -1;
		}


		str = (char *)malloc(num_of_bytes+1); 
		getline(&str, &num_of_bytes, led4); 

		fclose(led4);


		tval1 = str[2] - 48;
		tval2 = str[3] - 48;
		tval3 = str[4] - 48;
		tval4 = str[5] - 48;
		free(str);


	if(tval4==0){	
		led = fopen(ime_fajla,"r");
		if(led == NULL)
		{
			printf("Problem pri otvaranju fajla\n");
			return -1;
		}
		
	/*	if(feof(led)){
			printf("kraj");
		break;
		}*/

//		led3 = fopen("/dev/button","r");

	/*	if(led3 ==NULL){
		puts("button problem");
		return -1;
		}

		str4 = (char *)malloc(num_of_bytes+1);
		getline(&str4, &num_of_bytes, led3); 
	
	//	fclose(led3);

		tval11 = str4[2] - 48;
		tval22 = str4[3] - 48;
		tval33 = str4[4] - 48;
		tval44 = str4[5] - 48;
		free(str4);*/
		if(tren >= broj){
		printf("dosao do kraja\n");
	//	tren=0;
		break;
	//	tren=0;
		}
		

		while(fgets(buffer,sizeof(buffer),led)!= NULL){
	
	//	getline(buffer,4,led);	
	//	
	/*		if(tren >= broj){
			break;
		}*/
		
		if(buffer==NULL){
			printf("kraj");
			break;
			fputs("0x00\n",led2);
		}


		led3=fopen("/dev/button","r");

		if(led3 == NULL){
			printf("button ne otvara");
			return -1;
		}	

		str4 = (char *)malloc(num_of_bytes+1); 
		getline(&str4, &num_of_bytes, led3); 

		fclose(led3);

		tval11 = str4[2] - 48;
		tval22 = str4[3] - 48;
		tval33 = str4[4] - 48;
		tval44 = str4[5] - 48;
		free(str4);

			if(tval44==1){
				break;
			}
		
		led2 = fopen("/dev/led","w");
		if(led2 == NULL){
			printf("diode neotvara");
			return -1;
		}

		fputs(buffer,led2);
		tren++;
	/*	if(feof(led)){
			break;
			fputs("0x00\n",led2);
		}*/

		sleep(pauza);
		fclose(led2);
//		fclose(led3);	
	//	sleep(pauza);
		}
		

		fclose(led);
	//	fclose(led3);
	//	fclose(led2);

	
	}
	else{
	break;
	}
	
	}
                    break;
                case 3:
                
                    fp = fopen(ime_fajla,"w"); 
                    if (fp == NULL) {
                        printf("Problem pri otvaranju %s\n", ime_fajla);
                        return -1;
                    }

                    fclose(fp); 
			broj=0;
			tren=0;
                    
                    break;
                case 4:
                
                while(1){
                 but = fopen("/dev/button","r");
                 
                 
                               if (but == NULL) {
                        printf("Problem pri otvaranju buttona\n");
                        return -1;
                    }
                 str = (char *)malloc(num_of_bytesb+1); 
		getline(&str, &num_of_bytesb, but);
		
		tval1 = str[2] - 48;
		tval2 = str[3] - 48;
		tval3 = str[4] - 48;
		tval4 = str[5] - 48;
		free(str); 
		
		if(tval2==1){
		pauza = pauza - 0.5;
		printf("pauza je %f\n",pauza);
		sleep(1);	
		}
		if(tval3==1){
		pauza = pauza + 0.5;
		printf("pauza je %f\n",pauza);
		sleep(1);
		}
                
                if(tval4==1){
                    	break;
                    }
                
                
                
                fclose(but);
		}
                    break;
                case 5:
                    return 0; 
            }
        }
    } while (izbor != 5);

    return 0;
}

