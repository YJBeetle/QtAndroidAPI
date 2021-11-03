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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::NetworkInfo_DetailedState getDetailedStateOf(android::net::wifi::SupplicantState arg0);
		jint describeContents();
		JString getBSSID();
		jint getFrequency();
		jboolean getHiddenSSID();
		jint getIpAddress();
		jint getLinkSpeed();
		JString getMacAddress();
		jint getMaxSupportedRxLinkSpeedMbps();
		jint getMaxSupportedTxLinkSpeedMbps();
		jint getNetworkId();
		JString getPasspointFqdn();
		JString getPasspointProviderFriendlyName();
		jint getRssi();
		jint getRxLinkSpeedMbps();
		JString getSSID();
		android::net::wifi::SupplicantState getSupplicantState();
		jint getTxLinkSpeedMbps();
		jint getWifiStandard();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

