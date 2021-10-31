#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./FrameLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	jint FrameLayout_LayoutParams::UNSPECIFIED_GRAVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.FrameLayout$LayoutParams",
			"UNSPECIFIED_GRAVITY"
		);
	}
	jint FrameLayout_LayoutParams::gravity()
	{
		return __thiz.getField<jint>(
			"gravity"
		);
	}
	
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::widget::FrameLayout_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/widget/FrameLayout$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.FrameLayout$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::widget

