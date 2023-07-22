#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/ParcelUuid.def.hpp"
#include "../../util/SparseArray.def.hpp"
#include "../../../JString.hpp"
#include "./ScanRecord.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint ScanRecord::getAdvertiseFlags() const
	{
		return callMethod<jint>(
			"getAdvertiseFlags",
			"()I"
		);
	}
	inline JByteArray ScanRecord::getBytes() const
	{
		return callObjectMethod(
			"getBytes",
			"()[B"
		);
	}
	inline JString ScanRecord::getDeviceName() const
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray ScanRecord::getManufacturerSpecificData(jint arg0) const
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"(I)[B",
			arg0
		);
	}
	inline android::util::SparseArray ScanRecord::getManufacturerSpecificData() const
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	inline JByteArray ScanRecord::getServiceData(android::os::ParcelUuid arg0) const
	{
		return callObjectMethod(
			"getServiceData",
			"(Landroid/os/ParcelUuid;)[B",
			arg0.object()
		);
	}
	inline JObject ScanRecord::getServiceData() const
	{
		return callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	inline JObject ScanRecord::getServiceSolicitationUuids() const
	{
		return callObjectMethod(
			"getServiceSolicitationUuids",
			"()Ljava/util/List;"
		);
	}
	inline JObject ScanRecord::getServiceUuids() const
	{
		return callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	inline jint ScanRecord::getTxPowerLevel() const
	{
		return callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	inline JString ScanRecord::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
