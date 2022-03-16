#include "./UsbInterface.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./UsbConfiguration.hpp"

namespace android::hardware::usb
{
	// Fields
	JObject UsbConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint UsbConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbConfiguration::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	android::hardware::usb::UsbInterface UsbConfiguration::getInterface(jint arg0) const
	{
		return callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0
		);
	}
	jint UsbConfiguration::getInterfaceCount() const
	{
		return callMethod<jint>(
			"getInterfaceCount",
			"()I"
		);
	}
	jint UsbConfiguration::getMaxPower() const
	{
		return callMethod<jint>(
			"getMaxPower",
			"()I"
		);
	}
	JString UsbConfiguration::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jboolean UsbConfiguration::isRemoteWakeup() const
	{
		return callMethod<jboolean>(
			"isRemoteWakeup",
			"()Z"
		);
	}
	jboolean UsbConfiguration::isSelfPowered() const
	{
		return callMethod<jboolean>(
			"isSelfPowered",
			"()Z"
		);
	}
	JString UsbConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UsbConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

