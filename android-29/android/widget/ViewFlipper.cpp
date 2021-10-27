#include "../content/Context.hpp"
#include "./ViewFlipper.hpp"

namespace android::widget
{
	// Fields
	
	ViewFlipper::ViewFlipper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewFlipper::ViewFlipper(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ViewFlipper::ViewFlipper(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring ViewFlipper::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ViewFlipper::getFlipInterval()
	{
		return __thiz.callMethod<jint>(
			"getFlipInterval",
			"()I"
		);
	}
	jboolean ViewFlipper::isAutoStart()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoStart",
			"()Z"
		);
	}
	jboolean ViewFlipper::isFlipping()
	{
		return __thiz.callMethod<jboolean>(
			"isFlipping",
			"()Z"
		);
	}
	void ViewFlipper::setAutoStart(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoStart",
			"(Z)V",
			arg0
		);
	}
	void ViewFlipper::setFlipInterval(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFlipInterval",
			"(I)V",
			arg0
		);
	}
	void ViewFlipper::startFlipping()
	{
		__thiz.callMethod<void>(
			"startFlipping",
			"()V"
		);
	}
	void ViewFlipper::stopFlipping()
	{
		__thiz.callMethod<void>(
			"stopFlipping",
			"()V"
		);
	}
} // namespace android::widget

