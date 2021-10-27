#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Mms : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject REPORT_REQUEST_URI();
		static QAndroidJniObject REPORT_STATUS_URI();
		
		Telephony_Mms(QAndroidJniObject obj);
		// Constructors
		Telephony_Mms() = default;
		
		// Methods
	};
} // namespace android::provider

