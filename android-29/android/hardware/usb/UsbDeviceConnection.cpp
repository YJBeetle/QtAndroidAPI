#include "../../../JByteArray.hpp"
#include "./UsbConfiguration.hpp"
#include "./UsbDevice.hpp"
#include "./UsbEndpoint.hpp"
#include "./UsbInterface.hpp"
#include "./UsbRequest.hpp"
#include "../../../JString.hpp"
#include "./UsbDeviceConnection.hpp"

namespace android::hardware::usb
{
	// Fields
	
	// QAndroidJniObject forward
	UsbDeviceConnection::UsbDeviceConnection(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbDeviceConnection::bulkTransfer(android::hardware::usb::UsbEndpoint arg0, JByteArray arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"bulkTransfer",
			"(Landroid/hardware/usb/UsbEndpoint;[BII)I",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		);
	}
	jint UsbDeviceConnection::bulkTransfer(android::hardware::usb::UsbEndpoint arg0, JByteArray arg1, jint arg2, jint arg3, jint arg4) const
	{
		return callMethod<jint>(
			"bulkTransfer",
			"(Landroid/hardware/usb/UsbEndpoint;[BIII)I",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean UsbDeviceConnection::claimInterface(android::hardware::usb::UsbInterface arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"claimInterface",
			"(Landroid/hardware/usb/UsbInterface;Z)Z",
			arg0.object(),
			arg1
		);
	}
	void UsbDeviceConnection::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint UsbDeviceConnection::controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4, jint arg5, jint arg6) const
	{
		return callMethod<jint>(
			"controlTransfer",
			"(IIII[BII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jbyteArray>(),
			arg5,
			arg6
		);
	}
	jint UsbDeviceConnection::controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4, jint arg5, jint arg6, jint arg7) const
	{
		return callMethod<jint>(
			"controlTransfer",
			"(IIII[BIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jbyteArray>(),
			arg5,
			arg6,
			arg7
		);
	}
	jint UsbDeviceConnection::getFileDescriptor() const
	{
		return callMethod<jint>(
			"getFileDescriptor",
			"()I"
		);
	}
	JByteArray UsbDeviceConnection::getRawDescriptors() const
	{
		return callObjectMethod(
			"getRawDescriptors",
			"()[B"
		);
	}
	JString UsbDeviceConnection::getSerial() const
	{
		return callObjectMethod(
			"getSerial",
			"()Ljava/lang/String;"
		);
	}
	jboolean UsbDeviceConnection::releaseInterface(android::hardware::usb::UsbInterface arg0) const
	{
		return callMethod<jboolean>(
			"releaseInterface",
			"(Landroid/hardware/usb/UsbInterface;)Z",
			arg0.object()
		);
	}
	android::hardware::usb::UsbRequest UsbDeviceConnection::requestWait() const
	{
		return callObjectMethod(
			"requestWait",
			"()Landroid/hardware/usb/UsbRequest;"
		);
	}
	android::hardware::usb::UsbRequest UsbDeviceConnection::requestWait(jlong arg0) const
	{
		return callObjectMethod(
			"requestWait",
			"(J)Landroid/hardware/usb/UsbRequest;",
			arg0
		);
	}
	jboolean UsbDeviceConnection::setConfiguration(android::hardware::usb::UsbConfiguration arg0) const
	{
		return callMethod<jboolean>(
			"setConfiguration",
			"(Landroid/hardware/usb/UsbConfiguration;)Z",
			arg0.object()
		);
	}
	jboolean UsbDeviceConnection::setInterface(android::hardware::usb::UsbInterface arg0) const
	{
		return callMethod<jboolean>(
			"setInterface",
			"(Landroid/hardware/usb/UsbInterface;)Z",
			arg0.object()
		);
	}
} // namespace android::hardware::usb

