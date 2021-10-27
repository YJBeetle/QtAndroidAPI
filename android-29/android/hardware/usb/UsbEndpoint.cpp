#include "../../os/Parcel.hpp"
#include "./UsbEndpoint.hpp"

namespace android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbEndpoint::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbEndpoint",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	UsbEndpoint::UsbEndpoint(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint UsbEndpoint::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbEndpoint::getAddress()
	{
		return __thiz.callMethod<jint>(
			"getAddress",
			"()I"
		);
	}
	jint UsbEndpoint::getAttributes()
	{
		return __thiz.callMethod<jint>(
			"getAttributes",
			"()I"
		);
	}
	jint UsbEndpoint::getDirection()
	{
		return __thiz.callMethod<jint>(
			"getDirection",
			"()I"
		);
	}
	jint UsbEndpoint::getEndpointNumber()
	{
		return __thiz.callMethod<jint>(
			"getEndpointNumber",
			"()I"
		);
	}
	jint UsbEndpoint::getInterval()
	{
		return __thiz.callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	jint UsbEndpoint::getMaxPacketSize()
	{
		return __thiz.callMethod<jint>(
			"getMaxPacketSize",
			"()I"
		);
	}
	jint UsbEndpoint::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring UsbEndpoint::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbEndpoint::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::hardware::usb

