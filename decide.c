void decide() {
	
	camera_close();
	camera_open(LOW_RES);
	camera_update();

while((get_object_count(pinkVal) == 0) && (get_object_count(greenVal) == 0)) {

	mav(sweeperPort, 200);
	msleep(300);
	
	camera_update();
}

if(get_object_count(pinkVal) > get_object_count(greenVal)) {
	mav(rightWheel, -200);
	msleep(300);
	mav(rightWheel, 0);
	mav(sweeperPort, 300);
	msleep(300);
	mav(sweeperPort, 0);
	mav(rightWheel, 200);
	msleep(300);
} else if(get_object_count(pinkVal) < get_object_count(greenVal)) {
		mav(rightWheel, 200);
		msleep(300);
		mav(rightWheel, 0);
		mav(sweeperPort, 300);
		msleep(300);
		mav(sweeperPort, 0);
		mav(rightWheel, -200);
		msleep(300);
	}


		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	
		if(get_object_count(pinkVal) > get_object_count(greenVal)) {
				printf("pink \n");
				mav(rightWheel, 50);
				msleep(100);
				//sweeper(-1,1);
				// need to account for when poms are not directly next to eachother in treads...
				set_servo_position(trackPort, restPos);
		}
		if(get_object_count(pinkVal) < get_object_count(greenVal)) {
				printf("green \n");
				mav(rightWheel, -50);
				msleep(100);
				//sweeper(-1,1);
				// need to account for when poms are not directly next to eachother in treads...
				set_servo_position(trackPort, restPos);
		}
		
		msleep(500);
	
	
}
*/
