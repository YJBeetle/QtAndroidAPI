#pragma once

#include "../../JObject.hpp"

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
	class AccessibilityService_SoftKeyboardController : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityService_SoftKeyboardController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_SoftKeyboardController(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnShowModeChangedListener(JObject arg0);
		void addOnShowModeChangedListener(JObject arg0, android::os::Handler arg1);
		jint getShowMode();
		jboolean removeOnShowModeChangedListener(JObject arg0);
		jboolean setShowMode(jint arg0);
	};
} // namespace android::accessibilityservice

