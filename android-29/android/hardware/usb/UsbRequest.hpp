#pragma once

#ifndef ANDROID_HARDWARE_USB_USBREQUEST
#define ANDROID_HARDWARE_USB_USBREQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::usb
{
	class UsbDeviceConnection;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbEndpoint;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::android::hardware::usb
{
	class UsbRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean initialize(__jni_impl::android::hardware::usb::UsbDeviceConnection arg0, __jni_impl::android::hardware::usb::UsbEndpoint arg1);
		jboolean queue(__jni_impl::java::nio::ByteBuffer arg0, jint arg1);
		jboolean queue(__jni_impl::java::nio::ByteBuffer arg0);
		void close();
		jboolean cancel();
		QAndroidJniObject getEndpoint();
		jobject getClientData();
		void setClientData(jobject arg0);
	};
} // namespace __jni_impl::android::hardware::usb

#include "UsbDeviceConnection.hpp"
#include "UsbEndpoint.hpp"
#include "../../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::hardware::usb
{
	// Fields
	
	// Constructors
	void UsbRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbRequest",
			"()V");
	}
	
	// Methods
	jboolean UsbRequest::initialize(__jni_impl::android::hardware::usb::UsbDeviceConnection arg0, __jni_impl::android::hardware::usb::UsbEndpoint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"initialize",
			"(Landroid/hardware/usb/UsbDeviceConnection;Landroid/hardware/usb/UsbEndpoint;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean UsbRequest::queue(__jni_impl::java::nio::ByteBuffer arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"queue",
			"(Ljava/nio/ByteBuffer;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean UsbRequest::queue(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jboolean>(
			"queue",
			"(Ljava/nio/ByteBuffer;)Z",
			arg0.__jniObject().object()
		);
	}
	void UsbRequest::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean UsbRequest::cancel()
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	QAndroidJniObject UsbRequest::getEndpoint()
	{
		return __thiz.callObjectMethod(
			"getEndpoint",
			"()Landroid/hardware/usb/UsbEndpoint;"
		);
	}
	jobject UsbRequest::getClientData()
	{
		return __thiz.callObjectMethod(
			"getClientData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void UsbRequest::setClientData(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setClientData",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace __jni_impl::android::hardware::usb

namespace android::hardware::usb
{
	class UsbRequest : public __jni_impl::android::hardware::usb::UsbRequest
	{
	public:
		UsbRequest(QAndroidJniObject obj) { __thiz = obj; }
		UsbRequest()
		{
			__constructor();
		}
	};
} // namespace android::hardware::usb

#endif // ANDROID_HARDWARE_USB_USBREQUEST

