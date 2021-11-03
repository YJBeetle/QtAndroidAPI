#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_CalendarEntity : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarContract_CalendarEntity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_CalendarEntity(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject newEntityIterator(JObject arg0);
	};
} // namespace android::provider

