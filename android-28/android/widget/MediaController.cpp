#include "../content/Context.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
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
	jboolean MediaController::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jstring MediaController::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void MediaController::hide()
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	jboolean MediaController::isShowing()
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	void MediaController::onFinishInflate()
	{
		callMethod<void>(
			"onFinishInflate",
			"()V"
		);
	}
	jboolean MediaController::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean MediaController::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void MediaController::setAnchorView(android::view::View arg0)
	{
		callMethod<void>(
			"setAnchorView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void MediaController::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void MediaController::setMediaPlayer(JObject arg0)
	{
		callMethod<void>(
			"setMediaPlayer",
			"(Landroid/widget/MediaController$MediaPlayerControl;)V",
			arg0.object()
		);
	}
	void MediaController::setPrevNextListeners(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"setPrevNextListeners",
			"(Landroid/view/View$OnClickListener;Landroid/view/View$OnClickListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController::show()
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
	void MediaController::show(jint arg0)
	{
		callMethod<void>(
			"show",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

