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
	class CalendarContract_Attendees : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_Attendees(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_Attendees(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject query(android::content::ContentResolver arg0, jlong arg1, JArray arg2);
	};
} // namespace android::provider

