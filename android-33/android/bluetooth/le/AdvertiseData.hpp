#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../util/SparseArray.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AdvertiseData.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline JObject AdvertiseData::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.AdvertiseData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AdvertiseData::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AdvertiseData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean AdvertiseData::getIncludeDeviceName() const
	{
		return callMethod<jboolean>(
			"getIncludeDeviceName",
			"()Z"
		);
	}
	inline jboolean AdvertiseData::getIncludeTxPowerLevel() const
	{
		return callMethod<jboolean>(
			"getIncludeTxPowerLevel",
			"()Z"
		);
	}
	inline android::util::SparseArray AdvertiseData::getManufacturerSpecificData() const
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	inline JObject AdvertiseData::getServiceData() const
	{
		return callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	inline JObject AdvertiseData::getServiceSolicitationUuids() const
	{
		return callObjectMethod(
			"getServiceSolicitationUuids",
			"()Ljava/util/List;"
		);
	}
	inline JObject AdvertiseData::getServiceUuids() const
	{
		return callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	inline JObject AdvertiseData::getTransportDiscoveryData() const
	{
		return callObjectMethod(
			"getTransportDiscoveryData",
			"()Ljava/util/List;"
		);
	}
	inline jint AdvertiseData::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AdvertiseData::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AdvertiseData::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
