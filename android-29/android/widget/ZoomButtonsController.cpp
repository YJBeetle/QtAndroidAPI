#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./ZoomButtonsController.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ZoomButtonsController::ZoomButtonsController(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ZoomButtonsController::ZoomButtonsController(android::view::View arg0)
		: JObject(
			"android.widget.ZoomButtonsController",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::ViewGroup ZoomButtonsController::getContainer() const
	{
		return callObjectMethod(
			"getContainer",
			"()Landroid/view/ViewGroup;"
		);
	}
	android::view::View ZoomButtonsController::getZoomControls() const
	{
		return callObjectMethod(
			"getZoomControls",
			"()Landroid/view/View;"
		);
	}
	jboolean ZoomButtonsController::isAutoDismissed() const
	{
		return callMethod<jboolean>(
			"isAutoDismissed",
			"()Z"
		);
	}
	jboolean ZoomButtonsController::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	jboolean ZoomButtonsController::onTouch(android::view::View arg0, android::view::MotionEvent arg1) const
	{
		return callMethod<jboolean>(
			"onTouch",
			"(Landroid/view/View;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void ZoomButtonsController::setAutoDismissed(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoDismissed",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setOnZoomListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnZoomListener",
			"(Landroid/widget/ZoomButtonsController$OnZoomListener;)V",
			arg0.object()
		);
	}
	void ZoomButtonsController::setVisible(jboolean arg0) const
	{
		callMethod<void>(
			"setVisible",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomInEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomOutEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomSpeed(jlong arg0) const
	{
		callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
} // namespace android::widget

