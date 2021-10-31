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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Mms(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

