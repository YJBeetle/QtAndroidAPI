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
	class CalendarContract_Reminders : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit CalendarContract_Reminders(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_Reminders(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject query(android::content::ContentResolver arg0, jlong arg1, JArray arg2);
	};
} // namespace android::provider

