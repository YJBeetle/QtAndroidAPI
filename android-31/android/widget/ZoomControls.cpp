#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"
#include "../../JString.hpp"
#include "./ZoomControls.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ZoomControls::ZoomControls(QAndroidJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	ZoomControls::ZoomControls(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.ZoomControls",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ZoomControls::ZoomControls(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.ZoomControls",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JString ZoomControls::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ZoomControls::hasFocus() const
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	void ZoomControls::hide() const
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	jboolean ZoomControls::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void ZoomControls::setIsZoomInEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setIsZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomControls::setIsZoomOutEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setIsZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomControls::setOnZoomInClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnZoomInClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void ZoomControls::setOnZoomOutClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnZoomOutClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void ZoomControls::setZoomSpeed(jlong arg0) const
	{
		callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
	void ZoomControls::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

