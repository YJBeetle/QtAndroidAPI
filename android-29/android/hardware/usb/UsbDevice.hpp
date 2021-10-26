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
		jstring toString();
		jint hashCode();
		jstring getVersion();
		jint getDeviceId();
		static jint getDeviceId(jstring arg0);
		static jint getDeviceId(const QString &arg0);
		QAndroidJniObject getConfiguration(jint arg0);
		static jstring getDeviceName(jint arg0);
		jstring getDeviceName();
		jint getDeviceClass();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getManufacturerName();
		jstring getProductName();
		jstring getSerialNumber();
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
			"Landroid/os/Parcelable$Creator;"
		);
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
			arg0
		);
	}
	jstring UsbDevice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbDevice::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UsbDevice::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbDevice::getDeviceId()
	{
		return __thiz.callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	jint UsbDevice::getDeviceId(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.hardware.usb.UsbDevice",
			"getDeviceId",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint UsbDevice::getDeviceId(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.hardware.usb.UsbDevice",
			"getDeviceId",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject UsbDevice::getConfiguration(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"(I)Landroid/hardware/usb/UsbConfiguration;",
			arg0
		);
	}
	jstring UsbDevice::getDeviceName(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.hardware.usb.UsbDevice",
			"getDeviceName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UsbDevice::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbDevice::getDeviceClass()
	{
		return __thiz.callMethod<jint>(
			"getDeviceClass",
			"()I"
		);
	}
	jint UsbDevice::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void UsbDevice::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring UsbDevice::getManufacturerName()
	{
		return __thiz.callObjectMethod(
			"getManufacturerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbDevice::getProductName()
	{
		return __thiz.callObjectMethod(
			"getProductName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbDevice::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbDevice::getVendorId()
	{
		return __thiz.callMethod<jint>(
			"getVendorId",
			"()I"
		);
	}
	jint UsbDevice::getProductId()
	{
		return __thiz.callMethod<jint>(
			"getProductId",
			"()I"
		);
	}
	jint UsbDevice::getDeviceSubclass()
	{
		return __thiz.callMethod<jint>(
			"getDeviceSubclass",
			"()I"
		);
	}
	jint UsbDevice::getDeviceProtocol()
	{
		return __thiz.callMethod<jint>(
			"getDeviceProtocol",
			"()I"
		);
	}
	jint UsbDevice::getConfigurationCount()
	{
		return __thiz.callMethod<jint>(
			"getConfigurationCount",
			"()I"
		);
	}
	jint UsbDevice::getInterfaceCount()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceCount",
			"()I"
		);
	}
	QAndroidJniObject UsbDevice::getInterface(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0
		);
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

