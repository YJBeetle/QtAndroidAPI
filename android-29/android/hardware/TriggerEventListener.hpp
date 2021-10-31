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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TriggerEventListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TriggerEventListener(QAndroidJniObject obj);
		
		// Constructors
		TriggerEventListener();
		
		// Methods
		void onTrigger(android::hardware::TriggerEvent arg0);
	};
} // namespace android::hardware

