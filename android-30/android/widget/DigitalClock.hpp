#pragma once

#include "./TextView.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::widget
{
	class DigitalClock : public android::widget::TextView
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DigitalClock(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		DigitalClock(QAndroidJniObject obj);
		
		// Constructors
		DigitalClock(android::content::Context arg0);
		DigitalClock(android::content::Context arg0, JObject arg1);
		
		// Methods
		JString getAccessibilityClassName();
	};
} // namespace android::widget

