#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class CalendarContract : public JObject
	{
	public:
		// Fields
		static JString ACCOUNT_TYPE_LOCAL();
		static JString ACTION_EVENT_REMINDER();
		static JString ACTION_HANDLE_CUSTOM_EVENT();
		static JString AUTHORITY();
		static JString CALLER_IS_SYNCADAPTER();
		static android::net::Uri CONTENT_URI();
		static JString EXTRA_CUSTOM_APP_URI();
		static JString EXTRA_EVENT_ALL_DAY();
		static JString EXTRA_EVENT_BEGIN_TIME();
		static JString EXTRA_EVENT_END_TIME();
		
		// QJniObject forward
		template<typename ...Ts> explicit CalendarContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

