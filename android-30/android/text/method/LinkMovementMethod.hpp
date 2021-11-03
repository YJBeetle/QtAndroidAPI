#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkMovementMethod(const char *className, const char *sig, Ts...agv) : android::text::method::ScrollingMovementMethod(className, sig, std::forward<Ts>(agv)...) {}
		LinkMovementMethod(QAndroidJniObject obj);
		
		// Constructors
		LinkMovementMethod();
		
		// Methods
		static JObject getInstance();
		jboolean canSelectArbitrarily();
		void initialize(android::widget::TextView arg0, JObject arg1);
		void onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2);
		jboolean onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2);
	};
} // namespace android::text::method

