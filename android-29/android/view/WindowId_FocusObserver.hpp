#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class WindowId;
}

namespace android::view
{
	class WindowId_FocusObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		WindowId_FocusObserver(QAndroidJniObject obj);
		// Constructors
		WindowId_FocusObserver();
		
		// Methods
		void onFocusGained(android::view::WindowId arg0);
		void onFocusLost(android::view::WindowId arg0);
	};
} // namespace android::view

