#pragma once

#include "../../../JObject.hpp"
#include "./BaseMovementMethod.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ArrowKeyMovementMethod(const char *className, const char *sig, Ts...agv) : android::text::method::BaseMovementMethod(className, sig, std::forward<Ts>(agv)...) {}
		ArrowKeyMovementMethod(QJniObject obj);
		
		// Constructors
		ArrowKeyMovementMethod();
		
		// Methods
		static JObject getInstance();
		jboolean canSelectArbitrarily();
		void initialize(android::widget::TextView arg0, JObject arg1);
		void onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2);
		jboolean onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2);
	};
} // namespace android::text::method

