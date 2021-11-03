#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../../JString.hpp"
#include "./ToggleButton.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ToggleButton::ToggleButton(QAndroidJniObject obj) : android::widget::CompoundButton(obj) {}
	
	// Constructors
	ToggleButton::ToggleButton(android::content::Context arg0)
		: android::widget::CompoundButton(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ToggleButton::ToggleButton(android::content::Context arg0, JObject arg1)
		: android::widget::CompoundButton(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ToggleButton::ToggleButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::CompoundButton(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ToggleButton::ToggleButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::CompoundButton(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString ToggleButton::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString ToggleButton::getTextOff()
	{
		return callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString ToggleButton::getTextOn()
	{
		return callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;"
		);
	}
	void ToggleButton::setBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ToggleButton::setChecked(jboolean arg0)
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void ToggleButton::setTextOff(JString arg0)
	{
		callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ToggleButton::setTextOn(JString arg0)
	{
		callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

