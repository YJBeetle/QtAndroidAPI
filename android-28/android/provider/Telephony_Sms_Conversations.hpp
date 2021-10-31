#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Sms_Conversations : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring MESSAGE_COUNT();
		static jstring SNIPPET();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Sms_Conversations(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Sms_Conversations(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

