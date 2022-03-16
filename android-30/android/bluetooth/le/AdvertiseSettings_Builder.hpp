#pragma once

#include "./AdvertiseSettings.def.hpp"
#include "./AdvertiseSettings_Builder.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// Constructors
	inline AdvertiseSettings_Builder::AdvertiseSettings_Builder()
		: JObject(
			"android.bluetooth.le.AdvertiseSettings$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::bluetooth::le::AdvertiseSettings AdvertiseSettings_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseSettings;"
		);
	}
	inline android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setAdvertiseMode(jint arg0) const
	{
		return callObjectMethod(
			"setAdvertiseMode",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setConnectable(jboolean arg0) const
	{
		return callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setTimeout(jint arg0) const
	{
		return callObjectMethod(
			"setTimeout",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertiseSettings_Builder AdvertiseSettings_Builder::setTxPowerLevel(jint arg0) const
	{
		return callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

// Base class headers

