#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::display
{
	class VirtualDisplay_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		VirtualDisplay_Callback(QAndroidJniObject obj);
		// Constructors
		VirtualDisplay_Callback();
		
		// Methods
		void onPaused();
		void onResumed();
		void onStopped();
	};
} // namespace android::hardware::display

