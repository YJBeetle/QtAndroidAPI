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
class JString;

namespace android::provider
{
	class CalendarContract_Instances : public JObject
	{
	public:
		// Fields
		static JString BEGIN();
		static android::net::Uri CONTENT_BY_DAY_URI();
		static android::net::Uri CONTENT_SEARCH_BY_DAY_URI();
		static android::net::Uri CONTENT_SEARCH_URI();
		static android::net::Uri CONTENT_URI();
		static JString END();
		static JString END_DAY();
		static JString END_MINUTE();
		static JString EVENT_ID();
		static JString START_DAY();
		static JString START_MINUTE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CalendarContract_Instances(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CalendarContract_Instances(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject query(android::content::ContentResolver arg0, JArray arg1, jlong arg2, jlong arg3);
		static JObject query(android::content::ContentResolver arg0, JArray arg1, jlong arg2, jlong arg3, JString arg4);
	};
} // namespace android::provider

