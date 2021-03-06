#include <stdio.h> 
#include <stdlib.h>

#define leftWheel 1   // motor
#define rightWheel 0  // motor
#define sweeperPort 3 // motor
#define raisePort 0   // servo
#define liftPort 3   // servo
#define lightPort 0   // infrared analog
#define topHatPort 11 // analog

#define restPos 1024
#define pinkVal 0
#define greenVal 1

void lift();
void turn(int degree, int direction);
void move(int speed, int seconds);
void sweeper(int d,int t);
void setup(); 
void decide();
int main() {
	
	setup();
	
	printf("Hello World! \n I'm Martha and you're about to get rekt. \n");
	
	printf("To the poms! \n");
	move(1500,2);
	system("clear");
	
	printf("Munch munch munch... \n");
	turn(1,1);           // swing around to gather poms
	sweeper(-1,10);
	system("clear");
	
	printf("To the poms! \n");
	move(800,5);
	system("clear");
	
	printf("Munch munch munch... \n");
	turn(2,-1);           // swing around to gather poms
	sweeper(-1,10);
	system("clear");
	
	printf("To the line! \n");
	move(800,5);
	system("clear");
	
	lift();
	move(100,1);
	
	system("clear");
	printf("Sorting... \n");
	
	decide();
	decide();
	decide();
	decide();    // eight times because eight poms
	decide();
	decide();
	decide();
	decide();
	
	system("clear");
	printf("Backing up... \n");
	move(-500,1);       // back up to avoid vertical projection of bins
	msleep(1000);
	mav(leftWheel,0);
	mav(rightWheel,0);
	
	return 0;
}



