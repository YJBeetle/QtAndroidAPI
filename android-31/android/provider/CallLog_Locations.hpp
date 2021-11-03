#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class CallLog_Locations : public JObject
	{
	public:
		// Fields
		static JString AUTHORITY();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString LATITUDE();
		static JString LONGITUDE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CallLog_Locations(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallLog_Locations(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

