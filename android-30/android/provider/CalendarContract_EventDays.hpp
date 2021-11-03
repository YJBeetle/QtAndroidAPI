#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_EventDays : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_EventDays(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_EventDays(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject query(android::content::ContentResolver arg0, jint arg1, jint arg2, JArray arg3);
	};
} // namespace android::provider

