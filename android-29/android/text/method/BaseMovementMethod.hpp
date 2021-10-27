#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view
{
	class KeyEvent;
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
	class BaseMovementMethod : public __JniBaseClass
	{
	public:
		// Fields
		
		BaseMovementMethod(QAndroidJniObject obj);
		// Constructors
		BaseMovementMethod();
		
		// Methods
		jboolean canSelectArbitrarily();
		void initialize(android::widget::TextView arg0, __JniBaseClass arg1);
		jboolean onGenericMotionEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2);
		jboolean onKeyDown(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
		jboolean onKeyOther(android::widget::TextView arg0, __JniBaseClass arg1, android::view::KeyEvent arg2);
		jboolean onKeyUp(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
		void onTakeFocus(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2);
		jboolean onTouchEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2);
		jboolean onTrackballEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2);
	};
} // namespace android::text::method

