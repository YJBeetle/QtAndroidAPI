#include "./UsbConfiguration.hpp"
#include "./UsbInterface.hpp"
#include "../../os/Parcel.hpp"
#include "./UsbDevice.hpp"

namespace android::hardware::usb
{
	// Fields
	__JniBaseClass UsbDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	UsbDevice::UsbDevice(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbDevice::getDeviceId(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.hardware.usb.UsbDevice",
			"getDeviceId",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring UsbDevice::getDeviceName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.hardware.usb.UsbDevice",
			"getDeviceName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint UsbDevice::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UsbDevice::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::hardware::usb::UsbConfiguration UsbDevice::getConfiguration(jint arg0)
	{
		return callObjectMethod(
			"getConfiguration",
			"(I)Landroid/hardware/usb/UsbConfiguration;",
			arg0
		);
	}
	jint UsbDevice::getConfigurationCount()
	{
		return callMethod<jint>(
			"getConfigurationCount",
			"()I"
		);
	}
	jint UsbDevice::getDeviceClass()
	{
		return callMethod<jint>(
			"getDeviceClass",
			"()I"
		);
	}
	jint UsbDevice::getDeviceId()
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	jstring UsbDevice::getDeviceName()
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbDevice::getDeviceProtocol()
	{
		return callMethod<jint>(
			"getDeviceProtocol",
			"()I"
		);
	}
	jint UsbDevice::getDeviceSubclass()
	{
		return callMethod<jint>(
			"getDeviceSubclass",
			"()I"
		);
	}
	android::hardware::usb::UsbInterface UsbDevice::getInterface(jint arg0)
	{
		return callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0
		);
	}
	jint UsbDevice::getInterfaceCount()
	{
		return callMethod<jint>(
			"getInterfaceCount",
			"()I"
		);
	}
	jstring UsbDevice::getManufacturerName()
	{
		return callObjectMethod(
			"getManufacturerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbDevice::getProductId()
	{
		return callMethod<jint>(
			"getProductId",
			"()I"
		);
	}
	jstring UsbDevice::getProductName()
	{
		return callObjectMethod(
			"getProductName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbDevice::getSerialNumber()
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbDevice::getVendorId()
	{
		return callMethod<jint>(
			"getVendorId",
			"()I"
		);
	}
	jstring UsbDevice::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbDevice::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UsbDevice::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbDevice::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

