#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class InputMethod;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view::inputmethod
{
	class SurroundingText;
}
namespace android::view::inputmethod
{
	class TextAttribute;
}
class JString;

namespace android::accessibilityservice
{
	class InputMethod_AccessibilityInputConnection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMethod_AccessibilityInputConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethod_AccessibilityInputConnection(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void clearMetaKeyStates(jint arg0) const;
		void commitText(JString arg0, jint arg1, android::view::inputmethod::TextAttribute arg2) const;
		void deleteSurroundingText(jint arg0, jint arg1) const;
		jint getCursorCapsMode(jint arg0) const;
		android::view::inputmethod::SurroundingText getSurroundingText(jint arg0, jint arg1, jint arg2) const;
		void performContextMenuAction(jint arg0) const;
		void performEditorAction(jint arg0) const;
		void sendKeyEvent(android::view::KeyEvent arg0) const;
		void setSelection(jint arg0, jint arg1) const;
	};
} // namespace android::accessibilityservice

