#include "../content/Context.hpp"
#include "./RadioButton.hpp"

namespace android::widget
{
	// Fields
	
	RadioButton::RadioButton(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RadioButton::RadioButton(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RadioButton",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	RadioButton::RadioButton(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RadioButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	RadioButton::RadioButton(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RadioButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	RadioButton::RadioButton(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RadioButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring RadioButton::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void RadioButton::toggle()
	{
		__thiz.callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget

