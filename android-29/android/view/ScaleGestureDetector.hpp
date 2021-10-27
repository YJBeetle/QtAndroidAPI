#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class MotionEvent;
}

namespace android::view
{
	class ScaleGestureDetector : public __JniBaseClass
	{
	public:
		// Fields
		
		ScaleGestureDetector(QAndroidJniObject obj);
		// Constructors
		ScaleGestureDetector(android::content::Context &arg0, __JniBaseClass &arg1);
		ScaleGestureDetector(android::content::Context &arg0, __JniBaseClass &arg1, android::os::Handler &arg2);
		ScaleGestureDetector() = default;
		
		// Methods
		jfloat getCurrentSpan();
		jfloat getCurrentSpanX();
		jfloat getCurrentSpanY();
		jlong getEventTime();
		jfloat getFocusX();
		jfloat getFocusY();
		jfloat getPreviousSpan();
		jfloat getPreviousSpanX();
		jfloat getPreviousSpanY();
		jfloat getScaleFactor();
		jlong getTimeDelta();
		jboolean isInProgress();
		jboolean isQuickScaleEnabled();
		jboolean isStylusScaleEnabled();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setQuickScaleEnabled(jboolean arg0);
		void setStylusScaleEnabled(jboolean arg0);
	};
} // namespace android::view

