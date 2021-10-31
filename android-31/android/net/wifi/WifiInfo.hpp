#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::net::wifi
{
	class WifiInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FREQUENCY_UNITS();
		static jstring LINK_SPEED_UNITS();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::NetworkInfo_DetailedState getDetailedStateOf(android::net::wifi::SupplicantState arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getApplicableRedactions();
		jstring getBSSID();
		jint getCurrentSecurityType();
		jint getFrequency();
		jboolean getHiddenSSID();
		__JniBaseClass getInformationElements();
		jint getIpAddress();
		jint getLinkSpeed();
		jstring getMacAddress();
		jint getMaxSupportedRxLinkSpeedMbps();
		jint getMaxSupportedTxLinkSpeedMbps();
		jint getNetworkId();
		jstring getPasspointFqdn();
		jstring getPasspointProviderFriendlyName();
		jint getRssi();
		jint getRxLinkSpeedMbps();
		jstring getSSID();
		jint getSubscriptionId();
		android::net::wifi::SupplicantState getSupplicantState();
		jint getTxLinkSpeedMbps();
		jint getWifiStandard();
		jint hashCode();
		android::net::wifi::WifiInfo makeCopy(jlong arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

