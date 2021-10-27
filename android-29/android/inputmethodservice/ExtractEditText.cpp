#include "../content/Context.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "./ExtractEditText.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	ExtractEditText::ExtractEditText(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExtractEditText::ExtractEditText(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ExtractEditText::ExtractEditText(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ExtractEditText::ExtractEditText(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ExtractEditText::ExtractEditText(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void ExtractEditText::finishInternalChanges()
	{
		__thiz.callMethod<void>(
			"finishInternalChanges",
			"()V"
		);
	}
	jboolean ExtractEditText::hasFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	jboolean ExtractEditText::hasVerticalScrollBar()
	{
		return __thiz.callMethod<jboolean>(
			"hasVerticalScrollBar",
			"()Z"
		);
	}
	jboolean ExtractEditText::hasWindowFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	jboolean ExtractEditText::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean ExtractEditText::isInputMethodTarget()
	{
		return __thiz.callMethod<jboolean>(
			"isInputMethodTarget",
			"()Z"
		);
	}
	jboolean ExtractEditText::onTextContextMenuItem(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	jboolean ExtractEditText::performClick()
	{
		return __thiz.callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	void ExtractEditText::setExtractedText(android::view::inputmethod::ExtractedText arg0)
	{
		__thiz.callMethod<void>(
			"setExtractedText",
			"(Landroid/view/inputmethod/ExtractedText;)V",
			arg0.__jniObject().object()
		);
	}
	void ExtractEditText::startInternalChanges()
	{
		__thiz.callMethod<void>(
			"startInternalChanges",
			"()V"
		);
	}
} // namespace android::inputmethodservice

