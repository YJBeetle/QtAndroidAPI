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
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring MESSAGE_COUNT();
		static jstring SNIPPET();
		
		Telephony_Sms_Conversations(QAndroidJniObject obj);
		// Constructors
		Telephony_Sms_Conversations() = default;
		
		// Methods
	};
} // namespace android::provider

