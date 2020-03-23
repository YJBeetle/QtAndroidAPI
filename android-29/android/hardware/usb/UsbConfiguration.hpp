#pragma once

#ifndef ANDROID_HARDWARE_USB_USBCONFIGURATION
#define ANDROID_HARDWARE_USB_USBCONFIGURATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::usb
{
	class UsbInterface;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::hardware::usb
{
	class UsbConfiguration : public __JniBaseClass
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
		jint getInterfaceCount();
		QAndroidJniObject getInterface(jint arg0);
		jboolean isSelfPowered();
		jboolean isRemoteWakeup();
		jint getMaxPower();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::hardware::usb

#include "UsbInterface.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void UsbConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbConfiguration",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UsbConfiguration::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsbConfiguration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint UsbConfiguration::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I");
	}
	jint UsbConfiguration::getInterfaceCount()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceCount",
			"()I");
	}
	QAndroidJniObject UsbConfiguration::getInterface(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0);
	}
	jboolean UsbConfiguration::isSelfPowered()
	{
		return __thiz.callMethod<jboolean>(
			"isSelfPowered",
			"()Z");
	}
	jboolean UsbConfiguration::isRemoteWakeup()
	{
		return __thiz.callMethod<jboolean>(
			"isRemoteWakeup",
			"()Z");
	}
	jint UsbConfiguration::getMaxPower()
	{
		return __thiz.callMethod<jint>(
			"getMaxPower",
			"()I");
	}
	jint UsbConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void UsbConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class UsbConfiguration : public __jni_impl::android::hardware::usb::UsbConfiguration
	{
	public:
		UsbConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		UsbConfiguration()
		{
			__constructor();
		}
	};
} // namespace android::hardware::usb

#endif // ANDROID_HARDWARE_USB_USBCONFIGURATION

