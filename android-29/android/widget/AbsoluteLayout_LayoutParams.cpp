#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./AbsoluteLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	jint AbsoluteLayout_LayoutParams::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint AbsoluteLayout_LayoutParams::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	
	AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsoluteLayout$LayoutParams",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring AbsoluteLayout_LayoutParams::debug(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::widget

