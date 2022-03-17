#pragma once

#include "./UsbInterface.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./UsbConfiguration.def.hpp"

namespace android::hardware::usb
{
	// Fields
	inline JObject UsbConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UsbConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint UsbConfiguration::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline android::hardware::usb::UsbInterface UsbConfiguration::getInterface(jint arg0) const
	{
		return callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0
		);
	}
	inline jint UsbConfiguration::getInterfaceCount() const
	{
		return callMethod<jint>(
			"getInterfaceCount",
			"()I"
		);
	}
	inline jint UsbConfiguration::getMaxPower() const
	{
		return callMethod<jint>(
			"getMaxPower",
			"()I"
		);
	}
	inline JString UsbConfiguration::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean UsbConfiguration::isRemoteWakeup() const
	{
		return callMethod<jboolean>(
			"isRemoteWakeup",
			"()Z"
		);
	}
	inline jboolean UsbConfiguration::isSelfPowered() const
	{
		return callMethod<jboolean>(
			"isSelfPowered",
			"()Z"
		);
	}
	inline JString UsbConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UsbConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
