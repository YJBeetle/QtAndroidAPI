#pragma once

#include "../../../JByteArray.hpp"
#include "./AdvertiseData.def.hpp"
#include "../../os/ParcelUuid.def.hpp"
#include "./AdvertiseData_Builder.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// Constructors
	inline AdvertiseData_Builder::AdvertiseData_Builder()
		: JObject(
			"android.bluetooth.le.AdvertiseData$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::addManufacturerData(jint arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"addManufacturerData",
			"(I[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::addServiceData(android::os::ParcelUuid arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"addServiceData",
			"(Landroid/os/ParcelUuid;[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::addServiceUuid(android::os::ParcelUuid arg0) const
	{
		return callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.object()
		);
	}
	inline android::bluetooth::le::AdvertiseData AdvertiseData_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseData;"
		);
	}
	inline android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::setIncludeDeviceName(jboolean arg0) const
	{
		return callObjectMethod(
			"setIncludeDeviceName",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::AdvertiseData_Builder AdvertiseData_Builder::setIncludeTxPowerLevel(jboolean arg0) const
	{
		return callObjectMethod(
			"setIncludeTxPowerLevel",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
