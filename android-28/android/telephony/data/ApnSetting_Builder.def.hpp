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
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ApnSetting_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApnSetting_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ApnSetting_Builder();
		
		// Methods
		android::telephony::data::ApnSetting build() const;
		android::telephony::data::ApnSetting_Builder setApnName(JString arg0) const;
		android::telephony::data::ApnSetting_Builder setApnTypeBitmask(jint arg0) const;
		android::telephony::data::ApnSetting_Builder setAuthType(jint arg0) const;
		android::telephony::data::ApnSetting_Builder setCarrierEnabled(jboolean arg0) const;
		android::telephony::data::ApnSetting_Builder setEntryName(JString arg0) const;
		android::telephony::data::ApnSetting_Builder setMmsProxyAddress(java::net::InetAddress arg0) const;
		android::telephony::data::ApnSetting_Builder setMmsProxyPort(jint arg0) const;
		android::telephony::data::ApnSetting_Builder setMmsc(android::net::Uri arg0) const;
		android::telephony::data::ApnSetting_Builder setMvnoType(jint arg0) const;
		android::telephony::data::ApnSetting_Builder setNetworkTypeBitmask(jint arg0) const;
		android::telephony::data::ApnSetting_Builder setOperatorNumeric(JString arg0) const;
		android::telephony::data::ApnSetting_Builder setPassword(JString arg0) const;
		android::telephony::data::ApnSetting_Builder setProtocol(jint arg0) const;
		android::telephony::data::ApnSetting_Builder setProxyAddress(java::net::InetAddress arg0) const;
		android::telephony::data::ApnSetting_Builder setProxyPort(jint arg0) const;
		android::telephony::data::ApnSetting_Builder setRoamingProtocol(jint arg0) const;
		android::telephony::data::ApnSetting_Builder setUser(JString arg0) const;
	};
} // namespace android::telephony::data

