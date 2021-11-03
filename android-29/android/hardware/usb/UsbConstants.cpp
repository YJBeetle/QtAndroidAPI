#include "./UsbConstants.hpp"

namespace android::hardware::usb
{
	// Fields
	jint UsbConstants::USB_CLASS_APP_SPEC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_APP_SPEC"
		);
	}
	jint UsbConstants::USB_CLASS_AUDIO()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_AUDIO"
		);
	}
	jint UsbConstants::USB_CLASS_CDC_DATA()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_CDC_DATA"
		);
	}
	jint UsbConstants::USB_CLASS_COMM()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_COMM"
		);
	}
	jint UsbConstants::USB_CLASS_CONTENT_SEC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_CONTENT_SEC"
		);
	}
	jint UsbConstants::USB_CLASS_CSCID()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_CSCID"
		);
	}
	jint UsbConstants::USB_CLASS_HID()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_HID"
		);
	}
	jint UsbConstants::USB_CLASS_HUB()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_HUB"
		);
	}
	jint UsbConstants::USB_CLASS_MASS_STORAGE()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_MASS_STORAGE"
		);
	}
	jint UsbConstants::USB_CLASS_MISC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_MISC"
		);
	}
	jint UsbConstants::USB_CLASS_PER_INTERFACE()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_PER_INTERFACE"
		);
	}
	jint UsbConstants::USB_CLASS_PHYSICA()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_PHYSICA"
		);
	}
	jint UsbConstants::USB_CLASS_PRINTER()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_PRINTER"
		);
	}
	jint UsbConstants::USB_CLASS_STILL_IMAGE()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_STILL_IMAGE"
		);
	}
	jint UsbConstants::USB_CLASS_VENDOR_SPEC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_VENDOR_SPEC"
		);
	}
	jint UsbConstants::USB_CLASS_VIDEO()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_VIDEO"
		);
	}
	jint UsbConstants::USB_CLASS_WIRELESS_CONTROLLER()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_WIRELESS_CONTROLLER"
		);
	}
	jint UsbConstants::USB_DIR_IN()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_DIR_IN"
		);
	}
	jint UsbConstants::USB_DIR_OUT()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_DIR_OUT"
		);
	}
	jint UsbConstants::USB_ENDPOINT_DIR_MASK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_DIR_MASK"
		);
	}
	jint UsbConstants::USB_ENDPOINT_NUMBER_MASK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_NUMBER_MASK"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFERTYPE_MASK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFERTYPE_MASK"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFER_BULK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_BULK"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFER_CONTROL()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_CONTROL"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFER_INT()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_INT"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFER_ISOC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_ISOC"
		);
	}
	jint UsbConstants::USB_INTERFACE_SUBCLASS_BOOT()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_INTERFACE_SUBCLASS_BOOT"
		);
	}
	jint UsbConstants::USB_SUBCLASS_VENDOR_SPEC()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_SUBCLASS_VENDOR_SPEC"
		);
	}
	jint UsbConstants::USB_TYPE_CLASS()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_CLASS"
		);
	}
	jint UsbConstants::USB_TYPE_MASK()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_MASK"
		);
	}
	jint UsbConstants::USB_TYPE_RESERVED()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_RESERVED"
		);
	}
	jint UsbConstants::USB_TYPE_STANDARD()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_STANDARD"
		);
	}
	jint UsbConstants::USB_TYPE_VENDOR()
	{
		return getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_VENDOR"
		);
	}
	
	// QJniObject forward
	UsbConstants::UsbConstants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	UsbConstants::UsbConstants()
		: JObject(
			"android.hardware.usb.UsbConstants",
			"()V"
		) {}
	
	// Methods
} // namespace android::hardware::usb

