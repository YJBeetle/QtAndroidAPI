#pragma once

#ifndef ANDROID_HARDWARE_USB_USBACCESSORY
#define ANDROID_HARDWARE_USB_USBACCESSORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::hardware::usb
{
	class UsbAccessory : public __JniBaseClass
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
		QAndroidJniObject getManufacturer();
		QAndroidJniObject getDescription();
		QAndroidJniObject getUri();
		QAndroidJniObject getModel();
		QAndroidJniObject getSerial();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::hardware::usb

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbAccessory::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbAccessory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void UsbAccessory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbAccessory",
			"(V)V");
	}
	
	// Methods
	jboolean UsbAccessory::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject UsbAccessory::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint UsbAccessory::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject UsbAccessory::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbAccessory::getManufacturer()
	{
		return __thiz.callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbAccessory::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbAccessory::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbAccessory::getModel()
	{
		return __thiz.callObjectMethod(
			"getModel",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbAccessory::getSerial()
	{
		return __thiz.callObjectMethod(
			"getSerial",
			"()Ljava/lang/String;");
	}
	jint UsbAccessory::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void UsbAccessory::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::hardware::usb

namespace android::hardware::usb
{
	class UsbAccessory : public __jni_impl::android::hardware::usb::UsbAccessory
	{
	public:
		UsbAccessory(QAndroidJniObject obj) { __thiz = obj; }
		UsbAccessory()
		{
			__constructor();
		}
	};
} // namespace android::hardware::usb

#endif // ANDROID_HARDWARE_USB_USBACCESSORY

