#include "./BatteryState.hpp"

namespace android::hardware
{
	// Fields
	jint BatteryState::STATUS_CHARGING()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_CHARGING"
		);
	}
	jint BatteryState::STATUS_DISCHARGING()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_DISCHARGING"
		);
	}
	jint BatteryState::STATUS_FULL()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_FULL"
		);
	}
	jint BatteryState::STATUS_NOT_CHARGING()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_NOT_CHARGING"
		);
	}
	jint BatteryState::STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.BatteryState",
			"STATUS_UNKNOWN"
		);
	}
	
	// QJniObject forward
	BatteryState::BatteryState(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BatteryState::BatteryState()
		: JObject(
			"android.hardware.BatteryState",
			"()V"
		) {}
	
	// Methods
	jfloat BatteryState::getCapacity()
	{
		return callMethod<jfloat>(
			"getCapacity",
			"()F"
		);
	}
	jint BatteryState::getStatus()
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jboolean BatteryState::isPresent()
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
} // namespace android::hardware

