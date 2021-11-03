#include "../content/Context.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "./MediaController.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	MediaController::MediaController(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	MediaController::MediaController(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.MediaController",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	MediaController::MediaController(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.MediaController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	MediaController::MediaController(android::content::Context arg0, jboolean arg1)
		: android::widget::FrameLayout(
			"android.widget.MediaController",
			"(Landroid/content/Context;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean MediaController::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	JString MediaController::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	void MediaController::hide() const
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	jboolean MediaController::isShowing() const
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	void MediaController::onFinishInflate() const
	{
		callMethod<void>(
			"onFinishInflate",
			"()V"
		);
	}
	jboolean MediaController::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean MediaController::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void MediaController::setAnchorView(android::view::View arg0) const
	{
		callMethod<void>(
			"setAnchorView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void MediaController::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void MediaController::setMediaPlayer(JObject arg0) const
	{
		callMethod<void>(
			"setMediaPlayer",
			"(Landroid/widget/MediaController$MediaPlayerControl;)V",
			arg0.object()
		);
	}
	void MediaController::setPrevNextListeners(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setPrevNextListeners",
			"(Landroid/view/View$OnClickListener;Landroid/view/View$OnClickListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
	void MediaController::show(jint arg0) const
	{
		callMethod<void>(
			"show",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

