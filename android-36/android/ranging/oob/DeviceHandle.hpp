#pragma once

#include "../../os/Parcel.def.hpp"
#include "../RangingDevice.def.hpp"
#include "../../../JString.hpp"
#include "./DeviceHandle.def.hpp"

namespace android::ranging::oob
{
	// Fields
	inline JObject DeviceHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.oob.DeviceHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DeviceHandle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::ranging::RangingDevice DeviceHandle::getRangingDevice() const
	{
		return callObjectMethod(
			"getRangingDevice",
			"()Landroid/ranging/RangingDevice;"
		);
	}
	inline JObject DeviceHandle::getTransportHandle() const
	{
		return callObjectMethod(
			"getTransportHandle",
			"()Landroid/ranging/oob/TransportHandle;"
		);
	}
	inline JString DeviceHandle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DeviceHandle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::oob

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::oob;
#endif
