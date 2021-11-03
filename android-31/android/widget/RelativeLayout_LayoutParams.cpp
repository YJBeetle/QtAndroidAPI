#include "../../JIntArray.hpp"
#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "../../JString.hpp"
#include "./RelativeLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	jboolean RelativeLayout_LayoutParams::alignWithParent()
	{
		return getField<jboolean>(
			"alignWithParent"
		);
	}
	
	// QJniObject forward
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(QJniObject obj) : android::view::ViewGroup_MarginLayoutParams(obj) {}
	
	// Constructors
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.object()
		) {}
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::widget::RelativeLayout_LayoutParams &arg0)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/widget/RelativeLayout$LayoutParams;)V",
			arg0.object()
		) {}
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_MarginLayoutParams(
			"android.widget.RelativeLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void RelativeLayout_LayoutParams::addRule(jint arg0)
	{
		callMethod<void>(
			"addRule",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout_LayoutParams::addRule(jint arg0, jint arg1)
	{
		callMethod<void>(
			"addRule",
			"(II)V",
			arg0,
			arg1
		);
	}
	JString RelativeLayout_LayoutParams::debug(JString arg0)
	{
		return callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jint RelativeLayout_LayoutParams::getRule(jint arg0)
	{
		return callMethod<jint>(
			"getRule",
			"(I)I",
			arg0
		);
	}
	JIntArray RelativeLayout_LayoutParams::getRules()
	{
		return callObjectMethod(
			"getRules",
			"()[I"
		);
	}
	void RelativeLayout_LayoutParams::removeRule(jint arg0)
	{
		callMethod<void>(
			"removeRule",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout_LayoutParams::resolveLayoutDirection(jint arg0)
	{
		callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

