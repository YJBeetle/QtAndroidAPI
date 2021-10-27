#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::usb
{
	class UsbConfiguration;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbDevice;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbEndpoint;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbInterface;
}
namespace __jni_impl::android::hardware::usb
{
	class UsbRequest;
}

namespace __jni_impl::android::hardware::usb
{
	class UsbDeviceConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint bulkTransfer(__jni_impl::android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3);
		jint bulkTransfer(__jni_impl::android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4);
		jboolean claimInterface(__jni_impl::android::hardware::usb::UsbInterface arg0, jboolean arg1);
		void close();
		jint controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4, jint arg5, jint arg6);
		jint controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4, jint arg5, jint arg6, jint arg7);
		jint getFileDescriptor();
		jbyteArray getRawDescriptors();
		jstring getSerial();
		jboolean releaseInterface(__jni_impl::android::hardware::usb::UsbInterface arg0);
		QAndroidJniObject requestWait();
		QAndroidJniObject requestWait(jlong arg0);
		jboolean setConfiguration(__jni_impl::android::hardware::usb::UsbConfiguration arg0);
		jboolean setInterface(__jni_impl::android::hardware::usb::UsbInterface arg0);
	};
} // namespace __jni_impl::android::hardware::usb

#include "UsbConfiguration.hpp"
#include "UsbDevice.hpp"
#include "UsbEndpoint.hpp"
#include "UsbInterface.hpp"
#include "UsbRequest.hpp"

namespace __jni_impl::android::hardware::usb
{
	// Fields
	
	// Constructors
	void UsbDeviceConnection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbDeviceConnection",
			"(V)V");
	}
	
	// Methods
	jint UsbDeviceConnection::bulkTransfer(__jni_impl::android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"bulkTransfer",
			"(Landroid/hardware/usb/UsbEndpoint;[BII)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jint UsbDeviceConnection::bulkTransfer(__jni_impl::android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4)
	{
		return __thiz.callMethod<jint>(
			"bulkTransfer",
			"(Landroid/hardware/usb/UsbEndpoint;[BIII)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean UsbDeviceConnection::claimInterface(__jni_impl::android::hardware::usb::UsbInterface arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"claimInterface",
			"(Landroid/hardware/usb/UsbInterface;Z)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void UsbDeviceConnection::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint UsbDeviceConnection::controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4, jint arg5, jint arg6)
	{
		return __thiz.callMethod<jint>(
			"controlTransfer",
			"(IIII[BII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jint UsbDeviceConnection::controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4, jint arg5, jint arg6, jint arg7)
	{
		return __thiz.callMethod<jint>(
			"controlTransfer",
			"(IIII[BIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	jint UsbDeviceConnection::getFileDescriptor()
	{
		return __thiz.callMethod<jint>(
			"getFileDescriptor",
			"()I"
		);
	}
	jbyteArray UsbDeviceConnection::getRawDescriptors()
	{
		return __thiz.callObjectMethod(
			"getRawDescriptors",
			"()[B"
		).object<jbyteArray>();
	}
	jstring UsbDeviceConnection::getSerial()
	{
		return __thiz.callObjectMethod(
			"getSerial",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean UsbDeviceConnection::releaseInterface(__jni_impl::android::hardware::usb::UsbInterface arg0)
	{
		return __thiz.callMethod<jboolean>(
			"releaseInterface",
			"(Landroid/hardware/usb/UsbInterface;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UsbDeviceConnection::requestWait()
	{
		return __thiz.callObjectMethod(
			"requestWait",
			"()Landroid/hardware/usb/UsbRequest;"
		);
	}
	QAndroidJniObject UsbDeviceConnection::requestWait(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"requestWait",
			"(J)Landroid/hardware/usb/UsbRequest;",
			arg0
		);
	}
	jboolean UsbDeviceConnection::setConfiguration(__jni_impl::android::hardware::usb::UsbConfiguration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setConfiguration",
			"(Landroid/hardware/usb/UsbConfiguration;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UsbDeviceConnection::setInterface(__jni_impl::android::hardware::usb::UsbInterface arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setInterface",
			"(Landroid/hardware/usb/UsbInterface;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware::usb

namespace android::hardware::usb
{
	class UsbDeviceConnection : public __jni_impl::android::hardware::usb::UsbDeviceConnection
	{
	public:
		UsbDeviceConnection(QAndroidJniObject obj) { __thiz = obj; }
		UsbDeviceConnection()
		{
			__constructor();
		}
	};
} // namespace android::hardware::usb

