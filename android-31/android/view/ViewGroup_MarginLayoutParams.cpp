#include "../content/Context.hpp"
#include "./ViewGroup_LayoutParams.hpp"
#include "./ViewGroup_MarginLayoutParams.hpp"

namespace android::view
{
	// Fields
	jint ViewGroup_MarginLayoutParams::bottomMargin()
	{
		return getField<jint>(
			"bottomMargin"
		);
	}
	jint ViewGroup_MarginLayoutParams::leftMargin()
	{
		return getField<jint>(
			"leftMargin"
		);
	}
	jint ViewGroup_MarginLayoutParams::rightMargin()
	{
		return getField<jint>(
			"rightMargin"
		);
	}
	jint ViewGroup_MarginLayoutParams::topMargin()
	{
		return getField<jint>(
			"topMargin"
		);
	}
	
	// QJniObject forward
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(QJniObject obj) : android::view::ViewGroup_LayoutParams(obj) {}
	
	// Constructors
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(android::view::ViewGroup_MarginLayoutParams &arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.view.ViewGroup$MarginLayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint ViewGroup_MarginLayoutParams::getLayoutDirection()
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	jint ViewGroup_MarginLayoutParams::getMarginEnd()
	{
		return callMethod<jint>(
			"getMarginEnd",
			"()I"
		);
	}
	jint ViewGroup_MarginLayoutParams::getMarginStart()
	{
		return callMethod<jint>(
			"getMarginStart",
			"()I"
		);
	}
	jboolean ViewGroup_MarginLayoutParams::isMarginRelative()
	{
		return callMethod<jboolean>(
			"isMarginRelative",
			"()Z"
		);
	}
	void ViewGroup_MarginLayoutParams::resolveLayoutDirection(jint arg0)
	{
		callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setLayoutDirection(jint arg0)
	{
		callMethod<void>(
			"setLayoutDirection",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setMarginEnd(jint arg0)
	{
		callMethod<void>(
			"setMarginEnd",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setMarginStart(jint arg0)
	{
		callMethod<void>(
			"setMarginStart",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setMargins(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setMargins",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::view

