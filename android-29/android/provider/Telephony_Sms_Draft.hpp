#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Sms_Draft : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		Telephony_Sms_Draft(QAndroidJniObject obj);
		// Constructors
		Telephony_Sms_Draft() = default;
		
		// Methods
	};
} // namespace android::provider

