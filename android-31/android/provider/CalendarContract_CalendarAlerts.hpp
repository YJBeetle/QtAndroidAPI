#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_CalendarAlerts : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static android::net::Uri CONTENT_URI_BY_INSTANCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_CalendarAlerts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_CalendarAlerts(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

