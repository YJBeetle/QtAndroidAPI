#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class NetworkInfo_DetailedState;
}
namespace android::net::wifi
{
	class SupplicantState;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi
{
	class WifiInfo : public JObject
	{
	public:
		// Fields
		static JString FREQUENCY_UNITS();
		static JString LINK_SPEED_UNITS();
		static jint LINK_SPEED_UNKNOWN();
		static jint SECURITY_TYPE_EAP();
		static jint SECURITY_TYPE_EAP_WPA3_ENTERPRISE();
		static jint SECURITY_TYPE_EAP_WPA3_ENTERPRISE_192_BIT();
		static jint SECURITY_TYPE_OPEN();
		static jint SECURITY_TYPE_OSEN();
		static jint SECURITY_TYPE_OWE();
		static jint SECURITY_TYPE_PASSPOINT_R1_R2();
		static jint SECURITY_TYPE_PASSPOINT_R3();
		static jint SECURITY_TYPE_PSK();
		static jint SECURITY_TYPE_SAE();
		static jint SECURITY_TYPE_UNKNOWN();
		static jint SECURITY_TYPE_WAPI_CERT();
		static jint SECURITY_TYPE_WAPI_PSK();
		static jint SECURITY_TYPE_WEP();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::NetworkInfo_DetailedState getDetailedStateOf(android::net::wifi::SupplicantState arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jlong getApplicableRedactions() const;
		JString getBSSID() const;
		jint getCurrentSecurityType() const;
		jint getFrequency() const;
		jboolean getHiddenSSID() const;
		JObject getInformationElements() const;
		jint getIpAddress() const;
		jint getLinkSpeed() const;
		JString getMacAddress() const;
		jint getMaxSupportedRxLinkSpeedMbps() const;
		jint getMaxSupportedTxLinkSpeedMbps() const;
		jint getNetworkId() const;
		JString getPasspointFqdn() const;
		JString getPasspointProviderFriendlyName() const;
		jint getRssi() const;
		jint getRxLinkSpeedMbps() const;
		JString getSSID() const;
		jint getSubscriptionId() const;
		android::net::wifi::SupplicantState getSupplicantState() const;
		jint getTxLinkSpeedMbps() const;
		jint getWifiStandard() const;
		jint hashCode() const;
		android::net::wifi::WifiInfo makeCopy(jlong arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

