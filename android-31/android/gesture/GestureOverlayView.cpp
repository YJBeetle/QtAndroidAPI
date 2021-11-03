#include "../content/Context.hpp"
#include "./Gesture.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Path.hpp"
#include "../view/MotionEvent.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureOverlayView.hpp"

namespace android::gesture
{
	// Fields
	jint GestureOverlayView::GESTURE_STROKE_TYPE_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"GESTURE_STROKE_TYPE_MULTIPLE"
		);
	}
	jint GestureOverlayView::GESTURE_STROKE_TYPE_SINGLE()
	{
		return getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"GESTURE_STROKE_TYPE_SINGLE"
		);
	}
	jint GestureOverlayView::ORIENTATION_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"ORIENTATION_HORIZONTAL"
		);
	}
	jint GestureOverlayView::ORIENTATION_VERTICAL()
	{
		return getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"ORIENTATION_VERTICAL"
		);
	}
	
	// QJniObject forward
	GestureOverlayView::GestureOverlayView(QJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	GestureOverlayView::GestureOverlayView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	GestureOverlayView::GestureOverlayView(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	GestureOverlayView::GestureOverlayView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	GestureOverlayView::GestureOverlayView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void GestureOverlayView::addOnGestureListener(JObject arg0)
	{
		callMethod<void>(
			"addOnGestureListener",
			"(Landroid/gesture/GestureOverlayView$OnGestureListener;)V",
			arg0.object()
		);
	}
	void GestureOverlayView::addOnGesturePerformedListener(JObject arg0)
	{
		callMethod<void>(
			"addOnGesturePerformedListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V",
			arg0.object()
		);
	}
	void GestureOverlayView::addOnGesturingListener(JObject arg0)
	{
		callMethod<void>(
			"addOnGesturingListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V",
			arg0.object()
		);
	}
	void GestureOverlayView::cancelClearAnimation()
	{
		callMethod<void>(
			"cancelClearAnimation",
			"()V"
		);
	}
	void GestureOverlayView::cancelGesture()
	{
		callMethod<void>(
			"cancelGesture",
			"()V"
		);
	}
	void GestureOverlayView::clear(jboolean arg0)
	{
		callMethod<void>(
			"clear",
			"(Z)V",
			arg0
		);
	}
	jboolean GestureOverlayView::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void GestureOverlayView::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	java::util::ArrayList GestureOverlayView::getCurrentStroke()
	{
		return callObjectMethod(
			"getCurrentStroke",
			"()Ljava/util/ArrayList;"
		);
	}
	jlong GestureOverlayView::getFadeOffset()
	{
		return callMethod<jlong>(
			"getFadeOffset",
			"()J"
		);
	}
	android::gesture::Gesture GestureOverlayView::getGesture()
	{
		return callObjectMethod(
			"getGesture",
			"()Landroid/gesture/Gesture;"
		);
	}
	jint GestureOverlayView::getGestureColor()
	{
		return callMethod<jint>(
			"getGestureColor",
			"()I"
		);
	}
	android::graphics::Path GestureOverlayView::getGesturePath()
	{
		return callObjectMethod(
			"getGesturePath",
			"()Landroid/graphics/Path;"
		);
	}
	android::graphics::Path GestureOverlayView::getGesturePath(android::graphics::Path arg0)
	{
		return callObjectMethod(
			"getGesturePath",
			"(Landroid/graphics/Path;)Landroid/graphics/Path;",
			arg0.object()
		);
	}
	jfloat GestureOverlayView::getGestureStrokeAngleThreshold()
	{
		return callMethod<jfloat>(
			"getGestureStrokeAngleThreshold",
			"()F"
		);
	}
	jfloat GestureOverlayView::getGestureStrokeLengthThreshold()
	{
		return callMethod<jfloat>(
			"getGestureStrokeLengthThreshold",
			"()F"
		);
	}
	jfloat GestureOverlayView::getGestureStrokeSquarenessTreshold()
	{
		return callMethod<jfloat>(
			"getGestureStrokeSquarenessTreshold",
			"()F"
		);
	}
	jint GestureOverlayView::getGestureStrokeType()
	{
		return callMethod<jint>(
			"getGestureStrokeType",
			"()I"
		);
	}
	jfloat GestureOverlayView::getGestureStrokeWidth()
	{
		return callMethod<jfloat>(
			"getGestureStrokeWidth",
			"()F"
		);
	}
	jint GestureOverlayView::getOrientation()
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint GestureOverlayView::getUncertainGestureColor()
	{
		return callMethod<jint>(
			"getUncertainGestureColor",
			"()I"
		);
	}
	jboolean GestureOverlayView::isEventsInterceptionEnabled()
	{
		return callMethod<jboolean>(
			"isEventsInterceptionEnabled",
			"()Z"
		);
	}
	jboolean GestureOverlayView::isFadeEnabled()
	{
		return callMethod<jboolean>(
			"isFadeEnabled",
			"()Z"
		);
	}
	jboolean GestureOverlayView::isGestureVisible()
	{
		return callMethod<jboolean>(
			"isGestureVisible",
			"()Z"
		);
	}
	jboolean GestureOverlayView::isGesturing()
	{
		return callMethod<jboolean>(
			"isGesturing",
			"()Z"
		);
	}
	void GestureOverlayView::removeAllOnGestureListeners()
	{
		callMethod<void>(
			"removeAllOnGestureListeners",
			"()V"
		);
	}
	void GestureOverlayView::removeAllOnGesturePerformedListeners()
	{
		callMethod<void>(
			"removeAllOnGesturePerformedListeners",
			"()V"
		);
	}
	void GestureOverlayView::removeAllOnGesturingListeners()
	{
		callMethod<void>(
			"removeAllOnGesturingListeners",
			"()V"
		);
	}
	void GestureOverlayView::removeOnGestureListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnGestureListener",
			"(Landroid/gesture/GestureOverlayView$OnGestureListener;)V",
			arg0.object()
		);
	}
	void GestureOverlayView::removeOnGesturePerformedListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnGesturePerformedListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V",
			arg0.object()
		);
	}
	void GestureOverlayView::removeOnGesturingListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnGesturingListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V",
			arg0.object()
		);
	}
	void GestureOverlayView::setEventsInterceptionEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEventsInterceptionEnabled",
			"(Z)V",
			arg0
		);
	}
	void GestureOverlayView::setFadeEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setFadeEnabled",
			"(Z)V",
			arg0
		);
	}
	void GestureOverlayView::setFadeOffset(jlong arg0)
	{
		callMethod<void>(
			"setFadeOffset",
			"(J)V",
			arg0
		);
	}
	void GestureOverlayView::setGesture(android::gesture::Gesture arg0)
	{
		callMethod<void>(
			"setGesture",
			"(Landroid/gesture/Gesture;)V",
			arg0.object()
		);
	}
	void GestureOverlayView::setGestureColor(jint arg0)
	{
		callMethod<void>(
			"setGestureColor",
			"(I)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeAngleThreshold(jfloat arg0)
	{
		callMethod<void>(
			"setGestureStrokeAngleThreshold",
			"(F)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeLengthThreshold(jfloat arg0)
	{
		callMethod<void>(
			"setGestureStrokeLengthThreshold",
			"(F)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeSquarenessTreshold(jfloat arg0)
	{
		callMethod<void>(
			"setGestureStrokeSquarenessTreshold",
			"(F)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeType(jint arg0)
	{
		callMethod<void>(
			"setGestureStrokeType",
			"(I)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeWidth(jfloat arg0)
	{
		callMethod<void>(
			"setGestureStrokeWidth",
			"(F)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureVisible(jboolean arg0)
	{
		callMethod<void>(
			"setGestureVisible",
			"(Z)V",
			arg0
		);
	}
	void GestureOverlayView::setOrientation(jint arg0)
	{
		callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	void GestureOverlayView::setUncertainGestureColor(jint arg0)
	{
		callMethod<void>(
			"setUncertainGestureColor",
			"(I)V",
			arg0
		);
	}
} // namespace android::gesture

