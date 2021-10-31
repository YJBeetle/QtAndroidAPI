#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./FrameLayout_LayoutParams.hpp"
#include "./FrameLayout.hpp"

namespace android::widget
{
	// Fields
	
	FrameLayout::FrameLayout(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FrameLayout::FrameLayout(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	FrameLayout::FrameLayout(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	FrameLayout::FrameLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	FrameLayout::FrameLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject FrameLayout::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring FrameLayout::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean FrameLayout::getConsiderGoneChildrenWhenMeasuring()
	{
		return __thiz.callMethod<jboolean>(
			"getConsiderGoneChildrenWhenMeasuring",
			"()Z"
		);
	}
	jboolean FrameLayout::getMeasureAllChildren()
	{
		return __thiz.callMethod<jboolean>(
			"getMeasureAllChildren",
			"()Z"
		);
	}
	void FrameLayout::setForegroundGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setForegroundGravity",
			"(I)V",
			arg0
		);
	}
	void FrameLayout::setMeasureAllChildren(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMeasureAllChildren",
			"(Z)V",
			arg0
		);
	}
	jboolean FrameLayout::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace android::widget

