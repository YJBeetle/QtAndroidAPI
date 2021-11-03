#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class CalendarContract_CalendarCache : public JObject
	{
	public:
		// Fields
		static JString KEY_TIMEZONE_INSTANCES();
		static JString KEY_TIMEZONE_INSTANCES_PREVIOUS();
		static JString KEY_TIMEZONE_TYPE();
		static JString TIMEZONE_TYPE_AUTO();
		static JString TIMEZONE_TYPE_HOME();
		static android::net::Uri URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_CalendarCache(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_CalendarCache(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

