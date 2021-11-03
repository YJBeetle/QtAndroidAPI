#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./CheckBox.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	CheckBox::CheckBox(QAndroidJniObject obj) : android::widget::CompoundButton(obj) {}
	
	// Constructors
	CheckBox::CheckBox(android::content::Context arg0)
		: android::widget::CompoundButton(
			"android.widget.CheckBox",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	CheckBox::CheckBox(android::content::Context arg0, JObject arg1)
		: android::widget::CompoundButton(
			"android.widget.CheckBox",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	CheckBox::CheckBox(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::CompoundButton(
			"android.widget.CheckBox",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	CheckBox::CheckBox(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::CompoundButton(
			"android.widget.CheckBox",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString CheckBox::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
} // namespace android::widget

