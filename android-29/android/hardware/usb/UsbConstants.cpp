#include "./UsbConstants.hpp"

namespace android::hardware::usb
{
	// Fields
	jint UsbConstants::USB_CLASS_APP_SPEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_APP_SPEC"
		);
	}
	jint UsbConstants::USB_CLASS_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_AUDIO"
		);
	}
	jint UsbConstants::USB_CLASS_CDC_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_CDC_DATA"
		);
	}
	jint UsbConstants::USB_CLASS_COMM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_COMM"
		);
	}
	jint UsbConstants::USB_CLASS_CONTENT_SEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_CONTENT_SEC"
		);
	}
	jint UsbConstants::USB_CLASS_CSCID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_CSCID"
		);
	}
	jint UsbConstants::USB_CLASS_HID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_HID"
		);
	}
	jint UsbConstants::USB_CLASS_HUB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_HUB"
		);
	}
	jint UsbConstants::USB_CLASS_MASS_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_MASS_STORAGE"
		);
	}
	jint UsbConstants::USB_CLASS_MISC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_MISC"
		);
	}
	jint UsbConstants::USB_CLASS_PER_INTERFACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_PER_INTERFACE"
		);
	}
	jint UsbConstants::USB_CLASS_PHYSICA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_PHYSICA"
		);
	}
	jint UsbConstants::USB_CLASS_PRINTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_PRINTER"
		);
	}
	jint UsbConstants::USB_CLASS_STILL_IMAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_STILL_IMAGE"
		);
	}
	jint UsbConstants::USB_CLASS_VENDOR_SPEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_VENDOR_SPEC"
		);
	}
	jint UsbConstants::USB_CLASS_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_VIDEO"
		);
	}
	jint UsbConstants::USB_CLASS_WIRELESS_CONTROLLER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_CLASS_WIRELESS_CONTROLLER"
		);
	}
	jint UsbConstants::USB_DIR_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_DIR_IN"
		);
	}
	jint UsbConstants::USB_DIR_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_DIR_OUT"
		);
	}
	jint UsbConstants::USB_ENDPOINT_DIR_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_DIR_MASK"
		);
	}
	jint UsbConstants::USB_ENDPOINT_NUMBER_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_NUMBER_MASK"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFERTYPE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFERTYPE_MASK"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFER_BULK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_BULK"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFER_CONTROL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_CONTROL"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFER_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_INT"
		);
	}
	jint UsbConstants::USB_ENDPOINT_XFER_ISOC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_ENDPOINT_XFER_ISOC"
		);
	}
	jint UsbConstants::USB_INTERFACE_SUBCLASS_BOOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_INTERFACE_SUBCLASS_BOOT"
		);
	}
	jint UsbConstants::USB_SUBCLASS_VENDOR_SPEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_SUBCLASS_VENDOR_SPEC"
		);
	}
	jint UsbConstants::USB_TYPE_CLASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_CLASS"
		);
	}
	jint UsbConstants::USB_TYPE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_MASK"
		);
	}
	jint UsbConstants::USB_TYPE_RESERVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_RESERVED"
		);
	}
	jint UsbConstants::USB_TYPE_STANDARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_STANDARD"
		);
	}
	jint UsbConstants::USB_TYPE_VENDOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.usb.UsbConstants",
			"USB_TYPE_VENDOR"
		);
	}
	
	// QAndroidJniObject forward
	UsbConstants::UsbConstants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	UsbConstants::UsbConstants()
		: __JniBaseClass(
			"android.hardware.usb.UsbConstants",
			"()V"
		) {}
	
	// Methods
} // namespace android::hardware::usb

