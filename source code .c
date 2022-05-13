#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include<conio.h>

void mainmenu ();
void namefunc ();
void options ();
void rule();
void mygame ();
void logafmygame();
void endgame();

int way1=0,way2=0, TIMENOW=0;
char INTROGAME[200]="WELCOME TO THE QI QUESTIONS GAME!";
char logname[200]="We don't know who you are. Please enter your name to bring you into my game. I need have to know who you are?";
char logoption[400]="In this game I will ask a 5 different questions to test your own mind and \n    I just want to see the different in opinion as an example when I have to decide something. :))\n    I need your help to answer it honestly. OK?";
char playname[20]="Mr/Ms. ";


void delay(float number_of_seconds)
{
    float milli_seconds = 75 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

int main()//// ---------- this functions make to start intro to game ----------------------
{	
	int i=0,j=0;
	char name;
	system("cls");
	for(i=0;i<40;i++){
		delay(0.5);
		printf(" * ");
	}
	printf("\n\n\n");
	printf("\t\t\t\t\t");
	for(i=0;i<strlen(INTROGAME);i++){
		delay(1);
		printf("%c", INTROGAME[i]);
	}
	printf("\n\n\n");
	for(i=0;i<40;i++){
		delay(0.5);	
		printf(" * ");
	}
	printf("\n\n\t\t\t\t\tPress any key to continue....");
	getch();
	namefunc();
	return 0;
}

void namefunc() /// -------- I make this functions to add imotions of game ----------------------------
{
	int i, j=7;
	char name;
	system("cls");
	for(i=0;i<40;i++){
		
		printf(" * ");
	}
	printf("\n\n\n    ");
	for(i=0;i<strlen(logname);i++){
		delay(1);
		printf("%c", logname[i]);
	}
	printf("\n\n\n");
	for(i=0;i<40;i++){	
		printf(" * ");
	}
	printf("\n\n\n Enter your name: ");
	while(name!=13){
    name = getch();
    if(name!=13 && name!=8){	
        putch(name);
        playname[j]=name;
    j++;
    }
   }
   playname[j]='\0';
   mainmenu();		
}

void mainmenu() //// ---------- this functions make feel you come into the game. ----------------------
{
	int i=0;
	char w3[200]="Hellooo!! ";
	char w4[200]="welcome to my game.";
	system("cls");
	for(i=0;i<40;i++){
		printf(" * ");
	}
	printf("\n\n\n");
	printf("\t\t\t\t");
	for(i=0;i<strlen(w3);i++){
		delay(1);
		printf("%c",w3[i]);
	}
	printf(" ");
	for(i=0;i<strlen(playname);i++){
		delay(2);
		printf("%c", playname[i]);
	}
	printf(" ");
	for(i=0;i<strlen(w4);i++){
		delay(1);
		printf("%c",w4[i]);
	}
	printf("\n\n\n");
	for(i=0;i<40;i++){
		printf(" * ");
	}
	printf("\n\n\t\t\t\t\tPress any key to continue....");
	getch();
	options();
}

void options() /// -------- I make this functions to add imotions of game ----------------------------
{
	int i=0;
	char y[200]="Alright! Now I hope your enjoy my question game.", cns;
	char a[200]="Hmmm.......\n    Ok, it seems like you refuse to my request. \n    However, you still have to play the game anyways since I need to collect the data about HUMA.........";
	char a1[20]="\n    I mean, you...";
	system("cls");
	for(i=0;i<40;i++){
		printf(" * ");
	}
	printf("\n\n\n    ");
	for(i=0;i<strlen(logoption);i++){
		delay(1);
		printf("%c", logoption[i]);
	}
	printf("\n\n\n");
	for(i=0;i<40;i++){
		printf(" * ");
	}
	delay(1);
	printf("\n\n\t\t\t\t\tPress Y to accept or N to refuse....");
	cns=getch();
	if(cns=='Y' || cns=='y'){
		system("cls");
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n\n    ");
		for(i=0;i<strlen(y);i++){
			delay(1);
			printf("%c", y[i]);
		}
		printf("\n\n\n");
		for(i=0;i<40;i++){
			printf(" * ");
		}
		printf("\n\n\t\t\t\t\tPress any key to continue....");
		getch();
		rule();
	}
	else{
		system("cls");
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n\n    ");
		for(i=0;i<strlen(a);i++){
			delay(1);
			printf("%c", a[i]);
		}
		delay(10);
		for(i=0;i<strlen(a1);i++){
			delay(1);
			printf("%c", a1[i]);
		}
		printf("\n\n\n");
		for(i=0;i<40;i++){
			printf(" * ");
		}
		printf("\n\n\t\t\t\t\tPress any key to continue....");
		getch();
		rule();
	}
}

void rule(){ ///----------------- Rule and how to play -------------------------------
	int i=0;
	system("cls");
	for(i=0;i<40;i++){
		delay(1);
		printf(" * ");
	}
	printf("\n\n\t\t\t\t\tRule & How to play");
	delay(2);
	printf("\n   1.You cannot go back and select a new one after you've already selected it.");
	delay(2);
	printf("\n   2.When you wants to answer, please select the choice according to what you wanted to answer.");
	delay(2);
	printf("\n   3.Play this game without being too serious, just be yourself and enjoy it.");
	delay(2);
	printf("\n\n");
	for(i=0;i<40;i++){
		delay(1);
		printf(" * ");
	}
	printf("\n\n\t\t\t\t\tPress any key to enjoy....");
	getch();
	mygame();
}	///----------------- Rule and how to play --------------------------

void mygame() ///------------ Main function to play game --------------------
{
	int i=0;
	char qans;
	char q1[200]="Who do you think is the cutest between a boy and a girl?", choice1[200]="A.Boy        B.Girl", head1[200]="QUESTION ONE";
	char q2[200]="Between table or chair which one you most favorite?", choice2[200]="A.Table       B.Chair", head2[200]="QUESTION TWO";
	char q3[200]="If you have to choose between losing both of your arms or eyes what will you choose", choice3[200]="A.Arms        B.Eyes", head3[200]="QUESTIION THREE";
	char q4[200]="what is more durable between bone and wood?", choice4[200]="A.Bone        B.Wood", head4[200]="QUESTION FOUR";
	char q5[200]="Do you think a human can become art?", choice5[200]="A.Yes        B.No", head5[200]="QUESTION FIVE";
	if (TIMENOW != 5){
		system("cls");
	if(TIMENOW==0){
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		for(i=0;i<strlen(head1);i++){
			delay(1);
			printf("%c", head1[i]);
		}
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		delay(4);
		printf("\n\n\t %s", q1);
		delay(3);
		printf("\n\n\t %s\n\n", choice1);
		for(i=0;i<32;i++){
			printf(" # ");
		}
	}
	else if(TIMENOW==1){
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		for(i=0;i<strlen(head2);i++){
			delay(1);
			printf("%c", head2[i]);
		}
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		delay(4);
		printf("\n\n\t %s", q2);
		delay(3);
		printf("\n\n\t  %s\n\n", choice2);
		for(i=0;i<32;i++){
			printf(" # ");
		}
	}
	else if(TIMENOW==2){
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		for(i=0;i<strlen(head3);i++){
			delay(1);
			printf("%c", head3[i]);
		}
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		delay(4);
		printf("\n\n\t %s", q3);
		delay(3);
		printf("\n\n\t  %s\n\n", choice3);
		for(i=0;i<32;i++){
			printf(" # ");
		}
	}
	else if(TIMENOW==3){
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		for(i=0;i<strlen(head4);i++){
			delay(1);
			printf("%c", head4[i]);
		}
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		delay(4);
		printf("\n\n\t %s", q4);
		delay(3);
		printf("\n\n\t  %s\n\n", choice4);
		for(i=0;i<32;i++){
			printf(" # ");
		}
	}
	else if(TIMENOW==4){
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		for(i=0;i<strlen(head5);i++){
			delay(1);
			printf("%c", head5[i]);
		}
		for(i=0;i<14;i++){
			delay(1);
			printf(" # ");
		}
		delay(4);
		printf("\n\n\t %s", q5);
		delay(3);
		printf("\n\n\t  %s\n\n", choice5);
		for(i=0;i<32;i++){
			printf(" # ");
		}
	}
	printf("\n\n\tSelect your choice.");
	qans=getch();
	if (qans=='a'|| qans=='A'){
		TIMENOW+=1;
		way1 = 1;
		logafmygame();
	}
	else{
		TIMENOW+=1;
		way2 = 1;
		logafmygame();
	}
	}
	else{
		endgame();
	}
}

void logafmygame(){ ///--------------------- active before main Function ------------------------------

	int i;
	///--------- LOG GAME interaction -------------
	char log11[1000]="OH I like your decision if I were you I would choose the same.\n    Boys always express out their courage and  patience, which they normally did it";
	char log12[1000]="OOOh a little girl I love when they cried for their mother. It reminds me of a little bird crying for its mother. How cute.\n    .... let's go to the next question.";
	char log21[1000]="I like it!. It's very easy to make a table, I like to make it myself and use it often.";
	char log22[1000]="This one is pretty difficult to make it, and I'm having a lot of trouble with the design.";
	char log31[1000]="wow...not very hard is it, of course, \n    it is easy for us to decide what to keep between things that are important and what are not, \n    even if we can't touch at least we still have a sight to see right?";
	char log32[1000]="Woahh you got some gut there, even I can't make myself choose this choice,\n    I really want to know why you choose such a cruel path, or maybe you just don't care? Whatever it's not my business anyway,\n    because the one who take the consequences of your action isn't me, right? littel one...of course, it is a joke why are people always so serious these days.";
	char log41[1000]="Oh!, I'm sorry to keep you waiting. I went out to do my little business.\n    Ahe just kidding it imposible I'm just a Ai I can't go anyway hahaha.";
	char log42[1000]="Oh!, I'm sorry to keep you waiting. I went out to do my little business.\n    Ahe just kidding it imposible I'm just a Ai I can't go anyway hahaha.";
	char log411[1500]="Hummmm?! give me a second. (Hey!!!, stay still. Goddammit, I'm talking with my new friend here in order to make you become my new piece of art.)\n    Ahem, move on to the next topic.";
	char log51[1000]="Ahh, I have a good eye, aren't I? Seems like you are quite similar to me, \n    huh? Well, I wish I could show you my brand new masterpiece but let keep it for the next time. Au revoir, \"Friend\".";
	char log52[1000]="..........What a pity, I thought we can be friends.\n    I'll keep this piece of art as a good memory about you as a reminder of the time we spent together. See you.";
	///-------- LOG GAME interaction --------------
	
	system("cls");
	if(TIMENOW == 1 && (way1==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		for(i=0;i<strlen(log11);i++){
			delay(1);
			printf("%c", log11[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
	}
	else if(TIMENOW == 1 &&(way2==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		for(i=0;i<strlen(log12);i++){
			delay(1);
			printf("%c", log12[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
	}
	else if(TIMENOW == 2 &&(way1==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		for(i=0;i<strlen(log21);i++){
			delay(1);
			printf("%c", log21[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
	}
	else if(TIMENOW == 2 &&(way2==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		for(i=0;i<strlen(log22);i++){
			delay(1);
			printf("%c", log22[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
	}
	else if(TIMENOW == 3 &&(way1==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		for(i=0;i<strlen(log31);i++){
			delay(1);
			printf("%c", log31[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
	}
	else if(TIMENOW == 3 &&(way2==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		for(i=0;i<strlen(log32);i++){
			delay(1);
			printf("%c", log32[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
	}
	else if(TIMENOW == 4 &&(way1==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		delay(40);
		for(i=0;i<strlen(log41);i++){
			delay(1);
			printf("%c", log41[i]);
		}
		printf("\n    ");
		delay(20);
		for(i=0;i<strlen(log411);i++){
			delay(0.6);
			printf("%c", log411[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
	}
	else if(TIMENOW == 4 &&(way2==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		delay(40);
		for(i=0;i<strlen(log42);i++){
			delay(1);
			printf("%c", log42[i]);
		}
		printf("\n    ");
		delay(20);
		for(i=0;i<strlen(log411);i++){
			delay(0.6);
			printf("%c", log411[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
	}
	else if(TIMENOW == 5 &&(way1==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		for(i=0;i<strlen(log51);i++){
			delay(1);
			printf("%c", log51[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
		delay(25);
	}
	else if(TIMENOW == 5 &&(way2==1)){
		for(i=0;i<40;i++){
		printf(" * ");
		}
		printf("\n\n    ");
		for(i=0;i<strlen(log52);i++){
			delay(1.5);
			printf("%c", log52[i]);
		}
		printf("\n\n");
		for(i=0;i<40;i++){
		printf(" * ");
		}
		delay(25);
	}
	way1=0;way2=0;
	delay(25);
	mygame();
}

void endgame(){  /// -------------------- endfunctions endlog endgame -----------------------------
	int i=0;
	char end1[1000]="thank for playing my game, see you rather when it that time has come.";
	system("cls");
	for(i=0;i<40;i++){
		printf(" * ");
	}
	printf("\n\n\t\t");
	for(i=0;i<strlen(end1);i++){
		delay(1);
		printf("%c", end1[i]);
	}
	printf("\n\n");
	for(i=0;i<40;i++){
		printf(" * ");
	}
	getch();
}





