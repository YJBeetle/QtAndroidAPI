#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./GridLayout_Spec.hpp"
#include "./GridLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	android::widget::GridLayout_Spec GridLayout_LayoutParams::columnSpec()
	{
		return getObjectField(
			"columnSpec",
			"Landroid/widget/GridLayout$Spec;"
		);
	}
	android::widget::GridLayout_Spec GridLayout_LayoutParams::rowSpec()
	{
		return getObjectField(
			"rowSpec",
			"Landroid/widget/GridLayout$Spec;"
		);
	}
	
	// QJniObject forward
	GridLayout_LayoutParams::GridLayout_LayoutParams(QJniObject obj) : android::view::ViewGroup_MarginLayoutParams(obj) {}
	
	// Constructors
	GridLayout_LayoutParams::GridLayout_LayoutParams()
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"()V"
		) {}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::widget::GridLayout_LayoutParams &arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/widget/GridLayout$LayoutParams;)V",
			arg0.object()
		) {}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	GridLayout_LayoutParams::GridLayout_LayoutParams(android::widget::GridLayout_Spec arg0, android::widget::GridLayout_Spec arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.GridLayout$LayoutParams",
			"(Landroid/widget/GridLayout$Spec;Landroid/widget/GridLayout$Spec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean GridLayout_LayoutParams::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint GridLayout_LayoutParams::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void GridLayout_LayoutParams::setGravity(jint arg0)
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

