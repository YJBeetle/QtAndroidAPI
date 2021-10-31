#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../widget/TextView.hpp"
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
		
		ExtractEditText(QAndroidJniObject obj);
		// Constructors
		ExtractEditText(android::content::Context arg0);
		ExtractEditText(android::content::Context arg0, __JniBaseClass arg1);
		ExtractEditText(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		ExtractEditText(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		ExtractEditText() = default;
		
		// Methods
		void finishInternalChanges();
		jboolean hasFocus();
		jboolean hasVerticalScrollBar();
		jboolean hasWindowFocus();
		jboolean isFocused();
		jboolean isInputMethodTarget();
		jboolean onTextContextMenuItem(jint arg0);
		jboolean performClick();
		void setExtractedText(android::view::inputmethod::ExtractedText arg0);
		void startInternalChanges();
	};
} // namespace android::inputmethodservice

