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
		return QAndroidJniObject::getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"GESTURE_STROKE_TYPE_MULTIPLE"
		);
	}
	jint GestureOverlayView::GESTURE_STROKE_TYPE_SINGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"GESTURE_STROKE_TYPE_SINGLE"
		);
	}
	jint GestureOverlayView::ORIENTATION_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"ORIENTATION_HORIZONTAL"
		);
	}
	jint GestureOverlayView::ORIENTATION_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.gesture.GestureOverlayView",
			"ORIENTATION_VERTICAL"
		);
	}
	
	GestureOverlayView::GestureOverlayView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GestureOverlayView::GestureOverlayView(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	GestureOverlayView::GestureOverlayView(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	GestureOverlayView::GestureOverlayView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	GestureOverlayView::GestureOverlayView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void GestureOverlayView::addOnGestureListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnGestureListener",
			"(Landroid/gesture/GestureOverlayView$OnGestureListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::addOnGesturePerformedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnGesturePerformedListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::addOnGesturingListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnGesturingListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::cancelClearAnimation()
	{
		__thiz.callMethod<void>(
			"cancelClearAnimation",
			"()V"
		);
	}
	void GestureOverlayView::cancelGesture()
	{
		__thiz.callMethod<void>(
			"cancelGesture",
			"()V"
		);
	}
	void GestureOverlayView::clear(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(Z)V",
			arg0
		);
	}
	jboolean GestureOverlayView::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject GestureOverlayView::getCurrentStroke()
	{
		return __thiz.callObjectMethod(
			"getCurrentStroke",
			"()Ljava/util/ArrayList;"
		);
	}
	jlong GestureOverlayView::getFadeOffset()
	{
		return __thiz.callMethod<jlong>(
			"getFadeOffset",
			"()J"
		);
	}
	QAndroidJniObject GestureOverlayView::getGesture()
	{
		return __thiz.callObjectMethod(
			"getGesture",
			"()Landroid/gesture/Gesture;"
		);
	}
	jint GestureOverlayView::getGestureColor()
	{
		return __thiz.callMethod<jint>(
			"getGestureColor",
			"()I"
		);
	}
	QAndroidJniObject GestureOverlayView::getGesturePath()
	{
		return __thiz.callObjectMethod(
			"getGesturePath",
			"()Landroid/graphics/Path;"
		);
	}
	QAndroidJniObject GestureOverlayView::getGesturePath(android::graphics::Path arg0)
	{
		return __thiz.callObjectMethod(
			"getGesturePath",
			"(Landroid/graphics/Path;)Landroid/graphics/Path;",
			arg0.__jniObject().object()
		);
	}
	jfloat GestureOverlayView::getGestureStrokeAngleThreshold()
	{
		return __thiz.callMethod<jfloat>(
			"getGestureStrokeAngleThreshold",
			"()F"
		);
	}
	jfloat GestureOverlayView::getGestureStrokeLengthThreshold()
	{
		return __thiz.callMethod<jfloat>(
			"getGestureStrokeLengthThreshold",
			"()F"
		);
	}
	jfloat GestureOverlayView::getGestureStrokeSquarenessTreshold()
	{
		return __thiz.callMethod<jfloat>(
			"getGestureStrokeSquarenessTreshold",
			"()F"
		);
	}
	jint GestureOverlayView::getGestureStrokeType()
	{
		return __thiz.callMethod<jint>(
			"getGestureStrokeType",
			"()I"
		);
	}
	jfloat GestureOverlayView::getGestureStrokeWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getGestureStrokeWidth",
			"()F"
		);
	}
	jint GestureOverlayView::getOrientation()
	{
		return __thiz.callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint GestureOverlayView::getUncertainGestureColor()
	{
		return __thiz.callMethod<jint>(
			"getUncertainGestureColor",
			"()I"
		);
	}
	jboolean GestureOverlayView::isEventsInterceptionEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEventsInterceptionEnabled",
			"()Z"
		);
	}
	jboolean GestureOverlayView::isFadeEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isFadeEnabled",
			"()Z"
		);
	}
	jboolean GestureOverlayView::isGestureVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isGestureVisible",
			"()Z"
		);
	}
	jboolean GestureOverlayView::isGesturing()
	{
		return __thiz.callMethod<jboolean>(
			"isGesturing",
			"()Z"
		);
	}
	void GestureOverlayView::removeAllOnGestureListeners()
	{
		__thiz.callMethod<void>(
			"removeAllOnGestureListeners",
			"()V"
		);
	}
	void GestureOverlayView::removeAllOnGesturePerformedListeners()
	{
		__thiz.callMethod<void>(
			"removeAllOnGesturePerformedListeners",
			"()V"
		);
	}
	void GestureOverlayView::removeAllOnGesturingListeners()
	{
		__thiz.callMethod<void>(
			"removeAllOnGesturingListeners",
			"()V"
		);
	}
	void GestureOverlayView::removeOnGestureListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnGestureListener",
			"(Landroid/gesture/GestureOverlayView$OnGestureListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::removeOnGesturePerformedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnGesturePerformedListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::removeOnGesturingListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnGesturingListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::setEventsInterceptionEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEventsInterceptionEnabled",
			"(Z)V",
			arg0
		);
	}
	void GestureOverlayView::setFadeEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFadeEnabled",
			"(Z)V",
			arg0
		);
	}
	void GestureOverlayView::setFadeOffset(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setFadeOffset",
			"(J)V",
			arg0
		);
	}
	void GestureOverlayView::setGesture(android::gesture::Gesture arg0)
	{
		__thiz.callMethod<void>(
			"setGesture",
			"(Landroid/gesture/Gesture;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::setGestureColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGestureColor",
			"(I)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeAngleThreshold(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setGestureStrokeAngleThreshold",
			"(F)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeLengthThreshold(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setGestureStrokeLengthThreshold",
			"(F)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeSquarenessTreshold(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setGestureStrokeSquarenessTreshold",
			"(F)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGestureStrokeType",
			"(I)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureStrokeWidth(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setGestureStrokeWidth",
			"(F)V",
			arg0
		);
	}
	void GestureOverlayView::setGestureVisible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setGestureVisible",
			"(Z)V",
			arg0
		);
	}
	void GestureOverlayView::setOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	void GestureOverlayView::setUncertainGestureColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setUncertainGestureColor",
			"(I)V",
			arg0
		);
	}
} // namespace android::gesture

