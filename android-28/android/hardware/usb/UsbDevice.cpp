#include "./UsbConfiguration.hpp"
#include "./UsbInterface.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UsbDevice.hpp"

namespace android::hardware::usb
{
	// Fields
	JObject UsbDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint UsbDevice::getDeviceId(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.hardware.usb.UsbDevice",
			"getDeviceId",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JString UsbDevice::getDeviceName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.hardware.usb.UsbDevice",
			"getDeviceName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint UsbDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UsbDevice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::hardware::usb::UsbConfiguration UsbDevice::getConfiguration(jint arg0) const
	{
		return callObjectMethod(
			"getConfiguration",
			"(I)Landroid/hardware/usb/UsbConfiguration;",
			arg0
		);
	}
	jint UsbDevice::getConfigurationCount() const
	{
		return callMethod<jint>(
			"getConfigurationCount",
			"()I"
		);
	}
	jint UsbDevice::getDeviceClass() const
	{
		return callMethod<jint>(
			"getDeviceClass",
			"()I"
		);
	}
	jint UsbDevice::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	JString UsbDevice::getDeviceName() const
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	jint UsbDevice::getDeviceProtocol() const
	{
		return callMethod<jint>(
			"getDeviceProtocol",
			"()I"
		);
	}
	jint UsbDevice::getDeviceSubclass() const
	{
		return callMethod<jint>(
			"getDeviceSubclass",
			"()I"
		);
	}
	android::hardware::usb::UsbInterface UsbDevice::getInterface(jint arg0) const
	{
		return callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0
		);
	}
	jint UsbDevice::getInterfaceCount() const
	{
		return callMethod<jint>(
			"getInterfaceCount",
			"()I"
		);
	}
	JString UsbDevice::getManufacturerName() const
	{
		return callObjectMethod(
			"getManufacturerName",
			"()Ljava/lang/String;"
		);
	}
	jint UsbDevice::getProductId() const
	{
		return callMethod<jint>(
			"getProductId",
			"()I"
		);
	}
	JString UsbDevice::getProductName() const
	{
		return callObjectMethod(
			"getProductName",
			"()Ljava/lang/String;"
		);
	}
	JString UsbDevice::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		);
	}
	jint UsbDevice::getVendorId() const
	{
		return callMethod<jint>(
			"getVendorId",
			"()I"
		);
	}
	JString UsbDevice::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		);
	}
	jint UsbDevice::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString UsbDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UsbDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

