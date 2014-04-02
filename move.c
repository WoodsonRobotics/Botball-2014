#define leftWheel 1   // motor
#define rightWheel 0  // motor

void move(int speed, int seconds) {
		
	mav(leftWheel, speed);
	mav(rightWheel, speed);
	msleep(seconds * 1000);
	mav(leftWheel, 0);
	mav(rightWheel, 0);

}
