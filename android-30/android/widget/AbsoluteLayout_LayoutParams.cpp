#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../../JString.hpp"
#include "./AbsoluteLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	jint AbsoluteLayout_LayoutParams::x()
	{
		return getField<jint>(
			"x"
		);
	}
	jint AbsoluteLayout_LayoutParams::y()
	{
		return getField<jint>(
			"y"
		);
	}
	
	// QAndroidJniObject forward
	AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(QAndroidJniObject obj) : android::view::ViewGroup_LayoutParams(obj) {}
	
	// Constructors
	AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsoluteLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsoluteLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.AbsoluteLayout$LayoutParams",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	JString AbsoluteLayout_LayoutParams::debug(JString arg0) const
	{
		return callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

