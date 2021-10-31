#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./ActionMenuView_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(QAndroidJniObject obj) : android::widget::LinearLayout_LayoutParams(obj) {}
	
	// Constructors
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(android::widget::ActionMenuView_LayoutParams &arg0)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/widget/ActionMenuView$LayoutParams;)V",
			arg0.object()
		) {}
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(jint arg0, jint arg1)
		: android::widget::LinearLayout_LayoutParams(
			"android.widget.ActionMenuView$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::widget

