#include "../content/Context.hpp"
#include "./TextView.hpp"
#include "../../JString.hpp"
#include "./TwoLineListItem.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	TwoLineListItem::TwoLineListItem(QJniObject obj) : android::widget::RelativeLayout(obj) {}
	
	// Constructors
	TwoLineListItem::TwoLineListItem(android::content::Context arg0)
		: android::widget::RelativeLayout(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TwoLineListItem::TwoLineListItem(android::content::Context arg0, JObject arg1)
		: android::widget::RelativeLayout(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TwoLineListItem::TwoLineListItem(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::RelativeLayout(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	TwoLineListItem::TwoLineListItem(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::RelativeLayout(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString TwoLineListItem::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::widget::TextView TwoLineListItem::getText1()
	{
		return callObjectMethod(
			"getText1",
			"()Landroid/widget/TextView;"
		);
	}
	android::widget::TextView TwoLineListItem::getText2()
	{
		return callObjectMethod(
			"getText2",
			"()Landroid/widget/TextView;"
		);
	}
} // namespace android::widget

