#pragma once

#include "../../__JniBaseClass.hpp"

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
	class TouchDelegate : public __JniBaseClass
	{
	public:
		// Fields
		static jint ABOVE();
		static jint BELOW();
		static jint TO_LEFT();
		static jint TO_RIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit TouchDelegate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TouchDelegate(QJniObject obj);
		
		// Constructors
		TouchDelegate(android::graphics::Rect arg0, android::view::View arg1);
		
		// Methods
		jboolean onTouchEvent(android::view::MotionEvent arg0);
	};
} // namespace android::view

