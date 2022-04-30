#include <Arduino.h>
#include "Definitions.h"
class Keys
{
public:
	int OnPress;
	int OnRelease;
	bool isPressed = false;
	Keys(int onPress, int onRelease);

	void process(int pin_num);
};

// tab and `
