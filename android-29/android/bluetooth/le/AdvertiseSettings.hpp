#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth::le
{
	class AdvertiseSettings : public __JniBaseClass
	{
	public:
		// Fields
		static jint ADVERTISE_MODE_BALANCED();
		static jint ADVERTISE_MODE_LOW_LATENCY();
		static jint ADVERTISE_MODE_LOW_POWER();
		static jint ADVERTISE_TX_POWER_HIGH();
		static jint ADVERTISE_TX_POWER_LOW();
		static jint ADVERTISE_TX_POWER_MEDIUM();
		static jint ADVERTISE_TX_POWER_ULTRA_LOW();
		static QAndroidJniObject CREATOR();
		
		AdvertiseSettings(QAndroidJniObject obj);
		// Constructors
		AdvertiseSettings() = default;
		
		// Methods
		jint describeContents();
		jint getMode();
		jint getTimeout();
		jint getTxPowerLevel();
		jboolean isConnectable();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

