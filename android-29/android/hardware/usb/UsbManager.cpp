#include "../../app/PendingIntent.hpp"
#include "./UsbAccessory.hpp"
#include "./UsbDevice.hpp"
#include "./UsbDeviceConnection.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../java/util/HashMap.hpp"
#include "./UsbManager.hpp"

namespace android::hardware::usb
{
	// Fields
	jstring UsbManager::ACTION_USB_ACCESSORY_ATTACHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_ACCESSORY_ATTACHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::ACTION_USB_ACCESSORY_DETACHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_ACCESSORY_DETACHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::ACTION_USB_DEVICE_ATTACHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_DEVICE_ATTACHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::ACTION_USB_DEVICE_DETACHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_DEVICE_DETACHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::EXTRA_ACCESSORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"EXTRA_ACCESSORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::EXTRA_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::EXTRA_PERMISSION_GRANTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"EXTRA_PERMISSION_GRANTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	UsbManager::UsbManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray UsbManager::getAccessoryList()
	{
		return callObjectMethod(
			"getAccessoryList",
			"()[Landroid/hardware/usb/UsbAccessory;"
		).object<jarray>();
	}
	QAndroidJniObject UsbManager::getDeviceList()
	{
		return callObjectMethod(
			"getDeviceList",
			"()Ljava/util/HashMap;"
		);
	}
	jboolean UsbManager::hasPermission(android::hardware::usb::UsbAccessory arg0)
	{
		return callMethod<jboolean>(
			"hasPermission",
			"(Landroid/hardware/usb/UsbAccessory;)Z",
			arg0.object()
		);
	}
	jboolean UsbManager::hasPermission(android::hardware::usb::UsbDevice arg0)
	{
		return callMethod<jboolean>(
			"hasPermission",
			"(Landroid/hardware/usb/UsbDevice;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject UsbManager::openAccessory(android::hardware::usb::UsbAccessory arg0)
	{
		return callObjectMethod(
			"openAccessory",
			"(Landroid/hardware/usb/UsbAccessory;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	QAndroidJniObject UsbManager::openDevice(android::hardware::usb::UsbDevice arg0)
	{
		return callObjectMethod(
			"openDevice",
			"(Landroid/hardware/usb/UsbDevice;)Landroid/hardware/usb/UsbDeviceConnection;",
			arg0.object()
		);
	}
	void UsbManager::requestPermission(android::hardware::usb::UsbAccessory arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"requestPermission",
			"(Landroid/hardware/usb/UsbAccessory;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void UsbManager::requestPermission(android::hardware::usb::UsbDevice arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"requestPermission",
			"(Landroid/hardware/usb/UsbDevice;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::hardware::usb
