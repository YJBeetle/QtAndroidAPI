#include "../app/ActionBar_LayoutParams.hpp"
#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./Toolbar_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	
	Toolbar_LayoutParams::Toolbar_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Toolbar_LayoutParams::Toolbar_LayoutParams(android::app::ActionBar_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/app/ActionBar$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	Toolbar_LayoutParams::Toolbar_LayoutParams(android::view::ViewGroup_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	Toolbar_LayoutParams::Toolbar_LayoutParams(android::view::ViewGroup_MarginLayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	Toolbar_LayoutParams::Toolbar_LayoutParams(android::widget::Toolbar_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/widget/Toolbar$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	Toolbar_LayoutParams::Toolbar_LayoutParams(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(I)V",
			arg0
		);
	}
	Toolbar_LayoutParams::Toolbar_LayoutParams(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Toolbar_LayoutParams::Toolbar_LayoutParams(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	Toolbar_LayoutParams::Toolbar_LayoutParams(jint &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::widget

