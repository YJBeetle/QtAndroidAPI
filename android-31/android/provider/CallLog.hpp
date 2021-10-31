#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CallLog : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallLog(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CallLog(QJniObject obj);
		
		// Constructors
		CallLog();
		
		// Methods
	};
} // namespace android::provider

