void linefollow() {
	printf("Following line...");
	
	while(digital(8) == 0) {
		if(isOnLine() == 0) {
			motor(rightWheel, 250);
		} else {
				motor(leftWheel, 250);
		  }
	}
}

