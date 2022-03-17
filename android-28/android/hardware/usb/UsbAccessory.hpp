#pragma once

#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UsbAccessory.def.hpp"

namespace android::hardware::usb
{
	// Fields
	inline JObject UsbAccessory::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbAccessory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UsbAccessory::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UsbAccessory::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString UsbAccessory::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline JString UsbAccessory::getManufacturer() const
	{
		return callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		);
	}
	inline JString UsbAccessory::getModel() const
	{
		return callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		);
	}
	inline JString UsbAccessory::getSerial() const
	{
		return callObjectMethod(
			"getSerial",
			"()Ljava/lang/String;"
		);
	}
	inline JString UsbAccessory::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Ljava/lang/String;"
		);
	}
	inline JString UsbAccessory::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		);
	}
	inline jint UsbAccessory::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UsbAccessory::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UsbAccessory::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

