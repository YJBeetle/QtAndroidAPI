#pragma once

#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./ZoomButtonsController.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ZoomButtonsController::ZoomButtonsController(android::view::View arg0)
		: JObject(
			"android.widget.ZoomButtonsController",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::ViewGroup ZoomButtonsController::getContainer() const
	{
		return callObjectMethod(
			"getContainer",
			"()Landroid/view/ViewGroup;"
		);
	}
	inline android::view::View ZoomButtonsController::getZoomControls() const
	{
		return callObjectMethod(
			"getZoomControls",
			"()Landroid/view/View;"
		);
	}
	inline jboolean ZoomButtonsController::isAutoDismissed() const
	{
		return callMethod<jboolean>(
			"isAutoDismissed",
			"()Z"
		);
	}
	inline jboolean ZoomButtonsController::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	inline jboolean ZoomButtonsController::onTouch(android::view::View arg0, android::view::MotionEvent arg1) const
	{
		return callMethod<jboolean>(
			"onTouch",
			"(Landroid/view/View;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ZoomButtonsController::setAutoDismissed(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoDismissed",
			"(Z)V",
			arg0
		);
	}
	inline void ZoomButtonsController::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	inline void ZoomButtonsController::setOnZoomListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnZoomListener",
			"(Landroid/widget/ZoomButtonsController$OnZoomListener;)V",
			arg0.object()
		);
	}
	inline void ZoomButtonsController::setVisible(jboolean arg0) const
	{
		callMethod<void>(
			"setVisible",
			"(Z)V",
			arg0
		);
	}
	inline void ZoomButtonsController::setZoomInEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ZoomButtonsController::setZoomOutEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ZoomButtonsController::setZoomSpeed(jlong arg0) const
	{
		callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers

