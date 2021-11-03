#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./ViewFlipper.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ViewFlipper::ViewFlipper(QAndroidJniObject obj) : android::widget::ViewAnimator(obj) {}
	
	// Constructors
	ViewFlipper::ViewFlipper(android::content::Context arg0)
		: android::widget::ViewAnimator(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ViewFlipper::ViewFlipper(android::content::Context arg0, JObject arg1)
		: android::widget::ViewAnimator(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JString ViewFlipper::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ViewFlipper::isAutoStart() const
	{
		return callMethod<jboolean>(
			"isAutoStart",
			"()Z"
		);
	}
	jboolean ViewFlipper::isFlipping() const
	{
		return callMethod<jboolean>(
			"isFlipping",
			"()Z"
		);
	}
	void ViewFlipper::setAutoStart(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoStart",
			"(Z)V",
			arg0
		);
	}
	void ViewFlipper::setFlipInterval(jint arg0) const
	{
		callMethod<void>(
			"setFlipInterval",
			"(I)V",
			arg0
		);
	}
	void ViewFlipper::startFlipping() const
	{
		callMethod<void>(
			"startFlipping",
			"()V"
		);
	}
	void ViewFlipper::stopFlipping() const
	{
		callMethod<void>(
			"stopFlipping",
			"()V"
		);
	}
} // namespace android::widget

