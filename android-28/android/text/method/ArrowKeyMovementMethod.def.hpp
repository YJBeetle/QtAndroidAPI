#pragma once

#include "./BaseMovementMethod.def.hpp"

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
	class ArrowKeyMovementMethod : public android::text::method::BaseMovementMethod
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArrowKeyMovementMethod(const char *className, const char *sig, Ts...agv) : android::text::method::BaseMovementMethod(className, sig, std::forward<Ts>(agv)...) {}
		ArrowKeyMovementMethod(QAndroidJniObject obj) : android::text::method::BaseMovementMethod(obj) {}
		
		// Constructors
		ArrowKeyMovementMethod();
		
		// Methods
		static JObject getInstance();
		jboolean canSelectArbitrarily() const;
		void initialize(android::widget::TextView arg0, JObject arg1) const;
		void onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2) const;
		jboolean onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const;
	};
} // namespace android::text::method

