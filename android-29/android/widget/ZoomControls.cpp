#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"
#include "../../JString.hpp"
#include "./ZoomControls.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ZoomControls::ZoomControls(QJniObject obj) : android::widget::LinearLayout(obj) {}
	
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
	JString ZoomControls::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ZoomControls::hasFocus()
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	void ZoomControls::hide()
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	jboolean ZoomControls::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void ZoomControls::setIsZoomInEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setIsZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomControls::setIsZoomOutEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setIsZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomControls::setOnZoomInClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnZoomInClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void ZoomControls::setOnZoomOutClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnZoomOutClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void ZoomControls::setZoomSpeed(jlong arg0)
	{
		callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
	void ZoomControls::show()
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

