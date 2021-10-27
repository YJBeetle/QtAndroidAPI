#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Carriers : public __JniBaseClass
	{
	public:
		// Fields
		static jstring APN();
		static jstring AUTH_TYPE();
		static jstring BEARER();
		static jstring CARRIER_ENABLED();
		static jstring CARRIER_ID();
		static QAndroidJniObject CONTENT_URI();
		static jstring CURRENT();
		static jstring DEFAULT_SORT_ORDER();
		static jstring MCC();
		static jstring MMSC();
		static jstring MMSPORT();
		static jstring MMSPROXY();
		static jstring MNC();
		static jstring MVNO_MATCH_DATA();
		static jstring MVNO_TYPE();
		static jstring NAME();
		static jstring NETWORK_TYPE_BITMASK();
		static jstring NUMERIC();
		static jstring PASSWORD();
		static jstring PORT();
		static jstring PROTOCOL();
		static jstring PROXY();
		static jstring ROAMING_PROTOCOL();
		static jstring SERVER();
		static QAndroidJniObject SIM_APN_URI();
		static jstring SUBSCRIPTION_ID();
		static jstring TYPE();
		static jstring USER();
		
		Telephony_Carriers(QAndroidJniObject obj);
		// Constructors
		Telephony_Carriers() = default;
		
		// Methods
	};
} // namespace android::provider

