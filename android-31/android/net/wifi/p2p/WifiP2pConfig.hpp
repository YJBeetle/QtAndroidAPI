#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi
{
	class WpsInfo;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::p2p
{
	class WifiP2pConfig : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint GROUP_OWNER_BAND_2GHZ();
		static jint GROUP_OWNER_BAND_5GHZ();
		static jint GROUP_OWNER_BAND_AUTO();
		static jint GROUP_OWNER_INTENT_AUTO();
		static jint GROUP_OWNER_INTENT_MAX();
		static jint GROUP_OWNER_INTENT_MIN();
		jstring deviceAddress();
		jint groupOwnerIntent();
		android::net::wifi::WpsInfo wps();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pConfig(QJniObject obj);
		
		// Constructors
		WifiP2pConfig();
		WifiP2pConfig(android::net::wifi::p2p::WifiP2pConfig &arg0);
		
		// Methods
		jint describeContents();
		jint getGroupOwnerBand();
		jint getNetworkId();
		jstring getNetworkName();
		jstring getPassphrase();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

