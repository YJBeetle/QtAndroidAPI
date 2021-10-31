#include "../content/Context.hpp"
#include "./RadioButton.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	RadioButton::RadioButton(QJniObject obj) : android::widget::CompoundButton(obj) {}
	
	// Constructors
	RadioButton::RadioButton(android::content::Context arg0)
		: android::widget::CompoundButton(
			"android.widget.RadioButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	RadioButton::RadioButton(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::CompoundButton(
			"android.widget.RadioButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	RadioButton::RadioButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::CompoundButton(
			"android.widget.RadioButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	RadioButton::RadioButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::CompoundButton(
			"android.widget.RadioButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jstring RadioButton::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void RadioButton::toggle()
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget

