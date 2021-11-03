#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi
{
	class WpsInfo;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi::p2p
{
	class WifiP2pConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint GROUP_OWNER_BAND_2GHZ();
		static jint GROUP_OWNER_BAND_5GHZ();
		static jint GROUP_OWNER_BAND_AUTO();
		static jint GROUP_OWNER_INTENT_AUTO();
		static jint GROUP_OWNER_INTENT_MAX();
		static jint GROUP_OWNER_INTENT_MIN();
		JString deviceAddress();
		jint groupOwnerIntent();
		android::net::wifi::WpsInfo wps();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pConfig(QAndroidJniObject obj);
		
		// Constructors
		WifiP2pConfig();
		WifiP2pConfig(android::net::wifi::p2p::WifiP2pConfig &arg0);
		
		// Methods
		jint describeContents();
		jint getGroupOwnerBand();
		jint getNetworkId();
		JString getNetworkName();
		JString getPassphrase();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

