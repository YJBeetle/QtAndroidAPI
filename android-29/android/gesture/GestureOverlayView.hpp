#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/FrameLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::gesture
{
	class Gesture;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::gesture
{
	class GestureOverlayView : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		static jint GESTURE_STROKE_TYPE_MULTIPLE();
		static jint GESTURE_STROKE_TYPE_SINGLE();
		static jint ORIENTATION_HORIZONTAL();
		static jint ORIENTATION_VERTICAL();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addOnGestureListener(__jni_impl::__JniBaseClass arg0);
		void addOnGesturePerformedListener(__jni_impl::__JniBaseClass arg0);
		void addOnGesturingListener(__jni_impl::__JniBaseClass arg0);
		void cancelClearAnimation();
		void cancelGesture();
		void clear(jboolean arg0);
		jboolean dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0);
		QAndroidJniObject getCurrentStroke();
		jlong getFadeOffset();
		QAndroidJniObject getGesture();
		jint getGestureColor();
		QAndroidJniObject getGesturePath();
		QAndroidJniObject getGesturePath(__jni_impl::android::graphics::Path arg0);
		jfloat getGestureStrokeAngleThreshold();
		jfloat getGestureStrokeLengthThreshold();
		jfloat getGestureStrokeSquarenessTreshold();
		jint getGestureStrokeType();
		jfloat getGestureStrokeWidth();
		jint getOrientation();
		jint getUncertainGestureColor();
		jboolean isEventsInterceptionEnabled();
		jboolean isFadeEnabled();
		jboolean isGestureVisible();
		jboolean isGesturing();
		void removeAllOnGestureListeners();
		void removeAllOnGesturePerformedListeners();
		void removeAllOnGesturingListeners();
		void removeOnGestureListener(__jni_impl::__JniBaseClass arg0);
		void removeOnGesturePerformedListener(__jni_impl::__JniBaseClass arg0);
		void removeOnGesturingListener(__jni_impl::__JniBaseClass arg0);
		void setEventsInterceptionEnabled(jboolean arg0);
		void setFadeEnabled(jboolean arg0);
		void setFadeOffset(jlong arg0);
		void setGesture(__jni_impl::android::gesture::Gesture arg0);
		void setGestureColor(jint arg0);
		void setGestureStrokeAngleThreshold(jfloat arg0);
		void setGestureStrokeLengthThreshold(jfloat arg0);
		void setGestureStrokeSquarenessTreshold(jfloat arg0);
		void setGestureStrokeType(jint arg0);
		void setGestureStrokeWidth(jfloat arg0);
		void setGestureVisible(jboolean arg0);
		void setOrientation(jint arg0);
		void setUncertainGestureColor(jint arg0);
	};
} // namespace __jni_impl::android::gesture

#include "../content/Context.hpp"
#include "./Gesture.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Path.hpp"
#include "../view/MotionEvent.hpp"
#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::gesture
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
	
	// Constructors
	void GestureOverlayView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void GestureOverlayView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureOverlayView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void GestureOverlayView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
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
	void GestureOverlayView::addOnGestureListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnGestureListener",
			"(Landroid/gesture/GestureOverlayView$OnGestureListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::addOnGesturePerformedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnGesturePerformedListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::addOnGesturingListener(__jni_impl::__JniBaseClass arg0)
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
	jboolean GestureOverlayView::dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::draw(__jni_impl::android::graphics::Canvas arg0)
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
	QAndroidJniObject GestureOverlayView::getGesturePath(__jni_impl::android::graphics::Path arg0)
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
	void GestureOverlayView::removeOnGestureListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnGestureListener",
			"(Landroid/gesture/GestureOverlayView$OnGestureListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::removeOnGesturePerformedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnGesturePerformedListener",
			"(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureOverlayView::removeOnGesturingListener(__jni_impl::__JniBaseClass arg0)
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
	void GestureOverlayView::setGesture(__jni_impl::android::gesture::Gesture arg0)
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
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class GestureOverlayView : public __jni_impl::android::gesture::GestureOverlayView
	{
	public:
		GestureOverlayView(QAndroidJniObject obj) { __thiz = obj; }
		GestureOverlayView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		GestureOverlayView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GestureOverlayView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		GestureOverlayView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::gesture

