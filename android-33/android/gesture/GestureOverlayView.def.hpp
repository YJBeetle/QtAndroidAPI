#pragma once

#include "../widget/FrameLayout.def.hpp"

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
		GestureOverlayView(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
		
		// Constructors
		GestureOverlayView(android::content::Context arg0);
		GestureOverlayView(android::content::Context arg0, JObject arg1);
		GestureOverlayView(android::content::Context arg0, JObject arg1, jint arg2);
		GestureOverlayView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addOnGestureListener(JObject arg0) const;
		void addOnGesturePerformedListener(JObject arg0) const;
		void addOnGesturingListener(JObject arg0) const;
		void cancelClearAnimation() const;
		void cancelGesture() const;
		void clear(jboolean arg0) const;
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0) const;
		void draw(android::graphics::Canvas arg0) const;
		java::util::ArrayList getCurrentStroke() const;
		jlong getFadeOffset() const;
		android::gesture::Gesture getGesture() const;
		jint getGestureColor() const;
		android::graphics::Path getGesturePath() const;
		android::graphics::Path getGesturePath(android::graphics::Path arg0) const;
		jfloat getGestureStrokeAngleThreshold() const;
		jfloat getGestureStrokeLengthThreshold() const;
		jfloat getGestureStrokeSquarenessTreshold() const;
		jint getGestureStrokeType() const;
		jfloat getGestureStrokeWidth() const;
		jint getOrientation() const;
		jint getUncertainGestureColor() const;
		jboolean isEventsInterceptionEnabled() const;
		jboolean isFadeEnabled() const;
		jboolean isGestureVisible() const;
		jboolean isGesturing() const;
		void removeAllOnGestureListeners() const;
		void removeAllOnGesturePerformedListeners() const;
		void removeAllOnGesturingListeners() const;
		void removeOnGestureListener(JObject arg0) const;
		void removeOnGesturePerformedListener(JObject arg0) const;
		void removeOnGesturingListener(JObject arg0) const;
		void setEventsInterceptionEnabled(jboolean arg0) const;
		void setFadeEnabled(jboolean arg0) const;
		void setFadeOffset(jlong arg0) const;
		void setGesture(android::gesture::Gesture arg0) const;
		void setGestureColor(jint arg0) const;
		void setGestureStrokeAngleThreshold(jfloat arg0) const;
		void setGestureStrokeLengthThreshold(jfloat arg0) const;
		void setGestureStrokeSquarenessTreshold(jfloat arg0) const;
		void setGestureStrokeType(jint arg0) const;
		void setGestureStrokeWidth(jfloat arg0) const;
		void setGestureVisible(jboolean arg0) const;
		void setOrientation(jint arg0) const;
		void setUncertainGestureColor(jint arg0) const;
	};
} // namespace android::gesture

