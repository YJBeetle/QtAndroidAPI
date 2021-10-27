#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./ActionMenuView_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(android::view::ViewGroup_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(android::widget::ActionMenuView_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/widget/ActionMenuView$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ActionMenuView_LayoutParams::ActionMenuView_LayoutParams(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::widget

