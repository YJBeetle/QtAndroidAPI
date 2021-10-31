#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./GridLayout_Spec.hpp"
#include "./GridLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	QAndroidJniObject GridLayout_LayoutParams::columnSpec()
	{
		return __thiz.getObjectField(
			"columnSpec",
			"Landroid/widget/GridLayout$Spec;"
		);
	}
	QAndroidJniObject GridLayout_LayoutParams::rowSpec()
	{
		return __thiz.getObjectField(
			"rowSpec",
			"Landroid/widget/GridLayout$Spec;"
		);
	}
	
	GridLayout_LayoutParams::GridLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GridLayout_LayoutParams::GridLayout_LayoutParams()
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"()V"
		);
	}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::widget::GridLayout_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/widget/GridLayout$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::widget::GridLayout_Spec arg0, android::widget::GridLayout_Spec arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/widget/GridLayout$Spec;Landroid/widget/GridLayout$Spec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean GridLayout_LayoutParams::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint GridLayout_LayoutParams::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void GridLayout_LayoutParams::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

