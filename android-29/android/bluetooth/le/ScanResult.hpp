#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth::le
{
	class ScanRecord;
}
namespace android::os
{
	class Parcel;
}

namespace android::bluetooth::le
{
	class ScanResult : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint DATA_COMPLETE();
		static jint DATA_TRUNCATED();
		static jint PERIODIC_INTERVAL_NOT_PRESENT();
		static jint PHY_UNUSED();
		static jint SID_NOT_PRESENT();
		static jint TX_POWER_NOT_PRESENT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult(QAndroidJniObject obj);
		
		// Constructors
		ScanResult(android::bluetooth::BluetoothDevice arg0, android::bluetooth::le::ScanRecord arg1, jint arg2, jlong arg3);
		ScanResult(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, android::bluetooth::le::ScanRecord arg8, jlong arg9);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAdvertisingSid();
		jint getDataStatus();
		QAndroidJniObject getDevice();
		jint getPeriodicAdvertisingInterval();
		jint getPrimaryPhy();
		jint getRssi();
		QAndroidJniObject getScanRecord();
		jint getSecondaryPhy();
		jlong getTimestampNanos();
		jint getTxPower();
		jint hashCode();
		jboolean isConnectable();
		jboolean isLegacy();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

