#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class AccessibilityService;
}
namespace android::accessibilityservice
{
	class InputMethod_AccessibilityInputConnection;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}

namespace android::accessibilityservice
{
	class InputMethod : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethod(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethod(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		InputMethod(android::accessibilityservice::AccessibilityService arg0);
		
		// Methods
		android::accessibilityservice::InputMethod_AccessibilityInputConnection getCurrentInputConnection() const;
		android::view::inputmethod::EditorInfo getCurrentInputEditorInfo() const;
		jboolean getCurrentInputStarted() const;
		void onFinishInput() const;
		void onStartInput(android::view::inputmethod::EditorInfo arg0, jboolean arg1) const;
		void onUpdateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
	};
} // namespace android::accessibilityservice

