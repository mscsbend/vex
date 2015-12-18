#pragma config(Sensor, dgtl1,  led1,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl2,  led2,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl3,  led3,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl4,  led4,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl5,  led5,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl6,  led6,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  led7,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  led8,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, sonar,          sensorSONAR_inch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	short leds[] = {led1, led2, led3, led4, led5, led6, led7, led8};
	while(true) {
		int distance = SensorValue[sonar];
		int value = 0;
		for(int i = 0; i<8; i++) {
			if(distance > 12*(i+1)) {
				value = 1;
			} else {
				value = 0;
			}
			SensorValue[leds[i]] = value;
		}
	}

}
