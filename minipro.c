#include <stdio.h>
#include <string.h>

void Tariff(){
	int i,j;
	char unit_graph[11][15] = {"0-10","11-20","21-30","31-50","51-80","81-100",
                               "101-300","> 301","> 1001","> 2001","> 3001"};
    float graph1[11][3] = {{10.20, 17.00, 18.25},{16.00, 20.00, 21.50},{19.00, 21.00, 25.50},
                            {21.20, 22.00, 28.50},{00.00, 23.00, 31.00},{00.00, 24.00, 31.25},
                            {00.00, 27.40, 31.50},{00.00, 27.50, 31.75},{00.00, 27.60, 32.00},
                            {00.00, 27.80, 32.25},{00.00, 28.00, 32.50}};
    float graph2[11][3] = {{10.20, 18.00, 18.50},{16.00, 21.00, 22.00},{19.00, 22.00, 26.00},
                            {21.20, 23.00, 29.00},{00.00, 24.00, 31.50},{00.00, 26.00, 32.50},
                            {00.00, 30.25, 33.50},{00.00, 30.25, 34.75},{00.00, 30.25, 34.75},
                            {00.00, 30.25, 34.75},{00.00, 30.25, 34.75}};
    float graph3[11][3] = {{10.20, 16.00, 18.00},{16.00, 19.00, 21.00},{19.00, 20.00, 24.00},
                            {21.20, 21.50, 27.00},{00.00, 21.60, 29.00},{00.00, 21.65, 29.25},
                            {00.00, 21.70, 29.50},{00.00, 21.75, 29.75},{00.00, 21.80, 29.50},
                            {00.00, 21.85, 29.25},{00.00, 21.90, 29.00}};
    system("cls");
    printf("\n\t\t\t    Water tariffs for private investment areas\n\n");
    line(96);
    messages();
    line(96);
    for (i = 0; i < 11; i++) {
        printf("\t%s\t\t|", unit_graph[i]);
        for (j = 0; j < 3; j++) {
            printf("\t%.2f\t\t|", graph1[i][j]);
        }
        printf("\n");
    }
    line(96);
    printf("\n\t\t    Water tariff Phuket, Koh Samui and Koh Phangan branches\n\n");
    line(96);
    messages();
    line(96);
    for (i = 0; i < 11; i++) {
        printf("\t%s\t\t|", unit_graph[i]);
        for (j = 0; j < 3; j++) {
            printf("\t%.2f\t\t|", graph2[i][j]);
        }
        printf("\n");
    }
    line(96);
    printf("\n\tWater tariff for other Provincial Waterworks Authority branches (nationwide)\n\n");
    line(96);
    messages();
    line(96);
    for (i = 0; i < 11; i++) {
        printf("\t%s\t\t|", unit_graph[i]);
        for (j = 0; j < 3; j++) {
            printf("\t%.2f\t\t|", graph3[i][j]);
        }
        printf("\n");
    }
    line(96);
}

void messages(){
    printf("\tWater usage range\tresidence\t\tsmall business\t\tbig business\n");
}

void line(int count){
	int i;
    for (i = 0; i < count; i++)printf("-");
    printf("\n");
}

void menu(){
	int menu;
	char back[5];
	do{
	printf("\tMenu\nPlase Enter Your Choice\t 1 or 2\n");
	printf("1.Calculate Plumbing \n");
	printf("2.Water Tariff\n");
	scanf("%d",&menu);
	if(menu==1) 
	break;
	else
		{
		Tariff();
		printf("Do you want to back to menu? (yes/no)\n");
		scanf("%s",&back);
		system("cls");
		}
	}
	while(strcmp(back, "yes") == 0);
}

