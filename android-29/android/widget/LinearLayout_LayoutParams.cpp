#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	jint LinearLayout_LayoutParams::gravity()
	{
		return __thiz.getField<jint>(
			"gravity"
		);
	}
	jfloat LinearLayout_LayoutParams::weight()
	{
		return __thiz.getField<jfloat>(
			"weight"
		);
	}
	
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::widget::LinearLayout_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/widget/LinearLayout$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout$LayoutParams",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jstring LinearLayout_LayoutParams::debug(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::widget

