#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::usb
{
	class UsbConfiguration;
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
		jint bulkTransfer(android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3);
		jint bulkTransfer(android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4);
		jboolean claimInterface(android::hardware::usb::UsbInterface arg0, jboolean arg1);
		void close();
		jint controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4, jint arg5, jint arg6);
		jint controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4, jint arg5, jint arg6, jint arg7);
		jint getFileDescriptor();
		jbyteArray getRawDescriptors();
		jstring getSerial();
		jboolean releaseInterface(android::hardware::usb::UsbInterface arg0);
		android::hardware::usb::UsbRequest requestWait();
		android::hardware::usb::UsbRequest requestWait(jlong arg0);
		jboolean setConfiguration(android::hardware::usb::UsbConfiguration arg0);
		jboolean setInterface(android::hardware::usb::UsbInterface arg0);
	};
} // namespace android::hardware::usb

