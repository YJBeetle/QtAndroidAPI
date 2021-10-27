#pragma once

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
		jint describeContents();
		jint getId();
		QAndroidJniObject getInterface(jint arg0);
		jint getInterfaceCount();
		jint getMaxPower();
		jstring getName();
		jboolean isRemoteWakeup();
		jboolean isSelfPowered();
		jstring toString();
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void UsbConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbConfiguration",
			"(V)V");
	}
	
	// Methods
	jint UsbConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbConfiguration::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	QAndroidJniObject UsbConfiguration::getInterface(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"(I)Landroid/hardware/usb/UsbInterface;",
			arg0
		);
	}
	jint UsbConfiguration::getInterfaceCount()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceCount",
			"()I"
		);
	}
	jint UsbConfiguration::getMaxPower()
	{
		return __thiz.callMethod<jint>(
			"getMaxPower",
			"()I"
		);
	}
	jstring UsbConfiguration::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean UsbConfiguration::isRemoteWakeup()
	{
		return __thiz.callMethod<jboolean>(
			"isRemoteWakeup",
			"()Z"
		);
	}
	jboolean UsbConfiguration::isSelfPowered()
	{
		return __thiz.callMethod<jboolean>(
			"isSelfPowered",
			"()Z"
		);
	}
	jstring UsbConfiguration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

