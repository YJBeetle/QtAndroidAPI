#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "../../JString.hpp"
#include "./Button.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	Button::Button(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.Button",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Button::Button(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	Button::Button(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Button::Button(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.Button",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString Button::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::PointerIcon Button::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

