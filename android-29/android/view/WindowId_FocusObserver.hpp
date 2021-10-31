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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowId_FocusObserver(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowId_FocusObserver(QAndroidJniObject obj);
		
		// Constructors
		WindowId_FocusObserver();
		
		// Methods
		void onFocusGained(android::view::WindowId arg0);
		void onFocusLost(android::view::WindowId arg0);
	};
} // namespace android::view

