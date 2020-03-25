#pragma once

#ifndef ANDROID_HARDWARE_USB_USBDEVICE
#define ANDROID_HARDWARE_USB_USBDEVICE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::usb
{
	class UsbConfiguration;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbInterface;
}

namespace __jni_impl::android::hardware::usb
{
	class UsbDevice : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getVersion();
		jint getDeviceId();
		static jint getDeviceId(jstring arg0);
		QAndroidJniObject getConfiguration(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getDeviceName();
		static QAndroidJniObject getDeviceName(jint arg0);
		jint getDeviceClass();
		QAndroidJniObject getManufacturerName();
		QAndroidJniObject getProductName();
		QAndroidJniObject getSerialNumber();
		jint getVendorId();
		jint getProductId();
		jint getDeviceSubclass();
		jint getDeviceProtocol();
		jint getConfigurationCount();
		jint getInterfaceCount();
		QAndroidJniObject getInterface(jint arg0);
	};
} // namespace __jni_impl::android::hardware::usb

#include "UsbConfiguration.hpp"
#include "../../os/Parcel.hpp"
#include "UsbInterface.hpp"

namespace __jni_impl::android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbDevice::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void UsbDevice::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbDevice",
			"(V)V");
	}
	
	// Methods
	jboolean UsbDevice::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject UsbDevice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint UsbDevice::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject UsbDevice::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;");
	}
	jint UsbDevice::getDeviceId()
	{
		return __thiz.callMethod<jint>(
			"getDeviceId",
			"()I");
	}
	jint UsbDevice::getDeviceId(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.hardware.usb.UsbDevice",
			"getDeviceId",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject UsbDevice::getConfiguration(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"(I)Landroid/hardware/usb/UsbConfiguration;",
			arg0);
	}
	jint UsbDevice::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void UsbDevice::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject UsbDevice::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbDevice::getDeviceName(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.hardware.usb.UsbDevice",
			"getDeviceName",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint UsbDevice::getDeviceClass()
	{
		return __thiz.callMethod<jint>(
			"getDeviceClass",
			"()I");
	}
	QAndroidJniObject UsbDevice::getManufacturerName()
	{
		return __thiz.callObjectMethod(
			"getManufacturerName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbDevice::getProductName()
	{
		return __thiz.callObjectMethod(
			"getProductName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbDevice::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;");
	}
	jint UsbDevice::getVendorId()
	{
		return __thiz.callMethod<jint>(
			"getVendorId",
			"()I");
	}
	jint UsbDevice::getProductId()
	{
		return __thiz.callMethod<jint>(
			"getProductId",
			"()I");
	}
	jint UsbDevice::getDeviceSubclass()
	{
		return __thiz.callMethod<jint>(
			"getDeviceSubclass",
			"()I");
	}
	jint UsbDevice::getDeviceProtocol()
	{
		return __thiz.callMethod<jint>(
			"getDeviceProtocol",
			"()I");
	}
	jint UsbDevice::getConfigurationCount()
	{
		return __thiz.callMethod<jint>(
			"getConfigurationCount",
			"()I");
	}
	jint UsbDevice::getInterfaceCount()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceCount",
			"()I");
	}
	QAndroidJniObject UsbDevice::getInterface(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0);
	}
} // namespace __jni_impl::android::hardware::usb

namespace android::hardware::usb
{
	class UsbDevice : public __jni_impl::android::hardware::usb::UsbDevice
	{
	public:
		UsbDevice(QAndroidJniObject obj) { __thiz = obj; }
		UsbDevice()
		{
			__constructor();
		}
	};
} // namespace android::hardware::usb

#endif // ANDROID_HARDWARE_USB_USBDEVICE

