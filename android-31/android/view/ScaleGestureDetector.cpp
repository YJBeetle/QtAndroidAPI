#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "./MotionEvent.hpp"
#include "./ScaleGestureDetector.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ScaleGestureDetector::ScaleGestureDetector(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ScaleGestureDetector::ScaleGestureDetector(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.view.ScaleGestureDetector",
			"(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	ScaleGestureDetector::ScaleGestureDetector(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2)
		: __JniBaseClass(
			"android.view.ScaleGestureDetector",
			"(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jfloat ScaleGestureDetector::getCurrentSpan()
	{
		return callMethod<jfloat>(
			"getCurrentSpan",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getCurrentSpanX()
	{
		return callMethod<jfloat>(
			"getCurrentSpanX",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getCurrentSpanY()
	{
		return callMethod<jfloat>(
			"getCurrentSpanY",
			"()F"
		);
	}
	jlong ScaleGestureDetector::getEventTime()
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jfloat ScaleGestureDetector::getFocusX()
	{
		return callMethod<jfloat>(
			"getFocusX",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getFocusY()
	{
		return callMethod<jfloat>(
			"getFocusY",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getPreviousSpan()
	{
		return callMethod<jfloat>(
			"getPreviousSpan",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getPreviousSpanX()
	{
		return callMethod<jfloat>(
			"getPreviousSpanX",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getPreviousSpanY()
	{
		return callMethod<jfloat>(
			"getPreviousSpanY",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getScaleFactor()
	{
		return callMethod<jfloat>(
			"getScaleFactor",
			"()F"
		);
	}
	jlong ScaleGestureDetector::getTimeDelta()
	{
		return callMethod<jlong>(
			"getTimeDelta",
			"()J"
		);
	}
	jboolean ScaleGestureDetector::isInProgress()
	{
		return callMethod<jboolean>(
			"isInProgress",
			"()Z"
		);
	}
	jboolean ScaleGestureDetector::isQuickScaleEnabled()
	{
		return callMethod<jboolean>(
			"isQuickScaleEnabled",
			"()Z"
		);
	}
	jboolean ScaleGestureDetector::isStylusScaleEnabled()
	{
		return callMethod<jboolean>(
			"isStylusScaleEnabled",
			"()Z"
		);
	}
	jboolean ScaleGestureDetector::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void ScaleGestureDetector::setQuickScaleEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setQuickScaleEnabled",
			"(Z)V",
			arg0
		);
	}
	void ScaleGestureDetector::setStylusScaleEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setStylusScaleEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view

