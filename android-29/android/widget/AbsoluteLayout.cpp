#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./AbsoluteLayout.hpp"

namespace android::widget
{
	// Fields
	
	AbsoluteLayout::AbsoluteLayout(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbsoluteLayout::AbsoluteLayout(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	AbsoluteLayout::AbsoluteLayout(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	AbsoluteLayout::AbsoluteLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	AbsoluteLayout::AbsoluteLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject AbsoluteLayout::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jboolean AbsoluteLayout::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace android::widget

