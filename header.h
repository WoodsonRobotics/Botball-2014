// note to everyone, servo/motor ports: 0 and 1 are flipped, 2 and 3 are flipped

/* Created on Wed February 19 2014
	Header contains:
		wait for light
		all "defines"
		when to shutdown
		motor and servo setup
		these comments
	Robot does:
		moves to pom pile
		sweeps up poms in track
		moves to other pile
		sweeps poms
		moves to line
		line follow
		SORT:
			camera looks at first position
			decided pink or green
			our colour = positive degres
			opponent colour = negative degrees
		no matter what, backs up in last three seconds to avoid nulling points
*/  

#ifndef header.h
#define header.h

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

enable_servos();

wait_for_light(lightPort);
beep();

shutdown_in(119);	



#endif
