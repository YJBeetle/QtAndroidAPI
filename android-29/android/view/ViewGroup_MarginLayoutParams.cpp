#include "../content/Context.hpp"
#include "./ViewGroup_LayoutParams.hpp"
#include "./ViewGroup_MarginLayoutParams.hpp"

namespace android::view
{
	// Fields
	jint ViewGroup_MarginLayoutParams::bottomMargin()
	{
		return __thiz.getField<jint>(
			"bottomMargin"
		);
	}
	jint ViewGroup_MarginLayoutParams::leftMargin()
	{
		return __thiz.getField<jint>(
			"leftMargin"
		);
	}
	jint ViewGroup_MarginLayoutParams::rightMargin()
	{
		return __thiz.getField<jint>(
			"rightMargin"
		);
	}
	jint ViewGroup_MarginLayoutParams::topMargin()
	{
		return __thiz.getField<jint>(
			"topMargin"
		);
	}
	
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(android::view::ViewGroup_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(android::view::ViewGroup_MarginLayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$MarginLayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint ViewGroup_MarginLayoutParams::getLayoutDirection()
	{
		return __thiz.callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	jint ViewGroup_MarginLayoutParams::getMarginEnd()
	{
		return __thiz.callMethod<jint>(
			"getMarginEnd",
			"()I"
		);
	}
	jint ViewGroup_MarginLayoutParams::getMarginStart()
	{
		return __thiz.callMethod<jint>(
			"getMarginStart",
			"()I"
		);
	}
	jboolean ViewGroup_MarginLayoutParams::isMarginRelative()
	{
		return __thiz.callMethod<jboolean>(
			"isMarginRelative",
			"()Z"
		);
	}
	void ViewGroup_MarginLayoutParams::resolveLayoutDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setLayoutDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutDirection",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setMarginEnd(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMarginEnd",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setMarginStart(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMarginStart",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setMargins(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setMargins",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::view

