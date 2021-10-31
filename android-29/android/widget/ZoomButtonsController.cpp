#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./ZoomButtonsController.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ZoomButtonsController::ZoomButtonsController(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ZoomButtonsController::ZoomButtonsController(android::view::View arg0)
		: __JniBaseClass(
			"android.widget.ZoomButtonsController",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::ViewGroup ZoomButtonsController::getContainer()
	{
		return callObjectMethod(
			"getContainer",
			"()Landroid/view/ViewGroup;"
		);
	}
	android::view::View ZoomButtonsController::getZoomControls()
	{
		return callObjectMethod(
			"getZoomControls",
			"()Landroid/view/View;"
		);
	}
	jboolean ZoomButtonsController::isAutoDismissed()
	{
		return callMethod<jboolean>(
			"isAutoDismissed",
			"()Z"
		);
	}
	jboolean ZoomButtonsController::isVisible()
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	jboolean ZoomButtonsController::onTouch(android::view::View arg0, android::view::MotionEvent arg1)
	{
		return callMethod<jboolean>(
			"onTouch",
			"(Landroid/view/View;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void ZoomButtonsController::setAutoDismissed(jboolean arg0)
	{
		callMethod<void>(
			"setAutoDismissed",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setFocusable(jboolean arg0)
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setOnZoomListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnZoomListener",
			"(Landroid/widget/ZoomButtonsController$OnZoomListener;)V",
			arg0.object()
		);
	}
	void ZoomButtonsController::setVisible(jboolean arg0)
	{
		callMethod<void>(
			"setVisible",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomInEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomOutEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomSpeed(jlong arg0)
	{
		callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
} // namespace android::widget

