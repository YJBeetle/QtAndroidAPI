#pragma once

#include "./BleRssiRangingParams.def.hpp"
#include "../../../../JString.hpp"
#include "./BleRssiRangingParams_Builder.def.hpp"

namespace android::ranging::ble::rssi
{
	// Fields
	
	// Constructors
	inline BleRssiRangingParams_Builder::BleRssiRangingParams_Builder(JString arg0)
		: JObject(
			"android.ranging.ble.rssi.BleRssiRangingParams$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::ranging::ble::rssi::BleRssiRangingParams BleRssiRangingParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/ble/rssi/BleRssiRangingParams;"
		);
	}
	inline android::ranging::ble::rssi::BleRssiRangingParams_Builder BleRssiRangingParams_Builder::setRangingUpdateRate(jint arg0) const
	{
		return callObjectMethod(
			"setRangingUpdateRate",
			"(I)Landroid/ranging/ble/rssi/BleRssiRangingParams$Builder;",
			arg0
		);
	}
} // namespace android::ranging::ble::rssi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::ble::rssi;
#endif
