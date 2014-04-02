// still don't know whether/what to put in here vs header...
void setup() {
	enable_servos();

	wait_for_light(lightPort);
	beep();

	shutdown_in(119);			
}
