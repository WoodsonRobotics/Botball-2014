#define liftPort 3   // servo

void lift() {
	set_servo_position(liftPort, 1050);
}
