#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class TriggerEvent;
}

namespace android::hardware
{
	class TriggerEventListener : public __JniBaseClass
	{
	public:
		// Fields
		
		TriggerEventListener(QAndroidJniObject obj);
		// Constructors
		TriggerEventListener();
		
		// Methods
		void onTrigger(android::hardware::TriggerEvent arg0);
	};
} // namespace android::hardware

