#pragma once

#ifndef ANDROID_HARDWARE_USB_USBENDPOINT
#define ANDROID_HARDWARE_USB_USBENDPOINT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::hardware::usb
{
	class UsbEndpoint : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint getType();
		jint getAddress();
		jint getAttributes();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getEndpointNumber();
		jint getDirection();
		jint getMaxPacketSize();
		jint getInterval();
	};
} // namespace __jni_impl::android::hardware::usb

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbEndpoint::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbEndpoint",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void UsbEndpoint::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbEndpoint",
			"(V)V");
	}
	
	// Methods
	jstring UsbEndpoint::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UsbEndpoint::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint UsbEndpoint::getAddress()
	{
		return __thiz.callMethod<jint>(
			"getAddress",
			"()I"
		);
	}
	jint UsbEndpoint::getAttributes()
	{
		return __thiz.callMethod<jint>(
			"getAttributes",
			"()I"
		);
	}
	jint UsbEndpoint::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void UsbEndpoint::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint UsbEndpoint::getEndpointNumber()
	{
		return __thiz.callMethod<jint>(
			"getEndpointNumber",
			"()I"
		);
	}
	jint UsbEndpoint::getDirection()
	{
		return __thiz.callMethod<jint>(
			"getDirection",
			"()I"
		);
	}
	jint UsbEndpoint::getMaxPacketSize()
	{
		return __thiz.callMethod<jint>(
			"getMaxPacketSize",
			"()I"
		);
	}
	jint UsbEndpoint::getInterval()
	{
		return __thiz.callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
} // namespace __jni_impl::android::hardware::usb

namespace android::hardware::usb
{
	class UsbEndpoint : public __jni_impl::android::hardware::usb::UsbEndpoint
	{
	public:
		UsbEndpoint(QAndroidJniObject obj) { __thiz = obj; }
		UsbEndpoint()
		{
			__constructor();
		}
	};
} // namespace android::hardware::usb

#endif // ANDROID_HARDWARE_USB_USBENDPOINT

