#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::p2p
{
	class WifiP2pWfdInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint DEVICE_TYPE_PRIMARY_SINK();
		static jint DEVICE_TYPE_SECONDARY_SINK();
		static jint DEVICE_TYPE_SOURCE_OR_PRIMARY_SINK();
		static jint DEVICE_TYPE_WFD_SOURCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pWfdInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pWfdInfo(QAndroidJniObject obj);
		
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
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

