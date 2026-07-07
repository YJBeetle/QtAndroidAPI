#pragma once

#include "./UsbDeviceConnection.def.hpp"
#include "./UsbEndpoint.def.hpp"
#include "../../../JObject.hpp"
#include "../../../java/nio/ByteBuffer.def.hpp"
#include "./UsbRequest.def.hpp"

namespace android::hardware::usb
{
	// Fields
	
	// Constructors
	inline UsbRequest::UsbRequest()
		: JObject(
			"android.hardware.usb.UsbRequest",
			"()V"
		) {}
	
	// Methods
	inline jboolean UsbRequest::cancel() const
	{
		return callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	inline void UsbRequest::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JObject UsbRequest::getClientData() const
	{
		return callObjectMethod(
			"getClientData",
			"()Ljava/lang/Object;"
		);
	}
	inline android::hardware::usb::UsbEndpoint UsbRequest::getEndpoint() const
	{
		return callObjectMethod(
			"getEndpoint",
			"()Landroid/hardware/usb/UsbEndpoint;"
		);
	}
	inline jboolean UsbRequest::initialize(android::hardware::usb::UsbDeviceConnection arg0, android::hardware::usb::UsbEndpoint arg1) const
	{
		return callMethod<jboolean>(
			"initialize",
			"(Landroid/hardware/usb/UsbDeviceConnection;Landroid/hardware/usb/UsbEndpoint;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean UsbRequest::queue(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jboolean>(
			"queue",
			"(Ljava/nio/ByteBuffer;)Z",
			arg0.object()
		);
	}
	inline jboolean UsbRequest::queue(java::nio::ByteBuffer arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"queue",
			"(Ljava/nio/ByteBuffer;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline void UsbRequest::setClientData(JObject arg0) const
	{
		callMethod<void>(
			"setClientData",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::hardware::usb

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::usb;
#endif
