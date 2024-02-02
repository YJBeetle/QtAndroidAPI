#pragma once

#include "../../JString.hpp"
#include "./DeviceId.def.hpp"

namespace android::devicelock
{
	// Fields
	inline jint DeviceId::DEVICE_ID_TYPE_IMEI()
	{
		return getStaticField<jint>(
			"android.devicelock.DeviceId",
			"DEVICE_ID_TYPE_IMEI"
		);
	}
	inline jint DeviceId::DEVICE_ID_TYPE_MEID()
	{
		return getStaticField<jint>(
			"android.devicelock.DeviceId",
			"DEVICE_ID_TYPE_MEID"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString DeviceId::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jint DeviceId::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::devicelock

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::devicelock;
#endif
