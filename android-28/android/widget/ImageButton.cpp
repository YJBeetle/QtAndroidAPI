#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "../../JString.hpp"
#include "./ImageButton.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ImageButton::ImageButton(QJniObject obj) : android::widget::ImageView(obj) {}
	
	// Constructors
	ImageButton::ImageButton(android::content::Context arg0)
		: android::widget::ImageView(
			"android.widget.ImageButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ImageButton::ImageButton(android::content::Context arg0, JObject arg1)
		: android::widget::ImageView(
			"android.widget.ImageButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ImageButton::ImageButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::ImageView(
			"android.widget.ImageButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ImageButton::ImageButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::ImageView(
			"android.widget.ImageButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString ImageButton::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::PointerIcon ImageButton::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

