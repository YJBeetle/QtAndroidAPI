#pragma once

#include "../../../JObject.hpp"

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
	class BluetoothLeAdvertiser : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothLeAdvertiser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeAdvertiser(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseCallback arg2) const;
		void startAdvertising(android::bluetooth::le::AdvertiseSettings arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::AdvertiseCallback arg3) const;
		void startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5) const;
		void startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, android::bluetooth::le::AdvertisingSetCallback arg5, android::os::Handler arg6) const;
		void startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7) const;
		void startAdvertisingSet(android::bluetooth::le::AdvertisingSetParameters arg0, android::bluetooth::le::AdvertiseData arg1, android::bluetooth::le::AdvertiseData arg2, android::bluetooth::le::PeriodicAdvertisingParameters arg3, android::bluetooth::le::AdvertiseData arg4, jint arg5, jint arg6, android::bluetooth::le::AdvertisingSetCallback arg7, android::os::Handler arg8) const;
		void stopAdvertising(android::bluetooth::le::AdvertiseCallback arg0) const;
		void stopAdvertisingSet(android::bluetooth::le::AdvertisingSetCallback arg0) const;
	};
} // namespace android::bluetooth::le

