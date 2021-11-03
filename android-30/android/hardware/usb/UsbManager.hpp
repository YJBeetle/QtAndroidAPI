#pragma once

#include "../../../JObject.hpp"

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
	class UsbManager : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit UsbManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getAccessoryList();
		java::util::HashMap getDeviceList();
		jboolean hasPermission(android::hardware::usb::UsbAccessory arg0);
		jboolean hasPermission(android::hardware::usb::UsbDevice arg0);
		android::os::ParcelFileDescriptor openAccessory(android::hardware::usb::UsbAccessory arg0);
		android::hardware::usb::UsbDeviceConnection openDevice(android::hardware::usb::UsbDevice arg0);
		void requestPermission(android::hardware::usb::UsbAccessory arg0, android::app::PendingIntent arg1);
		void requestPermission(android::hardware::usb::UsbDevice arg0, android::app::PendingIntent arg1);
	};
} // namespace android::hardware::usb

