#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Handler;
}
class JString;

namespace android::accessibilityservice
{
	class AccessibilityService_SoftKeyboardController : public JObject
	{
	public:
		// Fields
		static jint ENABLE_IME_FAIL_BY_ADMIN();
		static jint ENABLE_IME_FAIL_UNKNOWN();
		static jint ENABLE_IME_SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityService_SoftKeyboardController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_SoftKeyboardController(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addOnShowModeChangedListener(JObject arg0) const;
		void addOnShowModeChangedListener(JObject arg0, android::os::Handler arg1) const;
		jint getShowMode() const;
		jboolean removeOnShowModeChangedListener(JObject arg0) const;
		jint setInputMethodEnabled(JString arg0, jboolean arg1) const;
		jboolean setShowMode(jint arg0) const;
		jboolean switchToInputMethod(JString arg0) const;
	};
} // namespace android::accessibilityservice

