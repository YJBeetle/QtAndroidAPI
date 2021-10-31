#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth
{
	class BluetoothHidDeviceAppQosSettings : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint MAX();
		static jint SERVICE_BEST_EFFORT();
		static jint SERVICE_GUARANTEED();
		static jint SERVICE_NO_TRAFFIC();
		
		BluetoothHidDeviceAppQosSettings(QAndroidJniObject obj);
		// Constructors
		BluetoothHidDeviceAppQosSettings(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		BluetoothHidDeviceAppQosSettings() = default;
		
		// Methods
		jint describeContents();
		jint getDelayVariation();
		jint getLatency();
		jint getPeakBandwidth();
		jint getServiceType();
		jint getTokenBucketSize();
		jint getTokenRate();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

