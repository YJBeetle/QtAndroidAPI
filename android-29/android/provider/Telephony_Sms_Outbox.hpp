#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Sms_Outbox : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		Telephony_Sms_Outbox(QAndroidJniObject obj);
		// Constructors
		Telephony_Sms_Outbox() = default;
		
		// Methods
	};
} // namespace android::provider

