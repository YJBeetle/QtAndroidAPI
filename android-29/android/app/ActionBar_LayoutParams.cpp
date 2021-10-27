#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./ActionBar_LayoutParams.hpp"

namespace android::app
{
	// Fields
	jint ActionBar_LayoutParams::gravity()
	{
		return __thiz.getField<jint>(
			"gravity"
		);
	}
	
	ActionBar_LayoutParams::ActionBar_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActionBar_LayoutParams::ActionBar_LayoutParams(android::app::ActionBar_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(Landroid/app/ActionBar$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	ActionBar_LayoutParams::ActionBar_LayoutParams(android::view::ViewGroup_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	ActionBar_LayoutParams::ActionBar_LayoutParams(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(I)V",
			arg0
		);
	}
	ActionBar_LayoutParams::ActionBar_LayoutParams(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ActionBar_LayoutParams::ActionBar_LayoutParams(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	ActionBar_LayoutParams::ActionBar_LayoutParams(jint &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::app

