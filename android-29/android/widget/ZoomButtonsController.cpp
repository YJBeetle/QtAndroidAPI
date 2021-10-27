#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./ZoomButtonsController.hpp"

namespace android::widget
{
	// Fields
	
	ZoomButtonsController::ZoomButtonsController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZoomButtonsController::ZoomButtonsController(android::view::View &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomButtonsController",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ZoomButtonsController::getContainer()
	{
		return __thiz.callObjectMethod(
			"getContainer",
			"()Landroid/view/ViewGroup;"
		);
	}
	QAndroidJniObject ZoomButtonsController::getZoomControls()
	{
		return __thiz.callObjectMethod(
			"getZoomControls",
			"()Landroid/view/View;"
		);
	}
	jboolean ZoomButtonsController::isAutoDismissed()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoDismissed",
			"()Z"
		);
	}
	jboolean ZoomButtonsController::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	jboolean ZoomButtonsController::onTouch(android::view::View arg0, android::view::MotionEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onTouch",
			"(Landroid/view/View;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ZoomButtonsController::setAutoDismissed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoDismissed",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setOnZoomListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnZoomListener",
			"(Landroid/widget/ZoomButtonsController$OnZoomListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ZoomButtonsController::setVisible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVisible",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomInEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomOutEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomSpeed(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
} // namespace android::widget

