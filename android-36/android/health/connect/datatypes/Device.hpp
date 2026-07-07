#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./Device.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint Device::DEVICE_TYPE_CHEST_STRAP()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Device",
			"DEVICE_TYPE_CHEST_STRAP"
		);
	}
	inline jint Device::DEVICE_TYPE_FITNESS_BAND()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Device",
			"DEVICE_TYPE_FITNESS_BAND"
		);
	}
	inline jint Device::DEVICE_TYPE_HEAD_MOUNTED()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Device",
			"DEVICE_TYPE_HEAD_MOUNTED"
		);
	}
	inline jint Device::DEVICE_TYPE_PHONE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Device",
			"DEVICE_TYPE_PHONE"
		);
	}
	inline jint Device::DEVICE_TYPE_RING()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Device",
			"DEVICE_TYPE_RING"
		);
	}
	inline jint Device::DEVICE_TYPE_SCALE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Device",
			"DEVICE_TYPE_SCALE"
		);
	}
	inline jint Device::DEVICE_TYPE_SMART_DISPLAY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Device",
			"DEVICE_TYPE_SMART_DISPLAY"
		);
	}
	inline jint Device::DEVICE_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Device",
			"DEVICE_TYPE_UNKNOWN"
		);
	}
	inline jint Device::DEVICE_TYPE_WATCH()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Device",
			"DEVICE_TYPE_WATCH"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean Device::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString Device::getManufacturer() const
	{
		return callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		);
	}
	inline JString Device::getModel() const
	{
		return callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		);
	}
	inline jint Device::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint Device::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
