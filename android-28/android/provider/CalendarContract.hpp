#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACCOUNT_TYPE_LOCAL();
		static jstring ACTION_EVENT_REMINDER();
		static jstring ACTION_HANDLE_CUSTOM_EVENT();
		static jstring AUTHORITY();
		static jstring CALLER_IS_SYNCADAPTER();
		static android::net::Uri CONTENT_URI();
		static jstring EXTRA_CUSTOM_APP_URI();
		static jstring EXTRA_EVENT_ALL_DAY();
		static jstring EXTRA_EVENT_BEGIN_TIME();
		static jstring EXTRA_EVENT_END_TIME();
		
		// QJniObject forward
		template<typename ...Ts> explicit CalendarContract(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

