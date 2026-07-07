#pragma once

#include "../content/Context.def.hpp"
#include "../os/Handler.def.hpp"
#include "./MotionEvent.def.hpp"
#include "./ScaleGestureDetector.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ScaleGestureDetector::ScaleGestureDetector(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.ScaleGestureDetector",
			"(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ScaleGestureDetector::ScaleGestureDetector(android::content::Context arg0, JObject arg1, android::os::Handler arg2)
		: JObject(
			"android.view.ScaleGestureDetector",
			"(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jfloat ScaleGestureDetector::getCurrentSpan() const
	{
		return callMethod<jfloat>(
			"getCurrentSpan",
			"()F"
		);
	}
	inline jfloat ScaleGestureDetector::getCurrentSpanX() const
	{
		return callMethod<jfloat>(
			"getCurrentSpanX",
			"()F"
		);
	}
	inline jfloat ScaleGestureDetector::getCurrentSpanY() const
	{
		return callMethod<jfloat>(
			"getCurrentSpanY",
			"()F"
		);
	}
	inline jlong ScaleGestureDetector::getEventTime() const
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	inline jfloat ScaleGestureDetector::getFocusX() const
	{
		return callMethod<jfloat>(
			"getFocusX",
			"()F"
		);
	}
	inline jfloat ScaleGestureDetector::getFocusY() const
	{
		return callMethod<jfloat>(
			"getFocusY",
			"()F"
		);
	}
	inline jfloat ScaleGestureDetector::getPreviousSpan() const
	{
		return callMethod<jfloat>(
			"getPreviousSpan",
			"()F"
		);
	}
	inline jfloat ScaleGestureDetector::getPreviousSpanX() const
	{
		return callMethod<jfloat>(
			"getPreviousSpanX",
			"()F"
		);
	}
	inline jfloat ScaleGestureDetector::getPreviousSpanY() const
	{
		return callMethod<jfloat>(
			"getPreviousSpanY",
			"()F"
		);
	}
	inline jfloat ScaleGestureDetector::getScaleFactor() const
	{
		return callMethod<jfloat>(
			"getScaleFactor",
			"()F"
		);
	}
	inline jlong ScaleGestureDetector::getTimeDelta() const
	{
		return callMethod<jlong>(
			"getTimeDelta",
			"()J"
		);
	}
	inline jboolean ScaleGestureDetector::isInProgress() const
	{
		return callMethod<jboolean>(
			"isInProgress",
			"()Z"
		);
	}
	inline jboolean ScaleGestureDetector::isQuickScaleEnabled() const
	{
		return callMethod<jboolean>(
			"isQuickScaleEnabled",
			"()Z"
		);
	}
	inline jboolean ScaleGestureDetector::isStylusScaleEnabled() const
	{
		return callMethod<jboolean>(
			"isStylusScaleEnabled",
			"()Z"
		);
	}
	inline jboolean ScaleGestureDetector::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void ScaleGestureDetector::setQuickScaleEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setQuickScaleEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ScaleGestureDetector::setStylusScaleEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setStylusScaleEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
