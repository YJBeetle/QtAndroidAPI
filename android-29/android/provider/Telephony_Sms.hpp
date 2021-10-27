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
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		Telephony_Sms(QAndroidJniObject obj);
		// Constructors
		Telephony_Sms() = default;
		
		// Methods
		static jstring getDefaultSmsPackage(android::content::Context arg0);
	};
} // namespace android::provider

