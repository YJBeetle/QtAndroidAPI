#include "./UsbDeviceConnection.hpp"
#include "./UsbEndpoint.hpp"
#include "../../../JObject.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./UsbRequest.hpp"

namespace android::hardware::usb
{
	// Fields
	
	// QAndroidJniObject forward
	UsbRequest::UsbRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	UsbRequest::UsbRequest()
		: JObject(
			"android.hardware.usb.UsbRequest",
			"()V"
		) {}
	
	// Methods
	jboolean UsbRequest::cancel()
	{
		return callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	void UsbRequest::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject UsbRequest::getClientData()
	{
		return callObjectMethod(
			"getClientData",
			"()Ljava/lang/Object;"
		);
	}
	android::hardware::usb::UsbEndpoint UsbRequest::getEndpoint()
	{
		return callObjectMethod(
			"getEndpoint",
			"()Landroid/hardware/usb/UsbEndpoint;"
		);
	}
	jboolean UsbRequest::initialize(android::hardware::usb::UsbDeviceConnection arg0, android::hardware::usb::UsbEndpoint arg1)
	{
		return callMethod<jboolean>(
			"initialize",
			"(Landroid/hardware/usb/UsbDeviceConnection;Landroid/hardware/usb/UsbEndpoint;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean UsbRequest::queue(java::nio::ByteBuffer arg0)
	{
		return callMethod<jboolean>(
			"queue",
			"(Ljava/nio/ByteBuffer;)Z",
			arg0.object()
		);
	}
	jboolean UsbRequest::queue(java::nio::ByteBuffer arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"queue",
			"(Ljava/nio/ByteBuffer;I)Z",
			arg0.object(),
			arg1
		);
	}
	void UsbRequest::setClientData(JObject arg0)
	{
		callMethod<void>(
			"setClientData",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::hardware::usb

