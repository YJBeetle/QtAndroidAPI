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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityService_SoftKeyboardController(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_SoftKeyboardController(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnShowModeChangedListener(__JniBaseClass arg0);
		void addOnShowModeChangedListener(__JniBaseClass arg0, android::os::Handler arg1);
		jint getShowMode();
		jboolean removeOnShowModeChangedListener(__JniBaseClass arg0);
		jboolean setShowMode(jint arg0);
	};
} // namespace android::accessibilityservice

