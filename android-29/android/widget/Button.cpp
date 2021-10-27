#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "./Button.hpp"

namespace android::widget
{
	// Fields
	
	Button::Button(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Button::Button(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Button",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	Button::Button(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Button::Button(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	Button::Button(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring Button::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Button::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::widget

