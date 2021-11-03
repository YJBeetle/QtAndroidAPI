#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::usb
{
	class UsbConstants : public JObject
	{
	public:
		// Fields
		static jint USB_CLASS_APP_SPEC();
		static jint USB_CLASS_AUDIO();
		static jint USB_CLASS_CDC_DATA();
		static jint USB_CLASS_COMM();
		static jint USB_CLASS_CONTENT_SEC();
		static jint USB_CLASS_CSCID();
		static jint USB_CLASS_HID();
		static jint USB_CLASS_HUB();
		static jint USB_CLASS_MASS_STORAGE();
		static jint USB_CLASS_MISC();
		static jint USB_CLASS_PER_INTERFACE();
		static jint USB_CLASS_PHYSICA();
		static jint USB_CLASS_PRINTER();
		static jint USB_CLASS_STILL_IMAGE();
		static jint USB_CLASS_VENDOR_SPEC();
		static jint USB_CLASS_VIDEO();
		static jint USB_CLASS_WIRELESS_CONTROLLER();
		static jint USB_DIR_IN();
		static jint USB_DIR_OUT();
		static jint USB_ENDPOINT_DIR_MASK();
		static jint USB_ENDPOINT_NUMBER_MASK();
		static jint USB_ENDPOINT_XFERTYPE_MASK();
		static jint USB_ENDPOINT_XFER_BULK();
		static jint USB_ENDPOINT_XFER_CONTROL();
		static jint USB_ENDPOINT_XFER_INT();
		static jint USB_ENDPOINT_XFER_ISOC();
		static jint USB_INTERFACE_SUBCLASS_BOOT();
		static jint USB_SUBCLASS_VENDOR_SPEC();
		static jint USB_TYPE_CLASS();
		static jint USB_TYPE_MASK();
		static jint USB_TYPE_RESERVED();
		static jint USB_TYPE_STANDARD();
		static jint USB_TYPE_VENDOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsbConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbConstants(QAndroidJniObject obj);
		
		// Constructors
		UsbConstants();
		
		// Methods
	};
} // namespace android::hardware::usb

