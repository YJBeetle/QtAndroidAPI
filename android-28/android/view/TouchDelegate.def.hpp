#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class TouchDelegate : public JObject
	{
	public:
		// Fields
		static jint ABOVE();
		static jint BELOW();
		static jint TO_LEFT();
		static jint TO_RIGHT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TouchDelegate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TouchDelegate(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TouchDelegate(android::graphics::Rect arg0, android::view::View arg1);
		
		// Methods
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
	};
} // namespace android::view

