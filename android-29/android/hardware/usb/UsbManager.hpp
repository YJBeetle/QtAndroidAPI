#pragma once

#ifndef ANDROID_HARDWARE_USB_USBMANAGER
#define ANDROID_HARDWARE_USB_USBMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class HashMap;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbDeviceConnection;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbDevice;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbAccessory;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}

namespace __jni_impl::android::hardware::usb
{
	class UsbManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_USB_ACCESSORY_ATTACHED();
		static jstring ACTION_USB_ACCESSORY_DETACHED();
		static jstring ACTION_USB_DEVICE_ATTACHED();
		static jstring ACTION_USB_DEVICE_DETACHED();
		static jstring EXTRA_ACCESSORY();
		static jstring EXTRA_DEVICE();
		static jstring EXTRA_PERMISSION_GRANTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getDeviceList();
		QAndroidJniObject openDevice(__jni_impl::android::hardware::usb::UsbDevice arg0);
		jarray getAccessoryList();
		QAndroidJniObject openAccessory(__jni_impl::android::hardware::usb::UsbAccessory arg0);
		jboolean hasPermission(__jni_impl::android::hardware::usb::UsbDevice arg0);
		jboolean hasPermission(__jni_impl::android::hardware::usb::UsbAccessory arg0);
		void requestPermission(__jni_impl::android::hardware::usb::UsbAccessory arg0, __jni_impl::android::app::PendingIntent arg1);
		void requestPermission(__jni_impl::android::hardware::usb::UsbDevice arg0, __jni_impl::android::app::PendingIntent arg1);
	};
} // namespace __jni_impl::android::hardware::usb

#include "../../../java/util/HashMap.hpp"
#include "UsbDeviceConnection.hpp"
#include "UsbDevice.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "UsbAccessory.hpp"
#include "../../app/PendingIntent.hpp"

namespace __jni_impl::android::hardware::usb
{
	// Fields
	jstring UsbManager::ACTION_USB_ACCESSORY_ATTACHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_ACCESSORY_ATTACHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::ACTION_USB_ACCESSORY_DETACHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_ACCESSORY_DETACHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::ACTION_USB_DEVICE_ATTACHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_DEVICE_ATTACHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::ACTION_USB_DEVICE_DETACHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"ACTION_USB_DEVICE_DETACHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::EXTRA_ACCESSORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"EXTRA_ACCESSORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::EXTRA_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbManager::EXTRA_PERMISSION_GRANTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbManager",
			"EXTRA_PERMISSION_GRANTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void UsbManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UsbManager::getDeviceList()
	{
		return __thiz.callObjectMethod(
			"getDeviceList",
			"()Ljava/util/HashMap;"
		);
	}
	QAndroidJniObject UsbManager::openDevice(__jni_impl::android::hardware::usb::UsbDevice arg0)
	{
		return __thiz.callObjectMethod(
			"openDevice",
			"(Landroid/hardware/usb/UsbDevice;)Landroid/hardware/usb/UsbDeviceConnection;",
			arg0.__jniObject().object()
		);
	}
	jarray UsbManager::getAccessoryList()
	{
		return __thiz.callObjectMethod(
			"getAccessoryList",
			"()[Landroid/hardware/usb/UsbAccessory;"
		).object<jarray>();
	}
	QAndroidJniObject UsbManager::openAccessory(__jni_impl::android::hardware::usb::UsbAccessory arg0)
	{
		return __thiz.callObjectMethod(
			"openAccessory",
			"(Landroid/hardware/usb/UsbAccessory;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object()
		);
	}
	jboolean UsbManager::hasPermission(__jni_impl::android::hardware::usb::UsbDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasPermission",
			"(Landroid/hardware/usb/UsbDevice;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UsbManager::hasPermission(__jni_impl::android::hardware::usb::UsbAccessory arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasPermission",
			"(Landroid/hardware/usb/UsbAccessory;)Z",
			arg0.__jniObject().object()
		);
	}
	void UsbManager::requestPermission(__jni_impl::android::hardware::usb::UsbAccessory arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"requestPermission",
			"(Landroid/hardware/usb/UsbAccessory;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void UsbManager::requestPermission(__jni_impl::android::hardware::usb::UsbDevice arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"requestPermission",
			"(Landroid/hardware/usb/UsbDevice;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware::usb

namespace android::hardware::usb
{
	class UsbManager : public __jni_impl::android::hardware::usb::UsbManager
	{
	public:
		UsbManager(QAndroidJniObject obj) { __thiz = obj; }
		UsbManager()
		{
			__constructor();
		}
	};
} // namespace android::hardware::usb

#endif // ANDROID_HARDWARE_USB_USBMANAGER

