#include "./UsbInterface.hpp"
#include "../../os/Parcel.hpp"
#include "./UsbConfiguration.hpp"

namespace android::hardware::usb
{
	// Fields
	__JniBaseClass UsbConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UsbConfiguration::UsbConfiguration(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbConfiguration::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	android::hardware::usb::UsbInterface UsbConfiguration::getInterface(jint arg0)
	{
		return callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0
		);
	}
	jint UsbConfiguration::getInterfaceCount()
	{
		return callMethod<jint>(
			"getInterfaceCount",
			"()I"
		);
	}
	jint UsbConfiguration::getMaxPower()
	{
		return callMethod<jint>(
			"getMaxPower",
			"()I"
		);
	}
	jstring UsbConfiguration::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean UsbConfiguration::isRemoteWakeup()
	{
		return callMethod<jboolean>(
			"isRemoteWakeup",
			"()Z"
		);
	}
	jboolean UsbConfiguration::isSelfPowered()
	{
		return callMethod<jboolean>(
			"isSelfPowered",
			"()Z"
		);
	}
	jstring UsbConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

