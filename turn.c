#define leftWheel 1   // motor
#define rightWheel 0  // motor

void turn(int degree, int direction) { // degree is in 1,2,3,4 each one being a quarter turn. 
	                                    // direction is -1 or 1, positive is counterclockwise
	mav(rightWheel, -800 * direction);
	mav(leftWheel, -800 * direction);
	msleep(750 * degree);
	mav(rightWheel, 0);
	mav(leftWheel, 0);

}

