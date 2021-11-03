#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "../../JString.hpp"
#include "./LinearLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	jint LinearLayout_LayoutParams::gravity()
	{
		return getField<jint>(
			"gravity"
		);
	}
	jfloat LinearLayout_LayoutParams::weight()
	{
		return getField<jfloat>(
			"weight"
		);
	}
	
	// QAndroidJniObject forward
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(QAndroidJniObject obj) : android::view::ViewGroup_MarginLayoutParams(obj) {}
	
	// Constructors
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::widget::LinearLayout_LayoutParams &arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/widget/LinearLayout$LayoutParams;)V",
			arg0.object()
		) {}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	LinearLayout_LayoutParams::LinearLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.LinearLayout$LayoutParams",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	JString LinearLayout_LayoutParams::debug(JString arg0) const
	{
		return callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

