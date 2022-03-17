#pragma once

#include "./UsbEndpoint.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./UsbInterface.def.hpp"

namespace android::hardware::usb
{
	// Fields
	inline JObject UsbInterface::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbInterface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UsbInterface::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint UsbInterface::getAlternateSetting() const
	{
		return callMethod<jint>(
			"getAlternateSetting",
			"()I"
		);
	}
	inline android::hardware::usb::UsbEndpoint UsbInterface::getEndpoint(jint arg0) const
	{
		return callObjectMethod(
			"getEndpoint",
			"(I)Landroid/hardware/usb/UsbEndpoint;",
			arg0
		);
	}
	inline jint UsbInterface::getEndpointCount() const
	{
		return callMethod<jint>(
			"getEndpointCount",
			"()I"
		);
	}
	inline jint UsbInterface::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint UsbInterface::getInterfaceClass() const
	{
		return callMethod<jint>(
			"getInterfaceClass",
			"()I"
		);
	}
	inline jint UsbInterface::getInterfaceProtocol() const
	{
		return callMethod<jint>(
			"getInterfaceProtocol",
			"()I"
		);
	}
	inline jint UsbInterface::getInterfaceSubclass() const
	{
		return callMethod<jint>(
			"getInterfaceSubclass",
			"()I"
		);
	}
	inline JString UsbInterface::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString UsbInterface::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UsbInterface::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

