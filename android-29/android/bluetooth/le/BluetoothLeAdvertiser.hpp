#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class AdvertiseCallback;
}
namespace android::bluetooth::le
{
	class AdvertiseData;
}
namespace android::bluetooth::le
{
	class AdvertiseSettings;
}
namespace android::bluetooth::le
{
	class AdvertisingSetCallback;
}
namespace android::bluetooth::le
{
	class AdvertisingSetParameters;
}
namespace android::bluetooth::le
{
	class PeriodicAdvertisingParameters;
}
namespace android::os
{
	class Handler;
}

namespace android::bluetooth::le
{
	class BluetoothLeAdvertiser : public __JniBaseClass
	{
	public:
		// Fields
		
		BluetoothLeAdvertiser(QAndroidJniObject obj);
		// Constructors
		BluetoothLeAdvertiser() = default;
		
		// Methods
		void startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseCallback arg2);
		void startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::AdvertiseCallback arg3);
		void startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5);
		void startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5, android::os::Handler arg6);
		void startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7);
		void startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7, android::os::Handler arg8);
		void stopAdvertising(android::bluetooth::le::AdvertiseCallback arg0);
		void stopAdvertisingSet(android::bluetooth::le::AdvertisingSetCallback arg0);
	};
} // namespace android::bluetooth::le

