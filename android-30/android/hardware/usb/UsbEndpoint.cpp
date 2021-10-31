#include "../../os/Parcel.hpp"
#include "./UsbEndpoint.hpp"

namespace android::hardware::usb
{
	// Fields
	__JniBaseClass UsbEndpoint::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbEndpoint",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UsbEndpoint::UsbEndpoint(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbEndpoint::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbEndpoint::getAddress()
	{
		return callMethod<jint>(
			"getAddress",
			"()I"
		);
	}
	jint UsbEndpoint::getAttributes()
	{
		return callMethod<jint>(
			"getAttributes",
			"()I"
		);
	}
	jint UsbEndpoint::getDirection()
	{
		return callMethod<jint>(
			"getDirection",
			"()I"
		);
	}
	jint UsbEndpoint::getEndpointNumber()
	{
		return callMethod<jint>(
			"getEndpointNumber",
			"()I"
		);
	}
	jint UsbEndpoint::getInterval()
	{
		return callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	jint UsbEndpoint::getMaxPacketSize()
	{
		return callMethod<jint>(
			"getMaxPacketSize",
			"()I"
		);
	}
	jint UsbEndpoint::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring UsbEndpoint::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbEndpoint::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

