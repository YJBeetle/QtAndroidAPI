#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./BaseMovementMethod.hpp"
#include "./ScrollingMovementMethod.hpp"

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
	class LinkMovementMethod : public android::text::method::ScrollingMovementMethod
	{
	public:
		// Fields
		
		LinkMovementMethod(QAndroidJniObject obj);
		// Constructors
		LinkMovementMethod();
		
		// Methods
		static QAndroidJniObject getInstance();
		jboolean canSelectArbitrarily();
		void initialize(android::widget::TextView arg0, __JniBaseClass arg1);
		void onTakeFocus(android::widget::TextView arg0, __JniBaseClass arg1, jint arg2);
		jboolean onTouchEvent(android::widget::TextView arg0, __JniBaseClass arg1, android::view::MotionEvent arg2);
	};
} // namespace android::text::method

