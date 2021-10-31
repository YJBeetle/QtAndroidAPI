#include "../../os/Parcel.hpp"
#include "./UsbAccessory.hpp"

namespace android::hardware::usb
{
	// Fields
	__JniBaseClass UsbAccessory::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbAccessory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UsbAccessory::UsbAccessory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbAccessory::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UsbAccessory::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring UsbAccessory::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getManufacturer()
	{
		return callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getModel()
	{
		return callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getSerial()
	{
		return callObjectMethod(
			"getSerial",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbAccessory::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbAccessory::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UsbAccessory::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbAccessory::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

