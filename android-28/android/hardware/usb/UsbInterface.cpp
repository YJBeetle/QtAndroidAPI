#include "./UsbEndpoint.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./UsbInterface.hpp"

namespace android::hardware::usb
{
	// Fields
	JObject UsbInterface::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbInterface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UsbInterface::UsbInterface(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbInterface::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbInterface::getAlternateSetting()
	{
		return callMethod<jint>(
			"getAlternateSetting",
			"()I"
		);
	}
	android::hardware::usb::UsbEndpoint UsbInterface::getEndpoint(jint arg0)
	{
		return callObjectMethod(
			"getEndpoint",
			"(I)Landroid/hardware/usb/UsbEndpoint;",
			arg0
		);
	}
	jint UsbInterface::getEndpointCount()
	{
		return callMethod<jint>(
			"getEndpointCount",
			"()I"
		);
	}
	jint UsbInterface::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceClass()
	{
		return callMethod<jint>(
			"getInterfaceClass",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceProtocol()
	{
		return callMethod<jint>(
			"getInterfaceProtocol",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceSubclass()
	{
		return callMethod<jint>(
			"getInterfaceSubclass",
			"()I"
		);
	}
	JString UsbInterface::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString UsbInterface::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UsbInterface::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

