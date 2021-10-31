#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CallLog_Locations : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring LATITUDE();
		static jstring LONGITUDE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallLog_Locations(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CallLog_Locations(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

