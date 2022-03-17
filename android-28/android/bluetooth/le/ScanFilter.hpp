#pragma once

#include "../../../JByteArray.hpp"
#include "./ScanResult.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/ParcelUuid.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ScanFilter.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline JObject ScanFilter::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.ScanFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ScanFilter::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ScanFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ScanFilter::getDeviceAddress() const
	{
		return callObjectMethod(
			"getDeviceAddress",
			"()Ljava/lang/String;"
		);
	}
	inline JString ScanFilter::getDeviceName() const
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray ScanFilter::getManufacturerData() const
	{
		return callObjectMethod(
			"getManufacturerData",
			"()[B"
		);
	}
	inline JByteArray ScanFilter::getManufacturerDataMask() const
	{
		return callObjectMethod(
			"getManufacturerDataMask",
			"()[B"
		);
	}
	inline jint ScanFilter::getManufacturerId() const
	{
		return callMethod<jint>(
			"getManufacturerId",
			"()I"
		);
	}
	inline JByteArray ScanFilter::getServiceData() const
	{
		return callObjectMethod(
			"getServiceData",
			"()[B"
		);
	}
	inline JByteArray ScanFilter::getServiceDataMask() const
	{
		return callObjectMethod(
			"getServiceDataMask",
			"()[B"
		);
	}
	inline android::os::ParcelUuid ScanFilter::getServiceDataUuid() const
	{
		return callObjectMethod(
			"getServiceDataUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	inline android::os::ParcelUuid ScanFilter::getServiceUuid() const
	{
		return callObjectMethod(
			"getServiceUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	inline android::os::ParcelUuid ScanFilter::getServiceUuidMask() const
	{
		return callObjectMethod(
			"getServiceUuidMask",
			"()Landroid/os/ParcelUuid;"
		);
	}
	inline jint ScanFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ScanFilter::matches(android::bluetooth::le::ScanResult arg0) const
	{
		return callMethod<jboolean>(
			"matches",
			"(Landroid/bluetooth/le/ScanResult;)Z",
			arg0.object()
		);
	}
	inline JString ScanFilter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ScanFilter::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
