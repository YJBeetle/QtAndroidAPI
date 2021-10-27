#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accessibilityservice
{
	class AccessibilityService;
}
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
		
		AccessibilityService_SoftKeyboardController(QAndroidJniObject obj);
		// Constructors
		AccessibilityService_SoftKeyboardController() = default;
		
		// Methods
		void addOnShowModeChangedListener(__JniBaseClass arg0);
		void addOnShowModeChangedListener(__JniBaseClass arg0, android::os::Handler arg1);
		jint getShowMode();
		jboolean removeOnShowModeChangedListener(__JniBaseClass arg0);
		jboolean setShowMode(jint arg0);
	};
} // namespace android::accessibilityservice

