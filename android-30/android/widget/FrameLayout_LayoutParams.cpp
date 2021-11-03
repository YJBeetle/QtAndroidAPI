#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./FrameLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	jint FrameLayout_LayoutParams::UNSPECIFIED_GRAVITY()
	{
		return getStaticField<jint>(
			"android.widget.FrameLayout$LayoutParams",
			"UNSPECIFIED_GRAVITY"
		);
	}
	jint FrameLayout_LayoutParams::gravity()
	{
		return getField<jint>(
			"gravity"
		);
	}
	
	// QAndroidJniObject forward
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(QAndroidJniObject obj) : android::view::ViewGroup_MarginLayoutParams(obj) {}
	
	// Constructors
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::widget::FrameLayout_LayoutParams &arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/widget/FrameLayout$LayoutParams;)V",
			arg0.object()
		) {}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	FrameLayout_LayoutParams::FrameLayout_LayoutParams(jint arg0, jint arg1, jint arg2)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.FrameLayout$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::widget

