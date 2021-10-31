#include "../content/Context.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "./ExtractEditText.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// QJniObject forward
	ExtractEditText::ExtractEditText(QJniObject obj) : android::widget::EditText(obj) {}
	
	// Constructors
	ExtractEditText::ExtractEditText(android::content::Context arg0)
		: android::widget::EditText(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ExtractEditText::ExtractEditText(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::EditText(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ExtractEditText::ExtractEditText(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::EditText(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ExtractEditText::ExtractEditText(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::EditText(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void ExtractEditText::finishInternalChanges()
	{
		callMethod<void>(
			"finishInternalChanges",
			"()V"
		);
	}
	jboolean ExtractEditText::hasFocus()
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	jboolean ExtractEditText::hasVerticalScrollBar()
	{
		return callMethod<jboolean>(
			"hasVerticalScrollBar",
			"()Z"
		);
	}
	jboolean ExtractEditText::hasWindowFocus()
	{
		return callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	jboolean ExtractEditText::isFocused()
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean ExtractEditText::isInputMethodTarget()
	{
		return callMethod<jboolean>(
			"isInputMethodTarget",
			"()Z"
		);
	}
	jboolean ExtractEditText::onTextContextMenuItem(jint arg0)
	{
		return callMethod<jboolean>(
			"onTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	jboolean ExtractEditText::performClick()
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	void ExtractEditText::setExtractedText(android::view::inputmethod::ExtractedText arg0)
	{
		callMethod<void>(
			"setExtractedText",
			"(Landroid/view/inputmethod/ExtractedText;)V",
			arg0.object()
		);
	}
	void ExtractEditText::startInternalChanges()
	{
		callMethod<void>(
			"startInternalChanges",
			"()V"
		);
	}
} // namespace android::inputmethodservice

