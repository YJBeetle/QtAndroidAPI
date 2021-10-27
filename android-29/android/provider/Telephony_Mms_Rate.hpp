#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Mms_Rate : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring SENT_TIME();
		
		Telephony_Mms_Rate(QAndroidJniObject obj);
		// Constructors
		Telephony_Mms_Rate() = default;
		
		// Methods
	};
} // namespace android::provider

