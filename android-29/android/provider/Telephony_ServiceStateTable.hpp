#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_ServiceStateTable : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static QAndroidJniObject CONTENT_URI();
		static jstring IS_MANUAL_NETWORK_SELECTION();
		static jstring VOICE_OPERATOR_NUMERIC();
		static jstring VOICE_REG_STATE();
		
		Telephony_ServiceStateTable(QAndroidJniObject obj);
		// Constructors
		Telephony_ServiceStateTable() = default;
		
		// Methods
		static QAndroidJniObject getUriForSubscriptionId(jint arg0);
		static QAndroidJniObject getUriForSubscriptionIdAndField(jint arg0, jstring arg1);
	};
} // namespace android::provider

