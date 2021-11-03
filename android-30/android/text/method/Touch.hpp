#pragma once

#include "../../../JObject.hpp"

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
	class Touch : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Touch(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Touch(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getInitialScrollX(android::widget::TextView arg0, JObject arg1);
		static jint getInitialScrollY(android::widget::TextView arg0, JObject arg1);
		static jboolean onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2);
		static void scrollTo(android::widget::TextView arg0, android::text::Layout arg1, jint arg2, jint arg3);
	};
} // namespace android::text::method

