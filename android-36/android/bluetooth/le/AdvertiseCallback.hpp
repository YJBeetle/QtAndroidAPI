#pragma once

#include "./AdvertiseSettings.def.hpp"
#include "./AdvertiseCallback.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline jint AdvertiseCallback::ADVERTISE_FAILED_ALREADY_STARTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_ALREADY_STARTED"
		);
	}
	inline jint AdvertiseCallback::ADVERTISE_FAILED_DATA_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_DATA_TOO_LARGE"
		);
	}
	inline jint AdvertiseCallback::ADVERTISE_FAILED_FEATURE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	inline jint AdvertiseCallback::ADVERTISE_FAILED_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_INTERNAL_ERROR"
		);
	}
	inline jint AdvertiseCallback::ADVERTISE_FAILED_TOO_MANY_ADVERTISERS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_TOO_MANY_ADVERTISERS"
		);
	}
	
	// Constructors
	inline AdvertiseCallback::AdvertiseCallback()
		: JObject(
			"android.bluetooth.le.AdvertiseCallback",
			"()V"
		) {}
	
	// Methods
	inline void AdvertiseCallback::onStartFailure(jint arg0) const
	{
		callMethod<void>(
			"onStartFailure",
			"(I)V",
			arg0
		);
	}
	inline void AdvertiseCallback::onStartSuccess(android::bluetooth::le::AdvertiseSettings arg0) const
	{
		callMethod<void>(
			"onStartSuccess",
			"(Landroid/bluetooth/le/AdvertiseSettings;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
