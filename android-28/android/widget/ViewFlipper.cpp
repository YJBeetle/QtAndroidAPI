#include "../content/Context.hpp"
#include "./ViewFlipper.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ViewFlipper::ViewFlipper(QJniObject obj) : android::widget::ViewAnimator(obj) {}
	
	// Constructors
	ViewFlipper::ViewFlipper(android::content::Context arg0)
		: android::widget::ViewAnimator(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ViewFlipper::ViewFlipper(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::ViewAnimator(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jstring ViewFlipper::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ViewFlipper::isAutoStart()
	{
		return callMethod<jboolean>(
			"isAutoStart",
			"()Z"
		);
	}
	jboolean ViewFlipper::isFlipping()
	{
		return callMethod<jboolean>(
			"isFlipping",
			"()Z"
		);
	}
	void ViewFlipper::setAutoStart(jboolean arg0)
	{
		callMethod<void>(
			"setAutoStart",
			"(Z)V",
			arg0
		);
	}
	void ViewFlipper::setFlipInterval(jint arg0)
	{
		callMethod<void>(
			"setFlipInterval",
			"(I)V",
			arg0
		);
	}
	void ViewFlipper::startFlipping()
	{
		callMethod<void>(
			"startFlipping",
			"()V"
		);
	}
	void ViewFlipper::stopFlipping()
	{
		callMethod<void>(
			"stopFlipping",
			"()V"
		);
	}
} // namespace android::widget

