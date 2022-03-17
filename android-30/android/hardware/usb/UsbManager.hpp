#pragma once

#include "../../../JArray.hpp"
#include "../../app/PendingIntent.def.hpp"
#include "./UsbAccessory.def.hpp"
#include "./UsbDevice.def.hpp"
#include "./UsbDeviceConnection.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/HashMap.def.hpp"
#include "./UsbManager.def.hpp"

namespace android::hardware::usb
{
	// Fields
	inline JString UsbManager::ACTION_USB_ACCESSORY_ATTACHED()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_ACCESSORY_ATTACHED",
			"Ljava/lang/String;"
		);
	}
	inline JString UsbManager::ACTION_USB_ACCESSORY_DETACHED()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_ACCESSORY_DETACHED",
			"Ljava/lang/String;"
		);
	}
	inline JString UsbManager::ACTION_USB_DEVICE_ATTACHED()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_DEVICE_ATTACHED",
			"Ljava/lang/String;"
		);
	}
	inline JString UsbManager::ACTION_USB_DEVICE_DETACHED()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_DEVICE_DETACHED",
			"Ljava/lang/String;"
		);
	}
	inline JString UsbManager::EXTRA_ACCESSORY()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"EXTRA_ACCESSORY",
			"Ljava/lang/String;"
		);
	}
	inline JString UsbManager::EXTRA_DEVICE()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString UsbManager::EXTRA_PERMISSION_GRANTED()
	{
		return getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"EXTRA_PERMISSION_GRANTED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray UsbManager::getAccessoryList() const
	{
		return callObjectMethod(
			"getAccessoryList",
			"()[Landroid/hardware/usb/UsbAccessory;"
		);
	}
	inline java::util::HashMap UsbManager::getDeviceList() const
	{
		return callObjectMethod(
			"getDeviceList",
			"()Ljava/util/HashMap;"
		);
	}
	inline jboolean UsbManager::hasPermission(android::hardware::usb::UsbAccessory arg0) const
	{
		return callMethod<jboolean>(
			"hasPermission",
			"(Landroid/hardware/usb/UsbAccessory;)Z",
			arg0.object()
		);
	}
	inline jboolean UsbManager::hasPermission(android::hardware::usb::UsbDevice arg0) const
	{
		return callMethod<jboolean>(
			"hasPermission",
			"(Landroid/hardware/usb/UsbDevice;)Z",
			arg0.object()
		);
	}
	inline android::os::ParcelFileDescriptor UsbManager::openAccessory(android::hardware::usb::UsbAccessory arg0) const
	{
		return callObjectMethod(
			"openAccessory",
			"(Landroid/hardware/usb/UsbAccessory;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	inline android::hardware::usb::UsbDeviceConnection UsbManager::openDevice(android::hardware::usb::UsbDevice arg0) const
	{
		return callObjectMethod(
			"openDevice",
			"(Landroid/hardware/usb/UsbDevice;)Landroid/hardware/usb/UsbDeviceConnection;",
			arg0.object()
		);
	}
	inline void UsbManager::requestPermission(android::hardware::usb::UsbAccessory arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"requestPermission",
			"(Landroid/hardware/usb/UsbAccessory;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void UsbManager::requestPermission(android::hardware::usb::UsbDevice arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"requestPermission",
			"(Landroid/hardware/usb/UsbDevice;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::hardware::usb

// Base class headers

