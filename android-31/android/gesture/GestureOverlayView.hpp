#pragma once

#include "../content/Context.def.hpp"
#include "./Gesture.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Path.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./GestureOverlayView.def.hpp"

namespace android::gesture
{
	// Fields
	inline jint GestureOverlayView::GESTURE_STROKE_TYPE_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"GESTURE_STROKE_TYPE_MULTIPLE"
		);
	}
	inline jint GestureOverlayView::GESTURE_STROKE_TYPE_SINGLE()
	{
		return getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"GESTURE_STROKE_TYPE_SINGLE"
		);
	}
	inline jint GestureOverlayView::ORIENTATION_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"ORIENTATION_HORIZONTAL"
		);
	}
	inline jint GestureOverlayView::ORIENTATION_VERTICAL()
	{
		return getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"ORIENTATION_VERTICAL"
		);
	}
	
	// Constructors
	inline GestureOverlayView::GestureOverlayView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline GestureOverlayView::GestureOverlayView(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GestureOverlayView::GestureOverlayView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline GestureOverlayView::GestureOverlayView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void GestureOverlayView::addOnGestureListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnGestureListener",
			"(Landroid/gesture/GestureOverlayView$OnGestureListener;)V",
			arg0.object()
		);
	}
	inline void GestureOverlayView::addOnGesturePerformedListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnGesturePerformedListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V",
			arg0.object()
		);
	}
	inline void GestureOverlayView::addOnGesturingListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnGesturingListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V",
			arg0.object()
		);
	}
	inline void GestureOverlayView::cancelClearAnimation() const
	{
		callMethod<void>(
			"cancelClearAnimation",
			"()V"
		);
	}
	inline void GestureOverlayView::cancelGesture() const
	{
		callMethod<void>(
			"cancelGesture",
			"()V"
		);
	}
	inline void GestureOverlayView::clear(jboolean arg0) const
	{
		callMethod<void>(
			"clear",
			"(Z)V",
			arg0
		);
	}
	inline jboolean GestureOverlayView::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void GestureOverlayView::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline java::util::ArrayList GestureOverlayView::getCurrentStroke() const
	{
		return callObjectMethod(
			"getCurrentStroke",
			"()Ljava/util/ArrayList;"
		);
	}
	inline jlong GestureOverlayView::getFadeOffset() const
	{
		return callMethod<jlong>(
			"getFadeOffset",
			"()J"
		);
	}
	inline android::gesture::Gesture GestureOverlayView::getGesture() const
	{
		return callObjectMethod(
			"getGesture",
			"()Landroid/gesture/Gesture;"
		);
	}
	inline jint GestureOverlayView::getGestureColor() const
	{
		return callMethod<jint>(
			"getGestureColor",
			"()I"
		);
	}
	inline android::graphics::Path GestureOverlayView::getGesturePath() const
	{
		return callObjectMethod(
			"getGesturePath",
			"()Landroid/graphics/Path;"
		);
	}
	inline android::graphics::Path GestureOverlayView::getGesturePath(android::graphics::Path arg0) const
	{
		return callObjectMethod(
			"getGesturePath",
			"(Landroid/graphics/Path;)Landroid/graphics/Path;",
			arg0.object()
		);
	}
	inline jfloat GestureOverlayView::getGestureStrokeAngleThreshold() const
	{
		return callMethod<jfloat>(
			"getGestureStrokeAngleThreshold",
			"()F"
		);
	}
	inline jfloat GestureOverlayView::getGestureStrokeLengthThreshold() const
	{
		return callMethod<jfloat>(
			"getGestureStrokeLengthThreshold",
			"()F"
		);
	}
	inline jfloat GestureOverlayView::getGestureStrokeSquarenessTreshold() const
	{
		return callMethod<jfloat>(
			"getGestureStrokeSquarenessTreshold",
			"()F"
		);
	}
	inline jint GestureOverlayView::getGestureStrokeType() const
	{
		return callMethod<jint>(
			"getGestureStrokeType",
			"()I"
		);
	}
	inline jfloat GestureOverlayView::getGestureStrokeWidth() const
	{
		return callMethod<jfloat>(
			"getGestureStrokeWidth",
			"()F"
		);
	}
	inline jint GestureOverlayView::getOrientation() const
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	inline jint GestureOverlayView::getUncertainGestureColor() const
	{
		return callMethod<jint>(
			"getUncertainGestureColor",
			"()I"
		);
	}
	inline jboolean GestureOverlayView::isEventsInterceptionEnabled() const
	{
		return callMethod<jboolean>(
			"isEventsInterceptionEnabled",
			"()Z"
		);
	}
	inline jboolean GestureOverlayView::isFadeEnabled() const
	{
		return callMethod<jboolean>(
			"isFadeEnabled",
			"()Z"
		);
	}
	inline jboolean GestureOverlayView::isGestureVisible() const
	{
		return callMethod<jboolean>(
			"isGestureVisible",
			"()Z"
		);
	}
	inline jboolean GestureOverlayView::isGesturing() const
	{
		return callMethod<jboolean>(
			"isGesturing",
			"()Z"
		);
	}
	inline void GestureOverlayView::removeAllOnGestureListeners() const
	{
		callMethod<void>(
			"removeAllOnGestureListeners",
			"()V"
		);
	}
	inline void GestureOverlayView::removeAllOnGesturePerformedListeners() const
	{
		callMethod<void>(
			"removeAllOnGesturePerformedListeners",
			"()V"
		);
	}
	inline void GestureOverlayView::removeAllOnGesturingListeners() const
	{
		callMethod<void>(
			"removeAllOnGesturingListeners",
			"()V"
		);
	}
	inline void GestureOverlayView::removeOnGestureListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnGestureListener",
			"(Landroid/gesture/GestureOverlayView$OnGestureListener;)V",
			arg0.object()
		);
	}
	inline void GestureOverlayView::removeOnGesturePerformedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnGesturePerformedListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V",
			arg0.object()
		);
	}
	inline void GestureOverlayView::removeOnGesturingListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnGesturingListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V",
			arg0.object()
		);
	}
	inline void GestureOverlayView::setEventsInterceptionEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEventsInterceptionEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void GestureOverlayView::setFadeEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setFadeEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void GestureOverlayView::setFadeOffset(jlong arg0) const
	{
		callMethod<void>(
			"setFadeOffset",
			"(J)V",
			arg0
		);
	}
	inline void GestureOverlayView::setGesture(android::gesture::Gesture arg0) const
	{
		callMethod<void>(
			"setGesture",
			"(Landroid/gesture/Gesture;)V",
			arg0.object()
		);
	}
	inline void GestureOverlayView::setGestureColor(jint arg0) const
	{
		callMethod<void>(
			"setGestureColor",
			"(I)V",
			arg0
		);
	}
	inline void GestureOverlayView::setGestureStrokeAngleThreshold(jfloat arg0) const
	{
		callMethod<void>(
			"setGestureStrokeAngleThreshold",
			"(F)V",
			arg0
		);
	}
	inline void GestureOverlayView::setGestureStrokeLengthThreshold(jfloat arg0) const
	{
		callMethod<void>(
			"setGestureStrokeLengthThreshold",
			"(F)V",
			arg0
		);
	}
	inline void GestureOverlayView::setGestureStrokeSquarenessTreshold(jfloat arg0) const
	{
		callMethod<void>(
			"setGestureStrokeSquarenessTreshold",
			"(F)V",
			arg0
		);
	}
	inline void GestureOverlayView::setGestureStrokeType(jint arg0) const
	{
		callMethod<void>(
			"setGestureStrokeType",
			"(I)V",
			arg0
		);
	}
	inline void GestureOverlayView::setGestureStrokeWidth(jfloat arg0) const
	{
		callMethod<void>(
			"setGestureStrokeWidth",
			"(F)V",
			arg0
		);
	}
	inline void GestureOverlayView::setGestureVisible(jboolean arg0) const
	{
		callMethod<void>(
			"setGestureVisible",
			"(Z)V",
			arg0
		);
	}
	inline void GestureOverlayView::setOrientation(jint arg0) const
	{
		callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	inline void GestureOverlayView::setUncertainGestureColor(jint arg0) const
	{
		callMethod<void>(
			"setUncertainGestureColor",
			"(I)V",
			arg0
		);
	}
} // namespace android::gesture

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/FrameLayout.hpp"

