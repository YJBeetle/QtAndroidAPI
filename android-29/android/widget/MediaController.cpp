#include "../content/Context.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "./MediaController.hpp"

namespace android::widget
{
	// Fields
	
	MediaController::MediaController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaController::MediaController(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MediaController",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	MediaController::MediaController(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MediaController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	MediaController::MediaController(android::content::Context arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MediaController",
			"(Landroid/content/Context;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jboolean MediaController::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring MediaController::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void MediaController::hide()
	{
		__thiz.callMethod<void>(
			"hide",
			"()V"
		);
	}
	jboolean MediaController::isShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	void MediaController::onFinishInflate()
	{
		__thiz.callMethod<void>(
			"onFinishInflate",
			"()V"
		);
	}
	jboolean MediaController::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean MediaController::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void MediaController::setAnchorView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setAnchorView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void MediaController::setMediaPlayer(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setMediaPlayer",
			"(Landroid/widget/MediaController$MediaPlayerControl;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController::setPrevNextListeners(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setPrevNextListeners",
			"(Landroid/view/View$OnClickListener;Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaController::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
	void MediaController::show(jint arg0)
	{
		__thiz.callMethod<void>(
			"show",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

