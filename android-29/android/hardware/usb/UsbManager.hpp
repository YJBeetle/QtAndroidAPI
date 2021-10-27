#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::hardware::usb
{
	class UsbAccessory;
}
namespace android::hardware::usb
{
	class UsbDevice;
}
namespace android::hardware::usb
{
	class UsbDeviceConnection;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::util
{
	class HashMap;
}

namespace android::hardware::usb
{
	class UsbManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_USB_ACCESSORY_ATTACHED();
		static jstring ACTION_USB_ACCESSORY_DETACHED();
		static jstring ACTION_USB_DEVICE_ATTACHED();
		static jstring ACTION_USB_DEVICE_DETACHED();
		static jstring EXTRA_ACCESSORY();
		static jstring EXTRA_DEVICE();
		static jstring EXTRA_PERMISSION_GRANTED();
		
		UsbManager(QAndroidJniObject obj);
		// Constructors
		UsbManager() = default;
		
		// Methods
		jarray getAccessoryList();
		QAndroidJniObject getDeviceList();
		jboolean hasPermission(android::hardware::usb::UsbAccessory arg0);
		jboolean hasPermission(android::hardware::usb::UsbDevice arg0);
		QAndroidJniObject openAccessory(android::hardware::usb::UsbAccessory arg0);
		QAndroidJniObject openDevice(android::hardware::usb::UsbDevice arg0);
		void requestPermission(android::hardware::usb::UsbAccessory arg0, android::app::PendingIntent arg1);
		void requestPermission(android::hardware::usb::UsbDevice arg0, android::app::PendingIntent arg1);
	};
} // namespace android::hardware::usb

