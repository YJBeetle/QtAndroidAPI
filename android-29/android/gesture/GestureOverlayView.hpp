#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/FrameLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::gesture
{
	class Gesture;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Path;
}
namespace android::view
{
	class MotionEvent;
}
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class GestureOverlayView : public android::widget::FrameLayout
	{
	public:
		// Fields
		static jint GESTURE_STROKE_TYPE_MULTIPLE();
		static jint GESTURE_STROKE_TYPE_SINGLE();
		static jint ORIENTATION_HORIZONTAL();
		static jint ORIENTATION_VERTICAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureOverlayView(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		GestureOverlayView(QAndroidJniObject obj);
		
		// Constructors
		GestureOverlayView(android::content::Context arg0);
		GestureOverlayView(android::content::Context arg0, __JniBaseClass arg1);
		GestureOverlayView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		GestureOverlayView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addOnGestureListener(__JniBaseClass arg0);
		void addOnGesturePerformedListener(__JniBaseClass arg0);
		void addOnGesturingListener(__JniBaseClass arg0);
		void cancelClearAnimation();
		void cancelGesture();
		void clear(jboolean arg0);
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0);
		void draw(android::graphics::Canvas arg0);
		QAndroidJniObject getCurrentStroke();
		jlong getFadeOffset();
		QAndroidJniObject getGesture();
		jint getGestureColor();
		QAndroidJniObject getGesturePath();
		QAndroidJniObject getGesturePath(android::graphics::Path arg0);
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
		void removeOnGestureListener(__JniBaseClass arg0);
		void removeOnGesturePerformedListener(__JniBaseClass arg0);
		void removeOnGesturingListener(__JniBaseClass arg0);
		void setEventsInterceptionEnabled(jboolean arg0);
		void setFadeEnabled(jboolean arg0);
		void setFadeOffset(jlong arg0);
		void setGesture(android::gesture::Gesture arg0);
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
} // namespace android::gesture

