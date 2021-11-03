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
	
	// QJniObject forward
	UsbInterface::UsbInterface(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbInterface::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbInterface::getAlternateSetting() const
	{
		return callMethod<jint>(
			"getAlternateSetting",
			"()I"
		);
	}
	android::hardware::usb::UsbEndpoint UsbInterface::getEndpoint(jint arg0) const
	{
		return callObjectMethod(
			"getEndpoint",
			"(I)Landroid/hardware/usb/UsbEndpoint;",
			arg0
		);
	}
	jint UsbInterface::getEndpointCount() const
	{
		return callMethod<jint>(
			"getEndpointCount",
			"()I"
		);
	}
	jint UsbInterface::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceClass() const
	{
		return callMethod<jint>(
			"getInterfaceClass",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceProtocol() const
	{
		return callMethod<jint>(
			"getInterfaceProtocol",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceSubclass() const
	{
		return callMethod<jint>(
			"getInterfaceSubclass",
			"()I"
		);
	}
	JString UsbInterface::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString UsbInterface::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UsbInterface::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

