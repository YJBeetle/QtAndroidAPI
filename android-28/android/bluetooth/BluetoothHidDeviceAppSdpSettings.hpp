#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth
{
	class BluetoothHidDeviceAppSdpSettings : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothHidDeviceAppSdpSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHidDeviceAppSdpSettings(QJniObject obj);
		
		// Constructors
		BluetoothHidDeviceAppSdpSettings(jstring arg0, jstring arg1, jstring arg2, jbyte arg3, jbyteArray arg4);
		
		// Methods
		jint describeContents();
		jstring getDescription();
		jbyteArray getDescriptors();
		jstring getName();
		jstring getProvider();
		jbyte getSubclass();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

