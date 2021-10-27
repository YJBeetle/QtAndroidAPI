#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::usb
{
	class UsbEndpoint;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		jint describeContents();
		jint getAlternateSetting();
		QAndroidJniObject getEndpoint(jint arg0);
		jint getEndpointCount();
		jint getId();
		jint getInterfaceClass();
		jint getInterfaceProtocol();
		jint getInterfaceSubclass();
		jstring getName();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::hardware::usb

#include "UsbEndpoint.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbInterface::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbInterface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void UsbInterface::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbInterface",
			"(V)V");
	}
	
	// Methods
	jint UsbInterface::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbInterface::getAlternateSetting()
	{
		return __thiz.callMethod<jint>(
			"getAlternateSetting",
			"()I"
		);
	}
	QAndroidJniObject UsbInterface::getEndpoint(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getEndpoint",
			"(I)Landroid/hardware/usb/UsbEndpoint;",
			arg0
		);
	}
	jint UsbInterface::getEndpointCount()
	{
		return __thiz.callMethod<jint>(
			"getEndpointCount",
			"()I"
		);
	}
	jint UsbInterface::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceClass()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceClass",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceProtocol()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceProtocol",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceSubclass()
	{
		return __thiz.callMethod<jint>(
			"getInterfaceSubclass",
			"()I"
		);
	}
	jstring UsbInterface::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbInterface::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbInterface::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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

