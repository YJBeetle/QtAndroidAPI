#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi::p2p
{
	class WifiP2pWfdInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DEVICE_TYPE_PRIMARY_SINK();
		static jint DEVICE_TYPE_SECONDARY_SINK();
		static jint DEVICE_TYPE_SOURCE_OR_PRIMARY_SINK();
		static jint DEVICE_TYPE_WFD_SOURCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pWfdInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pWfdInfo(QJniObject obj);
		
		// Constructors
		WifiP2pWfdInfo();
		WifiP2pWfdInfo(android::net::wifi::p2p::WifiP2pWfdInfo &arg0);
		
		// Methods
		jint describeContents();
		jint getControlPort();
		jint getDeviceType();
		jint getMaxThroughput();
		jboolean isContentProtectionSupported();
		jboolean isEnabled();
		jboolean isSessionAvailable();
		void setContentProtectionSupported(jboolean arg0);
		void setControlPort(jint arg0);
		jboolean setDeviceType(jint arg0);
		void setEnabled(jboolean arg0);
		void setMaxThroughput(jint arg0);
		void setSessionAvailable(jboolean arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

