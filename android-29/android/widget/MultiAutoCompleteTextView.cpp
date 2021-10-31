#include "../content/Context.hpp"
#include "./MultiAutoCompleteTextView.hpp"

namespace android::widget
{
	// Fields
	
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean MultiAutoCompleteTextView::enoughToFilter()
	{
		return __thiz.callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	jstring MultiAutoCompleteTextView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void MultiAutoCompleteTextView::performValidation()
	{
		__thiz.callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	void MultiAutoCompleteTextView::setTokenizer(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTokenizer",
			"(Landroid/widget/MultiAutoCompleteTextView$Tokenizer;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