float calculate(int work, int type, float use) {
    float unit[] = {10, 10, 10, 20, 30, 20, 200, 700, 1000, 1000};
    float price[11];
    switch (work){
		case 1:
            if (type==1){
                price[0]=10.20; price[1]=16; price[2]=19; price[3]=21.20; price[4]=21.60;
                price[5]=21.65; price[6]=21.70; price[7]=21.75; price[8]=21.80;
                price[9]=21.85;price[10]=21.90;}
            else if (type==2){
                price[0]=16; price[1]=19; price[2]=20; price[3]=21.50; price[4]=21.60;
                price[5]=21.65; price[6]=21.70; price[7]=21.75; price[8]=21.80;
                price[9]=21.85;price[10]=21.90;}
            else if (type==3){
                price[0]=16; price[1]=19; price[2]=20; price[3]=21.50; price[4]=21.60;
                price[5]=29.25; price[6]=29.50; price[7]=29.75; price[8]=29.50;
                price[9]=29.25;price[10]=29;}
            else{
                price[0]=18; price[1]=21; price[2]=24; price[3]=27; price[4]=29;
                price[5]=29.25; price[6]=29.50; price[7]=29.75; price[8]=29.50;
                price[9]=29.25;price[10]=29;}
            break;
           
        case 2:
            if (type==1){
                price[0]=10.20; price[1]=16; price[2]=19; price[3]=21.20; price[4]=24;
                price[5]=26; price[6]=30.25; price[7]=30.25; price[8]=30.25;
                price[9]=30.25;price[10]=30.25;}
            else if (type==2){
                price[0]=18; price[1]=21; price[2]=22; price[3]=23; price[4]=24;
                price[5]=26; price[6]=30.25; price[7]=30.25; price[8]=30.25;
                price[9]=30.25;price[10]=30.25;}
            else if (type==3){
                price[0]=18; price[1]=21; price[2]=22; price[3]=23; price[4]=24;
                price[5]=26; price[6]=33.50; price[7]=34.75; price[8]=34.75;
                price[9]=34.75;price[10]=34.75;}
            else{
                price[0]=18.50; price[1]=22; price[2]=26; price[3]=29; price[4]=31.50;
                price[5]=32.50; price[6]=33.50; price[7]=34.75; price[8]=34.75;
                price[9]=34.75;price[10]=34.75;}
            break;
            
        case 3:
            if (type==1){
                price[0]=10.20; price[1]=16; price[2]=19; price[3]=21.20; price[4]=23;
                price[5]=24; price[6]=27.40; price[7]=27.50; price[8]=27.60;
                price[9]=27.80;price[10]=28;}
            else if (type==2){
                price[0]=17; price[1]=20; price[2]=21; price[3]=22; price[4]=23;
                price[5]=24; price[6]=27.40; price[7]=27.50; price[8]=27.60;
                price[9]=27.80;price[10]=28;}
            else if (type==3){
                price[0]=17; price[1]=20; price[2]=21; price[3]=22; price[4]=23;
                price[5]=31.25; price[6]=31.50; price[7]=31.75; price[8]=32;
                price[9]=32.25;price[10]=32.50;}
            else{
                price[0]=18.25; price[1]=21.50; price[2]=25.50; price[3]=28.50;
                price[4]=31; price[5]=31.25; price[6]=31.50; price[7]=31.75;
                price[8]=32; price[9]=32.25;price[10]=32.50;}
            break;
        	default:
        		printf("Invalid choice\n");
}
	int i;
    float sum = 0;
    for (i = 0; i < sizeof(unit) / sizeof(unit[0]); i++) {
        if (use <= unit[i]) {
            sum += use * price[i];
            break;
        } else {
            sum += unit[i] * price[i];
            use -= unit[i];
        }
    }
    return sum;
}

int main() {
    char choice[5];
    int work, ws, type;
    float use, sum, size, tax;
    do {
        printf("==Plumbing Service==\n");
        menu();
        system("cls");
        	printf("\n1 : General\n2 : PWA Phuket,Koh Samui Phangan\n3 : Private and chonburi's area\n");
		printf("Works Used : ");
    	scanf("%d", &work);
    		printf("\n1 : housing\n2 : Government and Small Business\n3 : Government and Small Business(28,29)\n4 : Enterpriese Large Business\n");
    	printf("User type : ");
    	scanf("%d", &type);
    		printf(" \n1 :  1/2 Inch\n"); printf("2 :  3/4 Inch\n"); printf("3 :  1 Inch\n");
  			printf("4 :  1 1/2 Inch\n"); printf("5 :  2 Inch\n"); printf("6 :  2 1/2 Inch\n");
  			printf("7 :  3 Inch\n"); printf("8 :  4 Inch\n"); printf("9 :  6 Inch\n"); printf("10:  > 6 Inch\n");
    	printf("Water meter size : ");
    	scanf("%d", &ws);
    	
    	printf("\nWater consumption: ");
    	scanf("%f", &use);
    	
    	size = ws == 1 ? 30 : ws == 2 ? 50 : ws == 3 ? 60 : ws == 4 ? 90 : ws == 5 ? 350 : 450;
		size = ws <= 6 ? size : 450 + (ws-6)*50;

        sum = calculate(work, type, use);
        float *psum = &sum;
        printf("Water fee included : %.2f THB\n", *psum);
        
        sum += size;
        tax = 0.07 * sum;
        sum += tax;
		
        printf("General Service Fee : %.2f THB\n", size);
        printf("VAT (7%): %.2f THB\n", tax);
        printf("Total amount of money : %.2f THB\n", sum);

        printf("Calculate again? (yes/no)\n");
        scanf("%s", &choice);
        system("cls");
    } while (strcmp(choice, "yes") == 0);

    return 0;
}
