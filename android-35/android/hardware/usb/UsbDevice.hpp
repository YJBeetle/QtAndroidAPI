#pragma once

#include "./UsbConfiguration.def.hpp"
#include "./UsbInterface.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UsbDevice.def.hpp"

namespace android::hardware::usb
{
	// Fields
	inline JObject UsbDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UsbDevice::getDeviceId(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.hardware.usb.UsbDevice",
			"getDeviceId",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString UsbDevice::getDeviceName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.hardware.usb.UsbDevice",
			"getDeviceName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint UsbDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UsbDevice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::hardware::usb::UsbConfiguration UsbDevice::getConfiguration(jint arg0) const
	{
		return callObjectMethod(
			"getConfiguration",
			"(I)Landroid/hardware/usb/UsbConfiguration;",
			arg0
		);
	}
	inline jint UsbDevice::getConfigurationCount() const
	{
		return callMethod<jint>(
			"getConfigurationCount",
			"()I"
		);
	}
	inline jint UsbDevice::getDeviceClass() const
	{
		return callMethod<jint>(
			"getDeviceClass",
			"()I"
		);
	}
	inline jint UsbDevice::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	inline JString UsbDevice::getDeviceName() const
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	inline jint UsbDevice::getDeviceProtocol() const
	{
		return callMethod<jint>(
			"getDeviceProtocol",
			"()I"
		);
	}
	inline jint UsbDevice::getDeviceSubclass() const
	{
		return callMethod<jint>(
			"getDeviceSubclass",
			"()I"
		);
	}
	inline android::hardware::usb::UsbInterface UsbDevice::getInterface(jint arg0) const
	{
		return callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0
		);
	}
	inline jint UsbDevice::getInterfaceCount() const
	{
		return callMethod<jint>(
			"getInterfaceCount",
			"()I"
		);
	}
	inline JString UsbDevice::getManufacturerName() const
	{
		return callObjectMethod(
			"getManufacturerName",
			"()Ljava/lang/String;"
		);
	}
	inline jint UsbDevice::getProductId() const
	{
		return callMethod<jint>(
			"getProductId",
			"()I"
		);
	}
	inline JString UsbDevice::getProductName() const
	{
		return callObjectMethod(
			"getProductName",
			"()Ljava/lang/String;"
		);
	}
	inline JString UsbDevice::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		);
	}
	inline jint UsbDevice::getVendorId() const
	{
		return callMethod<jint>(
			"getVendorId",
			"()I"
		);
	}
	inline JString UsbDevice::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		);
	}
	inline jint UsbDevice::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UsbDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UsbDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::usb;
#endif
