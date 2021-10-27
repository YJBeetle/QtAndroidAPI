#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"
#include "./ZoomControls.hpp"

namespace android::widget
{
	// Fields
	
	ZoomControls::ZoomControls(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZoomControls::ZoomControls(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomControls",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ZoomControls::ZoomControls(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomControls",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring ZoomControls::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ZoomControls::hasFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	void ZoomControls::hide()
	{
		__thiz.callMethod<void>(
			"hide",
			"()V"
		);
	}
	jboolean ZoomControls::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ZoomControls::setIsZoomInEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomControls::setIsZoomOutEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomControls::setOnZoomInClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnZoomInClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ZoomControls::setOnZoomOutClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnZoomOutClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ZoomControls::setZoomSpeed(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
	void ZoomControls::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

