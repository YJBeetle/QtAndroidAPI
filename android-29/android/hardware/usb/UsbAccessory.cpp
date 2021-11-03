#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UsbAccessory.hpp"

namespace android::hardware::usb
{
	// Fields
	JObject UsbAccessory::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbAccessory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UsbAccessory::UsbAccessory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbAccessory::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UsbAccessory::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString UsbAccessory::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	JString UsbAccessory::getManufacturer()
	{
		return callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		);
	}
	JString UsbAccessory::getModel()
	{
		return callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		);
	}
	JString UsbAccessory::getSerial()
	{
		return callObjectMethod(
			"getSerial",
			"()Ljava/lang/String;"
		);
	}
	JString UsbAccessory::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Ljava/lang/String;"
		);
	}
	JString UsbAccessory::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		);
	}
	jint UsbAccessory::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString UsbAccessory::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

