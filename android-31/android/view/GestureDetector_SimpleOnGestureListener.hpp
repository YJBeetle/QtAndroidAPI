#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class MotionEvent;
}

namespace android::view
{
	class GestureDetector_SimpleOnGestureListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GestureDetector_SimpleOnGestureListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GestureDetector_SimpleOnGestureListener(QJniObject obj);
		
		// Constructors
		GestureDetector_SimpleOnGestureListener();
		
		// Methods
		jboolean onContextClick(android::view::MotionEvent arg0);
		jboolean onDoubleTap(android::view::MotionEvent arg0);
		jboolean onDoubleTapEvent(android::view::MotionEvent arg0);
		jboolean onDown(android::view::MotionEvent arg0);
		jboolean onFling(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3);
		void onLongPress(android::view::MotionEvent arg0);
		jboolean onScroll(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3);
		void onShowPress(android::view::MotionEvent arg0);
		jboolean onSingleTapConfirmed(android::view::MotionEvent arg0);
		jboolean onSingleTapUp(android::view::MotionEvent arg0);
	};
} // namespace android::view

