#pragma once

#include "./AdvertisingSet.def.hpp"
#include "./AdvertisingSetCallback.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline jint AdvertisingSetCallback::ADVERTISE_FAILED_ALREADY_STARTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_ALREADY_STARTED"
		);
	}
	inline jint AdvertisingSetCallback::ADVERTISE_FAILED_DATA_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_DATA_TOO_LARGE"
		);
	}
	inline jint AdvertisingSetCallback::ADVERTISE_FAILED_FEATURE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	inline jint AdvertisingSetCallback::ADVERTISE_FAILED_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_INTERNAL_ERROR"
		);
	}
	inline jint AdvertisingSetCallback::ADVERTISE_FAILED_TOO_MANY_ADVERTISERS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_TOO_MANY_ADVERTISERS"
		);
	}
	inline jint AdvertisingSetCallback::ADVERTISE_SUCCESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_SUCCESS"
		);
	}
	
	// Constructors
	inline AdvertisingSetCallback::AdvertisingSetCallback()
		: JObject(
			"android.bluetooth.le.AdvertisingSetCallback",
			"()V"
		) {}
	
	// Methods
	inline void AdvertisingSetCallback::onAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const
	{
		callMethod<void>(
			"onAdvertisingDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AdvertisingSetCallback::onAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2) const
	{
		callMethod<void>(
			"onAdvertisingEnabled",
			"(Landroid/bluetooth/le/AdvertisingSet;ZI)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void AdvertisingSetCallback::onAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onAdvertisingParametersUpdated",
			"(Landroid/bluetooth/le/AdvertisingSet;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void AdvertisingSetCallback::onAdvertisingSetStarted(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onAdvertisingSetStarted",
			"(Landroid/bluetooth/le/AdvertisingSet;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void AdvertisingSetCallback::onAdvertisingSetStopped(android::bluetooth::le::AdvertisingSet arg0) const
	{
		callMethod<void>(
			"onAdvertisingSetStopped",
			"(Landroid/bluetooth/le/AdvertisingSet;)V",
			arg0.object()
		);
	}
	inline void AdvertisingSetCallback::onPeriodicAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const
	{
		callMethod<void>(
			"onPeriodicAdvertisingDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AdvertisingSetCallback::onPeriodicAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2) const
	{
		callMethod<void>(
			"onPeriodicAdvertisingEnabled",
			"(Landroid/bluetooth/le/AdvertisingSet;ZI)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void AdvertisingSetCallback::onPeriodicAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const
	{
		callMethod<void>(
			"onPeriodicAdvertisingParametersUpdated",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AdvertisingSetCallback::onScanResponseDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const
	{
		callMethod<void>(
			"onScanResponseDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

// Base class headers

