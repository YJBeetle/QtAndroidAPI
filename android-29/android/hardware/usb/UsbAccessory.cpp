#include "../../os/Parcel.hpp"
#include "./UsbAccessory.hpp"

namespace android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbAccessory::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbAccessory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	UsbAccessory::UsbAccessory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint UsbAccessory::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UsbAccessory::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring UsbAccessory::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getManufacturer()
	{
		return __thiz.callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getModel()
	{
		return __thiz.callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getSerial()
	{
		return __thiz.callObjectMethod(
			"getSerial",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbAccessory::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UsbAccessory::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbAccessory::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::hardware::usb

