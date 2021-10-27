#include "../content/Context.hpp"
#include "./AdapterViewFlipper.hpp"

namespace android::widget
{
	// Fields
	
	AdapterViewFlipper::AdapterViewFlipper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AdapterViewFlipper::AdapterViewFlipper(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	AdapterViewFlipper::AdapterViewFlipper(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	AdapterViewFlipper::AdapterViewFlipper(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	AdapterViewFlipper::AdapterViewFlipper(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void AdapterViewFlipper::fyiWillBeAdvancedByHostKThx()
	{
		__thiz.callMethod<void>(
			"fyiWillBeAdvancedByHostKThx",
			"()V"
		);
	}
	jstring AdapterViewFlipper::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AdapterViewFlipper::getFlipInterval()
	{
		return __thiz.callMethod<jint>(
			"getFlipInterval",
			"()I"
		);
	}
	jboolean AdapterViewFlipper::isAutoStart()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoStart",
			"()Z"
		);
	}
	jboolean AdapterViewFlipper::isFlipping()
	{
		return __thiz.callMethod<jboolean>(
			"isFlipping",
			"()Z"
		);
	}
	void AdapterViewFlipper::setAdapter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterViewFlipper::setAutoStart(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoStart",
			"(Z)V",
			arg0
		);
	}
	void AdapterViewFlipper::setFlipInterval(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFlipInterval",
			"(I)V",
			arg0
		);
	}
	void AdapterViewFlipper::showNext()
	{
		__thiz.callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void AdapterViewFlipper::showPrevious()
	{
		__thiz.callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
	void AdapterViewFlipper::startFlipping()
	{
		__thiz.callMethod<void>(
			"startFlipping",
			"()V"
		);
	}
	void AdapterViewFlipper::stopFlipping()
	{
		__thiz.callMethod<void>(
			"stopFlipping",
			"()V"
		);
	}
} // namespace android::widget

