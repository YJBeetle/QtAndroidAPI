#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./UsbEndpoint.def.hpp"

namespace android::hardware::usb
{
	// Fields
	inline JObject UsbEndpoint::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbEndpoint",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UsbEndpoint::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint UsbEndpoint::getAddress() const
	{
		return callMethod<jint>(
			"getAddress",
			"()I"
		);
	}
	inline jint UsbEndpoint::getAttributes() const
	{
		return callMethod<jint>(
			"getAttributes",
			"()I"
		);
	}
	inline jint UsbEndpoint::getDirection() const
	{
		return callMethod<jint>(
			"getDirection",
			"()I"
		);
	}
	inline jint UsbEndpoint::getEndpointNumber() const
	{
		return callMethod<jint>(
			"getEndpointNumber",
			"()I"
		);
	}
	inline jint UsbEndpoint::getInterval() const
	{
		return callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	inline jint UsbEndpoint::getMaxPacketSize() const
	{
		return callMethod<jint>(
			"getMaxPacketSize",
			"()I"
		);
	}
	inline jint UsbEndpoint::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JString UsbEndpoint::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UsbEndpoint::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::usb;
#endif
