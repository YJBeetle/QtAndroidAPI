#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentProviderClient;
}
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
	class CalendarContract_EventsEntity : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_EventsEntity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_EventsEntity(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject newEntityIterator(JObject arg0, android::content::ContentProviderClient arg1);
		static JObject newEntityIterator(JObject arg0, android::content::ContentResolver arg1);
	};
} // namespace android::provider

