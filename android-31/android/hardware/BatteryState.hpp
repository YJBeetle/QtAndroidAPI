#pragma once

#include "./BatteryState.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint BatteryState::STATUS_CHARGING()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_CHARGING"
		);
	}
	inline jint BatteryState::STATUS_DISCHARGING()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_DISCHARGING"
		);
	}
	inline jint BatteryState::STATUS_FULL()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_FULL"
		);
	}
	inline jint BatteryState::STATUS_NOT_CHARGING()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_NOT_CHARGING"
		);
	}
	inline jint BatteryState::STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_UNKNOWN"
		);
	}
	
	// Constructors
	inline BatteryState::BatteryState()
		: JObject(
			"android.hardware.BatteryState",
			"()V"
		) {}
	
	// Methods
	inline jfloat BatteryState::getCapacity() const
	{
		return callMethod<jfloat>(
			"getCapacity",
			"()F"
		);
	}
	inline jint BatteryState::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline jboolean BatteryState::isPresent() const
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
} // namespace android::hardware

// Base class headers

