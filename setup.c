#define lightPort 0   // infrared analog

void setup() {
	
	enable_servos();

	wait_for_light(lightPort);
	beep();

	shut_down_in(120);	
	
}
