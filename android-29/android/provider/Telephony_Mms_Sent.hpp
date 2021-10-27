#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Mms_Sent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		Telephony_Mms_Sent(QAndroidJniObject obj);
		// Constructors
		Telephony_Mms_Sent() = default;
		
		// Methods
	};
} // namespace android::provider

