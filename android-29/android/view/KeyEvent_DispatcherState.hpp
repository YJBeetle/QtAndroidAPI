#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class KeyEvent;
}

namespace android::view
{
	class KeyEvent_DispatcherState : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyEvent_DispatcherState(QAndroidJniObject obj);
		// Constructors
		KeyEvent_DispatcherState();
		
		// Methods
		void handleUpEvent(android::view::KeyEvent arg0);
		jboolean isTracking(android::view::KeyEvent arg0);
		void performedLongPress(android::view::KeyEvent arg0);
		void reset();
		void reset(jobject arg0);
		void startTracking(android::view::KeyEvent arg0, jobject arg1);
	};
} // namespace android::view

