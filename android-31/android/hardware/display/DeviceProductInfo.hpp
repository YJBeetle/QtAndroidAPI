#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DeviceProductInfo.def.hpp"

namespace android::hardware::display
{
	// Fields
	inline jint DeviceProductInfo::CONNECTION_TO_SINK_BUILT_IN()
	{
		return getStaticField<jint>(
			"android.hardware.display.DeviceProductInfo",
			"CONNECTION_TO_SINK_BUILT_IN"
		);
	}
	inline jint DeviceProductInfo::CONNECTION_TO_SINK_DIRECT()
	{
		return getStaticField<jint>(
			"android.hardware.display.DeviceProductInfo",
			"CONNECTION_TO_SINK_DIRECT"
		);
	}
	inline jint DeviceProductInfo::CONNECTION_TO_SINK_TRANSITIVE()
	{
		return getStaticField<jint>(
			"android.hardware.display.DeviceProductInfo",
			"CONNECTION_TO_SINK_TRANSITIVE"
		);
	}
	inline jint DeviceProductInfo::CONNECTION_TO_SINK_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.display.DeviceProductInfo",
			"CONNECTION_TO_SINK_UNKNOWN"
		);
	}
	inline JObject DeviceProductInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.display.DeviceProductInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline DeviceProductInfo::DeviceProductInfo(JString arg0, JString arg1, JString arg2, jint arg3, jint arg4)
		: JObject(
			"android.hardware.display.DeviceProductInfo",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4
		) {}
	
	// Methods
	inline jint DeviceProductInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DeviceProductInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint DeviceProductInfo::getConnectionToSinkType() const
	{
		return callMethod<jint>(
			"getConnectionToSinkType",
			"()I"
		);
	}
	inline jint DeviceProductInfo::getManufactureWeek() const
	{
		return callMethod<jint>(
			"getManufactureWeek",
			"()I"
		);
	}
	inline jint DeviceProductInfo::getManufactureYear() const
	{
		return callMethod<jint>(
			"getManufactureYear",
			"()I"
		);
	}
	inline JString DeviceProductInfo::getManufacturerPnpId() const
	{
		return callObjectMethod(
			"getManufacturerPnpId",
			"()Ljava/lang/String;"
		);
	}
	inline jint DeviceProductInfo::getModelYear() const
	{
		return callMethod<jint>(
			"getModelYear",
			"()I"
		);
	}
	inline JString DeviceProductInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString DeviceProductInfo::getProductId() const
	{
		return callObjectMethod(
			"getProductId",
			"()Ljava/lang/String;"
		);
	}
	inline jint DeviceProductInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DeviceProductInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DeviceProductInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::display

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::display;
#endif
