#pragma once

#include "./BaseMovementMethod.hpp"

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
	class ScrollingMovementMethod : public android::text::method::BaseMovementMethod
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScrollingMovementMethod(const char *className, const char *sig, Ts...agv) : android::text::method::BaseMovementMethod(className, sig, std::forward<Ts>(agv)...) {}
		ScrollingMovementMethod(QJniObject obj);
		
		// Constructors
		ScrollingMovementMethod();
		
		// Methods
		static JObject getInstance();
		void onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2);
		jboolean onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2);
	};
} // namespace android::text::method

