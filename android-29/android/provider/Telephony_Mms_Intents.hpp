#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Telephony_Mms_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_CHANGED_ACTION();
		static jstring DELETED_CONTENTS();
		
		Telephony_Mms_Intents(QAndroidJniObject obj);
		// Constructors
		Telephony_Mms_Intents() = default;
		
		// Methods
	};
} // namespace android::provider

