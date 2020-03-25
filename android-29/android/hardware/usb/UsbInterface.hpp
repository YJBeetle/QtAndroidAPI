#pragma once

#ifndef ANDROID_HARDWARE_USB_USBINTERFACE
#define ANDROID_HARDWARE_USB_USBINTERFACE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbEndpoint;
}

namespace __jni_impl::android::hardware::usb
{
	class UsbInterface : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		QAndroidJniObject toString();
		jint getId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getAlternateSetting();
		jint getInterfaceClass();
		jint getInterfaceSubclass();
		jint getInterfaceProtocol();
		jint getEndpointCount();
		QAndroidJniObject getEndpoint(jint arg0);
	};
} // namespace __jni_impl::android::hardware::usb

#include "../../os/Parcel.hpp"
#include "UsbEndpoint.hpp"

namespace __jni_impl::android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbInterface::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbInterface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void UsbInterface::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbInterface",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UsbInterface::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbInterface::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint UsbInterface::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I");
	}
	jint UsbInterface::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void UsbInterface::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint UsbInterface::getAlternateSetting()
	{
		return __thiz.callMethod<jint>(
			"getAlternateSetting",
			"()I");
	}
	jint UsbInterface::getInterfaceClass()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceClass",
			"()I");
	}
	jint UsbInterface::getInterfaceSubclass()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceSubclass",
			"()I");
	}
	jint UsbInterface::getInterfaceProtocol()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceProtocol",
			"()I");
	}
	jint UsbInterface::getEndpointCount()
	{
		return __thiz.callMethod<jint>(
			"getEndpointCount",
			"()I");
	}
	QAndroidJniObject UsbInterface::getEndpoint(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getEndpoint",
			"(I)Landroid/hardware/usb/UsbEndpoint;",
			arg0);
	}
} // namespace __jni_impl::android::hardware::usb

namespace android::hardware::usb
{
	class UsbInterface : public __jni_impl::android::hardware::usb::UsbInterface
	{
	public:
		UsbInterface(QAndroidJniObject obj) { __thiz = obj; }
		UsbInterface()
		{
			__constructor();
		}
	};
} // namespace android::hardware::usb

#endif // ANDROID_HARDWARE_USB_USBINTERFACE

