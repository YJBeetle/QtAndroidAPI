#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class MotionEvent;
}

namespace android::view
{
	class GestureDetector_SimpleOnGestureListener : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GestureDetector_SimpleOnGestureListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureDetector_SimpleOnGestureListener(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GestureDetector_SimpleOnGestureListener();
		
		// Methods
		jboolean onContextClick(android::view::MotionEvent arg0) const;
		jboolean onDoubleTap(android::view::MotionEvent arg0) const;
		jboolean onDoubleTapEvent(android::view::MotionEvent arg0) const;
		jboolean onDown(android::view::MotionEvent arg0) const;
		jboolean onFling(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3) const;
		void onLongPress(android::view::MotionEvent arg0) const;
		jboolean onScroll(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3) const;
		void onShowPress(android::view::MotionEvent arg0) const;
		jboolean onSingleTapConfirmed(android::view::MotionEvent arg0) const;
		jboolean onSingleTapUp(android::view::MotionEvent arg0) const;
	};
} // namespace android::view

