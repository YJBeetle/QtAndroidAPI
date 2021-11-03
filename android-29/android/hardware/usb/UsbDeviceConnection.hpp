#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::hardware::usb
{
	class UsbConfiguration;
}
namespace android::hardware::usb
{
	class UsbDevice;
}
namespace android::hardware::usb
{
	class UsbEndpoint;
}
namespace android::hardware::usb
{
	class UsbInterface;
}
namespace android::hardware::usb
{
	class UsbRequest;
}
class JString;

namespace android::hardware::usb
{
	class UsbDeviceConnection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UsbDeviceConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbDeviceConnection(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint bulkTransfer(android::hardware::usb::UsbEndpoint arg0, JByteArray arg1, jint arg2, jint arg3) const;
		jint bulkTransfer(android::hardware::usb::UsbEndpoint arg0, JByteArray arg1, jint arg2, jint arg3, jint arg4) const;
		jboolean claimInterface(android::hardware::usb::UsbInterface arg0, jboolean arg1) const;
		void close() const;
		jint controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4, jint arg5, jint arg6) const;
		jint controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4, jint arg5, jint arg6, jint arg7) const;
		jint getFileDescriptor() const;
		JByteArray getRawDescriptors() const;
		JString getSerial() const;
		jboolean releaseInterface(android::hardware::usb::UsbInterface arg0) const;
		android::hardware::usb::UsbRequest requestWait() const;
		android::hardware::usb::UsbRequest requestWait(jlong arg0) const;
		jboolean setConfiguration(android::hardware::usb::UsbConfiguration arg0) const;
		jboolean setInterface(android::hardware::usb::UsbInterface arg0) const;
	};
} // namespace android::hardware::usb

