#pragma once

#include "./UsbConstants.def.hpp"

namespace android::hardware::usb
{
	// Fields
	inline jint UsbConstants::USB_CLASS_APP_SPEC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_APP_SPEC"
		);
	}
	inline jint UsbConstants::USB_CLASS_AUDIO()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_AUDIO"
		);
	}
	inline jint UsbConstants::USB_CLASS_CDC_DATA()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_CDC_DATA"
		);
	}
	inline jint UsbConstants::USB_CLASS_COMM()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_COMM"
		);
	}
	inline jint UsbConstants::USB_CLASS_CONTENT_SEC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_CONTENT_SEC"
		);
	}
	inline jint UsbConstants::USB_CLASS_CSCID()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_CSCID"
		);
	}
	inline jint UsbConstants::USB_CLASS_HID()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_HID"
		);
	}
	inline jint UsbConstants::USB_CLASS_HUB()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_HUB"
		);
	}
	inline jint UsbConstants::USB_CLASS_MASS_STORAGE()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_MASS_STORAGE"
		);
	}
	inline jint UsbConstants::USB_CLASS_MISC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_MISC"
		);
	}
	inline jint UsbConstants::USB_CLASS_PER_INTERFACE()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_PER_INTERFACE"
		);
	}
	inline jint UsbConstants::USB_CLASS_PHYSICA()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_PHYSICA"
		);
	}
	inline jint UsbConstants::USB_CLASS_PRINTER()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_PRINTER"
		);
	}
	inline jint UsbConstants::USB_CLASS_STILL_IMAGE()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_STILL_IMAGE"
		);
	}
	inline jint UsbConstants::USB_CLASS_VENDOR_SPEC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_VENDOR_SPEC"
		);
	}
	inline jint UsbConstants::USB_CLASS_VIDEO()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_VIDEO"
		);
	}
	inline jint UsbConstants::USB_CLASS_WIRELESS_CONTROLLER()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_WIRELESS_CONTROLLER"
		);
	}
	inline jint UsbConstants::USB_DIR_IN()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_DIR_IN"
		);
	}
	inline jint UsbConstants::USB_DIR_OUT()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_DIR_OUT"
		);
	}
	inline jint UsbConstants::USB_ENDPOINT_DIR_MASK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_DIR_MASK"
		);
	}
	inline jint UsbConstants::USB_ENDPOINT_NUMBER_MASK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_NUMBER_MASK"
		);
	}
	inline jint UsbConstants::USB_ENDPOINT_XFERTYPE_MASK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFERTYPE_MASK"
		);
	}
	inline jint UsbConstants::USB_ENDPOINT_XFER_BULK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_BULK"
		);
	}
	inline jint UsbConstants::USB_ENDPOINT_XFER_CONTROL()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_CONTROL"
		);
	}
	inline jint UsbConstants::USB_ENDPOINT_XFER_INT()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_INT"
		);
	}
	inline jint UsbConstants::USB_ENDPOINT_XFER_ISOC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_ISOC"
		);
	}
	inline jint UsbConstants::USB_INTERFACE_SUBCLASS_BOOT()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_INTERFACE_SUBCLASS_BOOT"
		);
	}
	inline jint UsbConstants::USB_SUBCLASS_VENDOR_SPEC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_SUBCLASS_VENDOR_SPEC"
		);
	}
	inline jint UsbConstants::USB_TYPE_CLASS()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_CLASS"
		);
	}
	inline jint UsbConstants::USB_TYPE_MASK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_MASK"
		);
	}
	inline jint UsbConstants::USB_TYPE_RESERVED()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_RESERVED"
		);
	}
	inline jint UsbConstants::USB_TYPE_STANDARD()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_STANDARD"
		);
	}
	inline jint UsbConstants::USB_TYPE_VENDOR()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_VENDOR"
		);
	}
	
	// Constructors
	inline UsbConstants::UsbConstants()
		: JObject(
			"android.hardware.usb.UsbConstants",
			"()V"
		) {}
	
	// Methods
} // namespace android::hardware::usb

// Base class headers

