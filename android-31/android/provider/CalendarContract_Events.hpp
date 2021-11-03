#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_Events : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_EXCEPTION_URI();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri ENTERPRISE_CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_Events(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_Events(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

