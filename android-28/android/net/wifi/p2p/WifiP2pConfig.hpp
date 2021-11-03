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

namespace android::net::wifi::p2p
{
	class WifiP2pConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jstring deviceAddress();
		jint groupOwnerIntent();
		android::net::wifi::WpsInfo wps();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pConfig(QJniObject obj);
		
		// Constructors
		WifiP2pConfig();
		WifiP2pConfig(android::net::wifi::p2p::WifiP2pConfig &arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

