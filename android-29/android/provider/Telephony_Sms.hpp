#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Sms : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Sms(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Sms(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDefaultSmsPackage(android::content::Context arg0);
	};
} // namespace android::provider

