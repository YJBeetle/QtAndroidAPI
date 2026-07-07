#pragma once

#include "../RangingDevice.def.hpp"
#include "../ble/cs/BleCsRangingParams.def.hpp"
#include "../ble/rssi/BleRssiRangingParams.def.hpp"
#include "./RawRangingDevice.def.hpp"
#include "../uwb/UwbRangingParams.def.hpp"
#include "../wifi/rtt/RttRangingParams.def.hpp"
#include "./RawRangingDevice_Builder.def.hpp"

namespace android::ranging::raw
{
	// Fields
	
	// Constructors
	inline RawRangingDevice_Builder::RawRangingDevice_Builder()
		: JObject(
			"android.ranging.raw.RawRangingDevice$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::ranging::raw::RawRangingDevice RawRangingDevice_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/raw/RawRangingDevice;"
		);
	}
	inline android::ranging::raw::RawRangingDevice_Builder RawRangingDevice_Builder::setBleRssiRangingParams(android::ranging::ble::rssi::BleRssiRangingParams arg0) const
	{
		return callObjectMethod(
			"setBleRssiRangingParams",
			"(Landroid/ranging/ble/rssi/BleRssiRangingParams;)Landroid/ranging/raw/RawRangingDevice$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::raw::RawRangingDevice_Builder RawRangingDevice_Builder::setCsRangingParams(android::ranging::ble::cs::BleCsRangingParams arg0) const
	{
		return callObjectMethod(
			"setCsRangingParams",
			"(Landroid/ranging/ble/cs/BleCsRangingParams;)Landroid/ranging/raw/RawRangingDevice$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::raw::RawRangingDevice_Builder RawRangingDevice_Builder::setRangingDevice(android::ranging::RangingDevice arg0) const
	{
		return callObjectMethod(
			"setRangingDevice",
			"(Landroid/ranging/RangingDevice;)Landroid/ranging/raw/RawRangingDevice$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::raw::RawRangingDevice_Builder RawRangingDevice_Builder::setRttRangingParams(android::ranging::wifi::rtt::RttRangingParams arg0) const
	{
		return callObjectMethod(
			"setRttRangingParams",
			"(Landroid/ranging/wifi/rtt/RttRangingParams;)Landroid/ranging/raw/RawRangingDevice$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::raw::RawRangingDevice_Builder RawRangingDevice_Builder::setUwbRangingParams(android::ranging::uwb::UwbRangingParams arg0) const
	{
		return callObjectMethod(
			"setUwbRangingParams",
			"(Landroid/ranging/uwb/UwbRangingParams;)Landroid/ranging/raw/RawRangingDevice$Builder;",
			arg0.object()
		);
	}
} // namespace android::ranging::raw

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::raw;
#endif
