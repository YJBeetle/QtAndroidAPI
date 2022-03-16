#pragma once

#include "./TextView.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class PointerIcon;
}
class JString;

namespace android::widget
{
	class Button : public android::widget::TextView
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Button(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		Button(QAndroidJniObject obj) : android::widget::TextView(obj) {}
		
		// Constructors
		Button(android::content::Context arg0);
		Button(android::content::Context arg0, JObject arg1);
		Button(android::content::Context arg0, JObject arg1, jint arg2);
		Button(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName() const;
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const;
	};
} // namespace android::widget

