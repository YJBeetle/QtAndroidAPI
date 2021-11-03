#pragma once

#include "../../../JObject.hpp"

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
	class BaseMovementMethod : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BaseMovementMethod(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseMovementMethod(QAndroidJniObject obj);
		
		// Constructors
		BaseMovementMethod();
		
		// Methods
		jboolean canSelectArbitrarily();
		void initialize(android::widget::TextView arg0, JObject arg1);
		jboolean onGenericMotionEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2);
		jboolean onKeyDown(android::widget::TextView arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3);
		jboolean onKeyOther(android::widget::TextView arg0, JObject arg1, android::view::KeyEvent arg2);
		jboolean onKeyUp(android::widget::TextView arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3);
		void onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2);
		jboolean onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2);
		jboolean onTrackballEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2);
	};
} // namespace android::text::method

