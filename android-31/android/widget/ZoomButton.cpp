#include "../content/Context.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "./ZoomButton.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ZoomButton::ZoomButton(QJniObject obj) : android::widget::ImageButton(obj) {}
	
	// Constructors
	ZoomButton::ZoomButton(android::content::Context arg0)
		: android::widget::ImageButton(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ZoomButton::ZoomButton(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::ImageButton(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ZoomButton::ZoomButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::ImageButton(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ZoomButton::ZoomButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::ImageButton(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean ZoomButton::dispatchUnhandledMove(android::view::View arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	jstring ZoomButton::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ZoomButton::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean ZoomButton::onLongClick(android::view::View arg0)
	{
		return callMethod<jboolean>(
			"onLongClick",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean ZoomButton::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void ZoomButton::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButton::setZoomSpeed(jlong arg0)
	{
		callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
} // namespace android::widget

