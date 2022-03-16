#pragma once

#include "../../JObject.hpp"

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
	class ScaleGestureDetector : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScaleGestureDetector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScaleGestureDetector(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScaleGestureDetector(android::content::Context arg0, JObject arg1);
		ScaleGestureDetector(android::content::Context arg0, JObject arg1, android::os::Handler arg2);
		
		// Methods
		jfloat getCurrentSpan() const;
		jfloat getCurrentSpanX() const;
		jfloat getCurrentSpanY() const;
		jlong getEventTime() const;
		jfloat getFocusX() const;
		jfloat getFocusY() const;
		jfloat getPreviousSpan() const;
		jfloat getPreviousSpanX() const;
		jfloat getPreviousSpanY() const;
		jfloat getScaleFactor() const;
		jlong getTimeDelta() const;
		jboolean isInProgress() const;
		jboolean isQuickScaleEnabled() const;
		jboolean isStylusScaleEnabled() const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void setQuickScaleEnabled(jboolean arg0) const;
		void setStylusScaleEnabled(jboolean arg0) const;
	};
} // namespace android::view

