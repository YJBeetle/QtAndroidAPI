#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./UsbEndpoint.hpp"

namespace android::hardware::usb
{
	// Fields
	JObject UsbEndpoint::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbEndpoint",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	UsbEndpoint::UsbEndpoint(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbEndpoint::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbEndpoint::getAddress() const
	{
		return callMethod<jint>(
			"getAddress",
			"()I"
		);
	}
	jint UsbEndpoint::getAttributes() const
	{
		return callMethod<jint>(
			"getAttributes",
			"()I"
		);
	}
	jint UsbEndpoint::getDirection() const
	{
		return callMethod<jint>(
			"getDirection",
			"()I"
		);
	}
	jint UsbEndpoint::getEndpointNumber() const
	{
		return callMethod<jint>(
			"getEndpointNumber",
			"()I"
		);
	}
	jint UsbEndpoint::getInterval() const
	{
		return callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	jint UsbEndpoint::getMaxPacketSize() const
	{
		return callMethod<jint>(
			"getMaxPacketSize",
			"()I"
		);
	}
	jint UsbEndpoint::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	JString UsbEndpoint::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UsbEndpoint::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

