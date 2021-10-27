#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::text
{
	class Layout;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::widget
{
	class TextView;
}

namespace android::text::method
{
	class Touch : public __JniBaseClass
	{
	public:
		// Fields
		
		Touch(QAndroidJniObject obj);
		// Constructors
		Touch() = default;
		
		// Methods
		static jint getInitialScrollX(android::widget::TextView arg0, __JniBaseClass arg1);
		static jint getInitialScrollY(android::widget::TextView arg0, __JniBaseClass arg1);
		static jboolean onTouchEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2);
		static void scrollTo(android::widget::TextView arg0, android::text::Layout arg1, jint arg2, jint arg3);
	};
} // namespace android::text::method

