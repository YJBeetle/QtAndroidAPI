#pragma once

#include "../../../JByteArray.hpp"
#include "./ScanFilter.def.hpp"
#include "../../os/ParcelUuid.def.hpp"
#include "../../../JString.hpp"
#include "./ScanFilter_Builder.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// Constructors
	inline ScanFilter_Builder::ScanFilter_Builder()
		: JObject(
			"android.bluetooth.le.ScanFilter$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::bluetooth::le::ScanFilter ScanFilter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/ScanFilter;"
		);
	}
	inline android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setDeviceAddress(JString arg0) const
	{
		return callObjectMethod(
			"setDeviceAddress",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setDeviceName(JString arg0) const
	{
		return callObjectMethod(
			"setDeviceName",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setManufacturerData(jint arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"setManufacturerData",
			"(I[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setManufacturerData(jint arg0, JByteArray arg1, JByteArray arg2) const
	{
		return callObjectMethod(
			"setManufacturerData",
			"(I[B[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0,
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		);
	}
	inline android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setServiceData(android::os::ParcelUuid arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"setServiceData",
			"(Landroid/os/ParcelUuid;[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setServiceData(android::os::ParcelUuid arg0, JByteArray arg1, JByteArray arg2) const
	{
		return callObjectMethod(
			"setServiceData",
			"(Landroid/os/ParcelUuid;[B[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		);
	}
	inline android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setServiceUuid(android::os::ParcelUuid arg0) const
	{
		return callObjectMethod(
			"setServiceUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object()
		);
	}
	inline android::bluetooth::le::ScanFilter_Builder ScanFilter_Builder::setServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1) const
	{
		return callObjectMethod(
			"setServiceUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
