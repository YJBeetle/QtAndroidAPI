#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Telephony_Mms_Addr : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ADDRESS();
		static jstring CHARSET();
		static jstring CONTACT_ID();
		static jstring MSG_ID();
		static jstring TYPE();
		
		Telephony_Mms_Addr(QAndroidJniObject obj);
		// Constructors
		Telephony_Mms_Addr() = default;
		
		// Methods
	};
} // namespace android::provider

