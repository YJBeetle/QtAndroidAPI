#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::telephony::data
{
	class ApnSetting;
}
namespace java::net
{
	class InetAddress;
}

namespace android::telephony::data
{
	class ApnSetting_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApnSetting_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApnSetting_Builder(QAndroidJniObject obj);
		
		// Constructors
		ApnSetting_Builder();
		
		// Methods
		android::telephony::data::ApnSetting build();
		android::telephony::data::ApnSetting_Builder setApnName(jstring arg0);
		android::telephony::data::ApnSetting_Builder setApnTypeBitmask(jint arg0);
		android::telephony::data::ApnSetting_Builder setAuthType(jint arg0);
		android::telephony::data::ApnSetting_Builder setCarrierEnabled(jboolean arg0);
		android::telephony::data::ApnSetting_Builder setCarrierId(jint arg0);
		android::telephony::data::ApnSetting_Builder setEntryName(jstring arg0);
		android::telephony::data::ApnSetting_Builder setMmsProxyAddress(jstring arg0);
		android::telephony::data::ApnSetting_Builder setMmsProxyAddress(java::net::InetAddress arg0);
		android::telephony::data::ApnSetting_Builder setMmsProxyPort(jint arg0);
		android::telephony::data::ApnSetting_Builder setMmsc(android::net::Uri arg0);
		android::telephony::data::ApnSetting_Builder setMvnoType(jint arg0);
		android::telephony::data::ApnSetting_Builder setNetworkTypeBitmask(jint arg0);
		android::telephony::data::ApnSetting_Builder setOperatorNumeric(jstring arg0);
		android::telephony::data::ApnSetting_Builder setPassword(jstring arg0);
		android::telephony::data::ApnSetting_Builder setProtocol(jint arg0);
		android::telephony::data::ApnSetting_Builder setProxyAddress(jstring arg0);
		android::telephony::data::ApnSetting_Builder setProxyAddress(java::net::InetAddress arg0);
		android::telephony::data::ApnSetting_Builder setProxyPort(jint arg0);
		android::telephony::data::ApnSetting_Builder setRoamingProtocol(jint arg0);
		android::telephony::data::ApnSetting_Builder setUser(jstring arg0);
	};
} // namespace android::telephony::data

