#include "./UsbEndpoint.hpp"
#include "../../os/Parcel.hpp"
#include "./UsbInterface.hpp"

namespace android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbInterface::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbInterface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	UsbInterface::UsbInterface(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint UsbInterface::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbInterface::getAlternateSetting()
	{
		return __thiz.callMethod<jint>(
			"getAlternateSetting",
			"()I"
		);
	}
	QAndroidJniObject UsbInterface::getEndpoint(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getEndpoint",
			"(I)Landroid/hardware/usb/UsbEndpoint;",
			arg0
		);
	}
	jint UsbInterface::getEndpointCount()
	{
		return __thiz.callMethod<jint>(
			"getEndpointCount",
			"()I"
		);
	}
	jint UsbInterface::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceClass()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceClass",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceProtocol()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceProtocol",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceSubclass()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceSubclass",
			"()I"
		);
	}
	jstring UsbInterface::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbInterface::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbInterface::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::hardware::usb

