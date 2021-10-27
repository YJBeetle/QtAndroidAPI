#include "./UsbConfiguration.hpp"
#include "./UsbDevice.hpp"
#include "./UsbEndpoint.hpp"
#include "./UsbInterface.hpp"
#include "./UsbRequest.hpp"
#include "./UsbDeviceConnection.hpp"

namespace android::hardware::usb
{
	// Fields
	
	UsbDeviceConnection::UsbDeviceConnection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint UsbDeviceConnection::bulkTransfer(android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3)
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
	jint UsbDeviceConnection::bulkTransfer(android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4)
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
	jboolean UsbDeviceConnection::claimInterface(android::hardware::usb::UsbInterface arg0, jboolean arg1)
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
	jboolean UsbDeviceConnection::releaseInterface(android::hardware::usb::UsbInterface arg0)
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
	jboolean UsbDeviceConnection::setConfiguration(android::hardware::usb::UsbConfiguration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setConfiguration",
			"(Landroid/hardware/usb/UsbConfiguration;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UsbDeviceConnection::setInterface(android::hardware::usb::UsbInterface arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setInterface",
			"(Landroid/hardware/usb/UsbInterface;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware::usb

