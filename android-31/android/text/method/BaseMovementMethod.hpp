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
		jboolean canSelectArbitrarily() const;
		void initialize(android::widget::TextView arg0, JObject arg1) const;
		jboolean onGenericMotionEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const;
		jboolean onKeyDown(android::widget::TextView arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const;
		jboolean onKeyOther(android::widget::TextView arg0, JObject arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyUp(android::widget::TextView arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const;
		void onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2) const;
		jboolean onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const;
		jboolean onTrackballEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const;
	};
} // namespace android::text::method

