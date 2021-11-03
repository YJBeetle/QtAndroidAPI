#pragma once

#include "../widget/EditText.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::inputmethod
{
	class ExtractedText;
}

namespace android::inputmethodservice
{
	class ExtractEditText : public android::widget::EditText
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExtractEditText(const char *className, const char *sig, Ts...agv) : android::widget::EditText(className, sig, std::forward<Ts>(agv)...) {}
		ExtractEditText(QAndroidJniObject obj);
		
		// Constructors
		ExtractEditText(android::content::Context arg0);
		ExtractEditText(android::content::Context arg0, JObject arg1);
		ExtractEditText(android::content::Context arg0, JObject arg1, jint arg2);
		ExtractEditText(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void finishInternalChanges() const;
		jboolean hasFocus() const;
		jboolean hasVerticalScrollBar() const;
		jboolean hasWindowFocus() const;
		jboolean isFocused() const;
		jboolean isInputMethodTarget() const;
		jboolean onTextContextMenuItem(jint arg0) const;
		jboolean performClick() const;
		void setExtractedText(android::view::inputmethod::ExtractedText arg0) const;
		void startInternalChanges() const;
	};
} // namespace android::inputmethodservice

