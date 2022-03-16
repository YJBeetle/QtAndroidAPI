#pragma once

#include "./PeriodicAdvertisingParameters.def.hpp"
#include "./PeriodicAdvertisingParameters_Builder.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// Constructors
	inline PeriodicAdvertisingParameters_Builder::PeriodicAdvertisingParameters_Builder()
		: JObject(
			"android.bluetooth.le.PeriodicAdvertisingParameters$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::bluetooth::le::PeriodicAdvertisingParameters PeriodicAdvertisingParameters_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/PeriodicAdvertisingParameters;"
		);
	}
	inline android::bluetooth::le::PeriodicAdvertisingParameters_Builder PeriodicAdvertisingParameters_Builder::setIncludeTxPower(jboolean arg0) const
	{
		return callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::PeriodicAdvertisingParameters_Builder PeriodicAdvertisingParameters_Builder::setInterval(jint arg0) const
	{
		return callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

// Base class headers

