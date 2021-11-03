#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::p2p
{
	class WifiP2pWfdInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DEVICE_INFO_AUDIO_ONLY_SUPPORT_AT_SOURCE();
		static jint DEVICE_INFO_AUDIO_UNSUPPORTED_AT_PRIMARY_SINK();
		static jint DEVICE_INFO_CONTENT_PROTECTION_SUPPORT();
		static jint DEVICE_INFO_COUPLED_SINK_SUPPORT_AT_SINK();
		static jint DEVICE_INFO_COUPLED_SINK_SUPPORT_AT_SOURCE();
		static jint DEVICE_INFO_DEVICE_TYPE_MASK();
		static jint DEVICE_INFO_PREFERRED_CONNECTIVITY_MASK();
		static jint DEVICE_INFO_SESSION_AVAILABLE_MASK();
		static jint DEVICE_INFO_TDLS_PERSISTENT_GROUP();
		static jint DEVICE_INFO_TDLS_PERSISTENT_GROUP_REINVOKE();
		static jint DEVICE_INFO_TIME_SYNCHRONIZATION_SUPPORT();
		static jint DEVICE_INFO_WFD_SERVICE_DISCOVERY_SUPPORT();
		static jint DEVICE_TYPE_PRIMARY_SINK();
		static jint DEVICE_TYPE_SECONDARY_SINK();
		static jint DEVICE_TYPE_SOURCE_OR_PRIMARY_SINK();
		static jint DEVICE_TYPE_WFD_SOURCE();
		static jint PREFERRED_CONNECTIVITY_P2P();
		static jint PREFERRED_CONNECTIVITY_TDLS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pWfdInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pWfdInfo(QAndroidJniObject obj);
		
		// Constructors
		WifiP2pWfdInfo();
		WifiP2pWfdInfo(android::net::wifi::p2p::WifiP2pWfdInfo &arg0);
		
		// Methods
		jint describeContents();
		jint getControlPort();
		jint getDeviceInfo();
		jint getDeviceType();
		jint getMaxThroughput();
		jint getR2DeviceInfo();
		jint getR2DeviceType();
		jboolean isContentProtectionSupported();
		jboolean isCoupledSinkSupportedAtSink();
		jboolean isCoupledSinkSupportedAtSource();
		jboolean isEnabled();
		jboolean isR2Supported();
		jboolean isSessionAvailable();
		void setContentProtectionSupported(jboolean arg0);
		void setControlPort(jint arg0);
		void setCoupledSinkSupportAtSink(jboolean arg0);
		void setCoupledSinkSupportAtSource(jboolean arg0);
		jboolean setDeviceType(jint arg0);
		void setEnabled(jboolean arg0);
		void setMaxThroughput(jint arg0);
		jboolean setR2DeviceType(jint arg0);
		void setSessionAvailable(jboolean arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

