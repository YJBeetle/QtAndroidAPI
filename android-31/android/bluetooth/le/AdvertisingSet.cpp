#include "./AdvertiseData.hpp"
#include "./AdvertisingSetParameters.hpp"
#include "./PeriodicAdvertisingParameters.hpp"
#include "./AdvertisingSet.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QJniObject forward
	AdvertisingSet::AdvertisingSet(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void AdvertisingSet::enableAdvertising(jboolean arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"enableAdvertising",
			"(ZII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void AdvertisingSet::setAdvertisingData(android::bluetooth::le::AdvertiseData arg0) const
	{
		callMethod<void>(
			"setAdvertisingData",
			"(Landroid/bluetooth/le/AdvertiseData;)V",
			arg0.object()
		);
	}
	void AdvertisingSet::setAdvertisingParameters(android::bluetooth::le::AdvertisingSetParameters arg0) const
	{
		callMethod<void>(
			"setAdvertisingParameters",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;)V",
			arg0.object()
		);
	}
	void AdvertisingSet::setPeriodicAdvertisingData(android::bluetooth::le::AdvertiseData arg0) const
	{
		callMethod<void>(
			"setPeriodicAdvertisingData",
			"(Landroid/bluetooth/le/AdvertiseData;)V",
			arg0.object()
		);
	}
	void AdvertisingSet::setPeriodicAdvertisingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setPeriodicAdvertisingEnabled",
			"(Z)V",
			arg0
		);
	}
	void AdvertisingSet::setPeriodicAdvertisingParameters(android::bluetooth::le::PeriodicAdvertisingParameters arg0) const
	{
		callMethod<void>(
			"setPeriodicAdvertisingParameters",
			"(Landroid/bluetooth/le/PeriodicAdvertisingParameters;)V",
			arg0.object()
		);
	}
	void AdvertisingSet::setScanResponseData(android::bluetooth::le::AdvertiseData arg0) const
	{
		callMethod<void>(
			"setScanResponseData",
			"(Landroid/bluetooth/le/AdvertiseData;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth::le

