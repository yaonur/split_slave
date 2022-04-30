#include "Keys.h"
Keys::Keys(int onPress, int onRelease = 0)
{
	OnPress = onPress;
	OnRelease = onRelease;
}

void Keys::process(int pin_num)
{
	if (digitalRead(pin_num) == LOW && isPressed == false)
	{
		isPressed = true;
		Serial1.write(OnPress);
		debug("sending:");
		debugln(OnPress);
	}
	else if (digitalRead(pin_num) == HIGH && isPressed == true)
	{
		isPressed = false;
		if (OnRelease)
		{
			Serial1.write(OnRelease);
			debug("on relase:");
			debugln(OnRelease);
		}
	}
}

Keys r1c1(91); // [
Keys r1c2(112); // p and 1
Keys r1c3(111); // o and 2
Keys r1c4(105); // i and 3
Keys r1c5(117); // u and 4
Keys r1c6(121); // y and 5

Keys r2c1(39);	// '
Keys r2c2(59);	// ; and
Keys r2c3(108); // l and |
Keys r2c4(107); // k and (
Keys r2c5(106); // j and )
Keys r2c6(104); // h and &

Keys r3c1(93);	// ]
Keys r3c2(47); // /
Keys r3c3(46); // . and @
Keys r3c4(44); // , and#
Keys r3c5(109); // m and $
Keys r3c6(110); // n and ^

Keys r4c3(132, 130); // right alt
Keys r4c4(129, 133); // shift
Keys r4c5(254, 255);
Keys r4c6(176); // return