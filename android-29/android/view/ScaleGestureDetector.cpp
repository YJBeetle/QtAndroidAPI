#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "./MotionEvent.hpp"
#include "./ScaleGestureDetector.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	ScaleGestureDetector::ScaleGestureDetector(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.ScaleGestureDetector",
			"(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	ScaleGestureDetector::ScaleGestureDetector(android::content::Context arg0, JObject arg1, android::os::Handler arg2)
		: JObject(
			"android.view.ScaleGestureDetector",
			"(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jfloat ScaleGestureDetector::getCurrentSpan() const
	{
		return callMethod<jfloat>(
			"getCurrentSpan",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getCurrentSpanX() const
	{
		return callMethod<jfloat>(
			"getCurrentSpanX",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getCurrentSpanY() const
	{
		return callMethod<jfloat>(
			"getCurrentSpanY",
			"()F"
		);
	}
	jlong ScaleGestureDetector::getEventTime() const
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jfloat ScaleGestureDetector::getFocusX() const
	{
		return callMethod<jfloat>(
			"getFocusX",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getFocusY() const
	{
		return callMethod<jfloat>(
			"getFocusY",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getPreviousSpan() const
	{
		return callMethod<jfloat>(
			"getPreviousSpan",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getPreviousSpanX() const
	{
		return callMethod<jfloat>(
			"getPreviousSpanX",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getPreviousSpanY() const
	{
		return callMethod<jfloat>(
			"getPreviousSpanY",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getScaleFactor() const
	{
		return callMethod<jfloat>(
			"getScaleFactor",
			"()F"
		);
	}
	jlong ScaleGestureDetector::getTimeDelta() const
	{
		return callMethod<jlong>(
			"getTimeDelta",
			"()J"
		);
	}
	jboolean ScaleGestureDetector::isInProgress() const
	{
		return callMethod<jboolean>(
			"isInProgress",
			"()Z"
		);
	}
	jboolean ScaleGestureDetector::isQuickScaleEnabled() const
	{
		return callMethod<jboolean>(
			"isQuickScaleEnabled",
			"()Z"
		);
	}
	jboolean ScaleGestureDetector::isStylusScaleEnabled() const
	{
		return callMethod<jboolean>(
			"isStylusScaleEnabled",
			"()Z"
		);
	}
	jboolean ScaleGestureDetector::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void ScaleGestureDetector::setQuickScaleEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setQuickScaleEnabled",
			"(Z)V",
			arg0
		);
	}
	void ScaleGestureDetector::setStylusScaleEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setStylusScaleEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view

