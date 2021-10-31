#pragma once

#include "../../__JniBaseClass.hpp"

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
	class CalendarContract_Instances : public __JniBaseClass
	{
	public:
		// Fields
		static jstring BEGIN();
		static android::net::Uri CONTENT_BY_DAY_URI();
		static android::net::Uri CONTENT_SEARCH_BY_DAY_URI();
		static android::net::Uri CONTENT_SEARCH_URI();
		static android::net::Uri CONTENT_URI();
		static jstring END();
		static jstring END_DAY();
		static jstring END_MINUTE();
		static android::net::Uri ENTERPRISE_CONTENT_BY_DAY_URI();
		static android::net::Uri ENTERPRISE_CONTENT_SEARCH_BY_DAY_URI();
		static android::net::Uri ENTERPRISE_CONTENT_SEARCH_URI();
		static android::net::Uri ENTERPRISE_CONTENT_URI();
		static jstring EVENT_ID();
		static jstring START_DAY();
		static jstring START_MINUTE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CalendarContract_Instances(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_Instances(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass query(android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3);
		static __JniBaseClass query(android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3, jstring arg4);
	};
} // namespace android::provider

