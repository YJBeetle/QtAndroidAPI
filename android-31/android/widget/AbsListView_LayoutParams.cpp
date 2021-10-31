#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./AbsListView_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	AbsListView_LayoutParams::AbsListView_LayoutParams(QAndroidJniObject obj) : android::view::ViewGroup_LayoutParams(obj) {}
	
	// Constructors
	AbsListView_LayoutParams::AbsListView_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsListView$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	AbsListView_LayoutParams::AbsListView_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsListView$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AbsListView_LayoutParams::AbsListView_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsListView$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	AbsListView_LayoutParams::AbsListView_LayoutParams(jint arg0, jint arg1, jint arg2)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsListView$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::widget

