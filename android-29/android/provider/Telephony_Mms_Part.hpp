#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Mms_Part : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CHARSET();
		static jstring CONTENT_DISPOSITION();
		static jstring CONTENT_ID();
		static jstring CONTENT_LOCATION();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring CT_START();
		static jstring CT_TYPE();
		static jstring FILENAME();
		static jstring MSG_ID();
		static jstring NAME();
		static jstring SEQ();
		static jstring TEXT();
		static jstring _DATA();
		
		Telephony_Mms_Part(QAndroidJniObject obj);
		// Constructors
		Telephony_Mms_Part() = default;
		
		// Methods
	};
} // namespace android::provider

