#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Handler;
}

namespace android::accessibilityservice
{
	class AccessibilityService_SoftKeyboardController : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityService_SoftKeyboardController(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_SoftKeyboardController(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnShowModeChangedListener(__JniBaseClass arg0);
		void addOnShowModeChangedListener(__JniBaseClass arg0, android::os::Handler arg1);
		jint getShowMode();
		jboolean removeOnShowModeChangedListener(__JniBaseClass arg0);
		jboolean setShowMode(jint arg0);
		jboolean switchToInputMethod(jstring arg0);
	};
} // namespace android::accessibilityservice

