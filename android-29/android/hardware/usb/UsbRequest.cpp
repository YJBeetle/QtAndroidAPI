#include "./UsbDeviceConnection.hpp"
#include "./UsbEndpoint.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./UsbRequest.hpp"

namespace android::hardware::usb
{
	// Fields
	
	UsbRequest::UsbRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UsbRequest::UsbRequest()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.usb.UsbRequest",
			"()V"
		);
	}
	
	// Methods
	jboolean UsbRequest::cancel()
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	void UsbRequest::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jobject UsbRequest::getClientData()
	{
		return __thiz.callObjectMethod(
			"getClientData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject UsbRequest::getEndpoint()
	{
		return __thiz.callObjectMethod(
			"getEndpoint",
			"()Landroid/hardware/usb/UsbEndpoint;"
		);
	}
	jboolean UsbRequest::initialize(android::hardware::usb::UsbDeviceConnection arg0, android::hardware::usb::UsbEndpoint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"initialize",
			"(Landroid/hardware/usb/UsbDeviceConnection;Landroid/hardware/usb/UsbEndpoint;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean UsbRequest::queue(java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jboolean>(
			"queue",
			"(Ljava/nio/ByteBuffer;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UsbRequest::queue(java::nio::ByteBuffer arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"queue",
			"(Ljava/nio/ByteBuffer;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void UsbRequest::setClientData(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setClientData",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::hardware::usb

