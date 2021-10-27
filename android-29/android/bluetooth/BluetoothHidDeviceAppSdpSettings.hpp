#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth
{
	class BluetoothHidDeviceAppSdpSettings : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		BluetoothHidDeviceAppSdpSettings(QAndroidJniObject obj);
		// Constructors
		BluetoothHidDeviceAppSdpSettings(jstring &arg0, jstring &arg1, jstring &arg2, jbyte &arg3, jbyteArray &arg4);
		BluetoothHidDeviceAppSdpSettings(const QString &arg0, const QString &arg1, const QString &arg2, jbyte &arg3, jbyteArray &arg4);
		BluetoothHidDeviceAppSdpSettings() = default;
		
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

