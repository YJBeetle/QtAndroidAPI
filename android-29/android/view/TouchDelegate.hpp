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
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_TouchDelegateInfo;
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
		
		TouchDelegate(QAndroidJniObject obj);
		// Constructors
		TouchDelegate(android::graphics::Rect arg0, android::view::View arg1);
		TouchDelegate() = default;
		
		// Methods
		QAndroidJniObject getTouchDelegateInfo();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTouchExplorationHoverEvent(android::view::MotionEvent arg0);
	};
} // namespace android::view

